/***************************************************************************
                          clusterview.cpp  -  description
                             -------------------
    begin                : Thu Aug 21 2003
    copyright            : (C) 2003 by 
    email                : 
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

//include files for the application
#include "clusterview.h"
#include "klustersview.h"
#include "klustersdoc.h"
#include "data.h"
#include "itemcolors.h"

#include "timer.h"

//General C++ include files
#include <math.h>
#include <stdlib.h>

// include files for Qt
#include <qpaintdevice.h>
#include <qapplication.h>
#include <qcursor.h>
#include <qpaintdevicemetrics.h>

// include files for kde
#include <kiconloader.h>

using namespace std;

const QColor ClusterView::NEW_CLUSTER_COLOR(green);
const QColor ClusterView::DELETE_NOISE_COLOR(220,220,220);
const QColor ClusterView::DELETE_ARTEFACT_COLOR(red);

ClusterView::ClusterView(KlustersDoc& doc,KlustersView& view,QColor backgroundColor,int timeInterval,KStatusBar * statusBar,QWidget* parent, const char* name,
int minSize, int maxSize, int windowTopLeft ,int windowBottomRight, int border) :
ViewWidget(doc,view,backgroundColor,statusBar,parent,name,minSize,maxSize,windowTopLeft,windowBottomRight,border),
selectionPolygon(0), nbSelectionPoints(0),polygonClosed(false),existLastMovingLine(false)
{
  //Set the default mode
  mode = ZOOM;

  //Initialize internal variables
  timeDimension = doc.data().timeDimension();
  samplingInterval = doc.data().intervalOfSampling();
  setTimeStepInSecond(timeInterval);
 
  //Update the dimension of the window and the values of dimensionX and dimensionY
  updatedDimensions(view.abscissaDimension(),view.ordinateDimension());

  KIconLoader *loader = KGlobal::iconLoader();
  
  newClusterCursor = QCursor(loader->loadIcon("new_cluster_cursor", KIcon::User),0,0);
  newClustersCursor = QCursor(loader->loadIcon("new_clusters_cursor", KIcon::User),0,0);
  deleteNoiseCursor = QCursor(loader->loadIcon("delete_noise_cursor", KIcon::User),0,0);
  deleteArtefactCursor = QCursor(loader->loadIcon("delete_artefact_cursor", KIcon::User),0,0);
  selectTimeCursor = QCursor(loader->loadIcon("select_time_cursor", KIcon::User),0,0);

  //The default tool is the zoom.
  setCursor(zoomCursor);

  //Allowed the mouse tracking to draw the tracking lines and write the mouse coordinates
  setMouseTracking(true) ;  
}

ClusterView::~ClusterView(){
  cout << "in ~ClusterView(): "<<endl;
}

void ClusterView::drawClusters(QPainter& painter,const QValueList<int>& clustersList,bool drawCircles){  
  //Loop on the clusters to be drawn
  QValueList<int>::const_iterator clusterIterator;

  ItemColors& clusterColors = doc.clusterColors();
  Data& clusteringData = doc.data();
         
  for(clusterIterator = clustersList.begin(); clusterIterator != clustersList.end(); ++clusterIterator){        
    //Get the color associated with the cluster and set the color to use to this color
    painter.setPen(clusterColors.color(*clusterIterator));
    //Get the iterator on the spikes of the current cluster
    Data::Iterator spikeIterator = clusteringData.iterator(static_cast<dataType>(*clusterIterator));
    //Iterate over the spikes of the cluster and draw them
    if(drawCircles) for(;spikeIterator.hasNext();spikeIterator.next()){
     QPoint point = spikeIterator(dimensionX,dimensionY);
     painter.setBrush(clusterColors.color(*clusterIterator));
     painter.drawEllipse(point.x() - 1,point.y() - 1,2,2);
    }
    else for(;spikeIterator.hasNext();spikeIterator.next()){
     painter.drawPoint(spikeIterator(dimensionX,dimensionY));
    }
  }

  painter.setBrush(NoBrush);
}

void ClusterView::drawContents(QPainter* p){
  if(drawContentsMode == UPDATE || drawContentsMode == REDRAW){
    viewport = contentsRect();
 
    //Resize the double buffer with the width and the height of the widget(QFrame)
    doublebuffer.resize(viewport.width(),viewport.height());
    
    //Create a painter to paint on the double buffer
    QPainter painter;
    painter.begin(&doublebuffer);
      
    //set the window (part of the word I want to show)
    QRect r((QRect)window);
    
    painter.setWindow(r.left(),r.top(),r.width()-1,r.height()-1);//hack because Qt QRect is used differently in this function
    
    if(drawContentsMode == REDRAW){
      //Reset the variables associates with the polygon

      //Resize selectionPolygon to remove all the last selected area, reinitialize nbSelectionPoints accordingly
      selectionPolygon.resize(0);
      nbSelectionPoints = 0;
  
      //Fill the double buffer with the background
      doublebuffer.fill(backgroundColor());

      //Draw the axes
      drawAxes(painter);

      //Paint all the clusters in the shownClusters list (in the double buffer)
      drawClusters(painter,view.clusters());      
    }
    if(drawContentsMode == UPDATE){
           
      //Erase any polygon of selection and reset the associated variables
      resetSelectionPolygon();
      
      //Paint the the clusters to update contain in clusterUpdateList
      if(clusterUpdateList.size()>0)drawClusters(painter,clusterUpdateList);

      //Clear the update list
      clusterUpdateList.clear();
    }

    //reset transformation due to setWindow
    painter.resetXForm() ;

    
    //Draw the time axis information if the time is displayed
    drawTimeInformation(painter);
       
    //Closes the painter on the double buffer
    painter.end();

    //Back to the default
    drawContentsMode = REFRESH; 
  }
  //if drawContentsMode == REFRESH, we reuse the double buffer (pixmap)

  //Draw the double buffer (pixmap) by copying it into the paint device.
  p->drawPixmap(0, 0, doublebuffer);
}

void ClusterView::resetSelectionPolygon(){

  if(selectionPolygon.size()>0){  
   //Erase the existing polygon
  
   //Select the appropriate color
   QColor color = selectPolygonColor(mode);

      //if the polygon was closed, erase the closing line
   if(polygonClosed){
     QPainter painter;
     painter.begin(&doublebuffer);
     //set the window (part of the word I want to show)
     QRect r((QRect)window);
     painter.setWindow(r.left(),r.top(),r.width()-1,r.height()-1);//hack because Qt QRect is used differently in this function

     painter.setRasterOp(XorROP);
     painter.setPen(color);
    
     //Erase the closing line
     painter.drawLine(selectionPolygon.point(0),selectionPolygon.point(selectionPolygon.size()-1));

     if(existLastMovingLine)painter.drawPoint(selectionPolygon.point(selectionPolygon.size()-1));
     //reset existLastMovingLine
     existLastMovingLine = false;
     
     painter.end();
     
     polygonClosed = false;
   }
   
   while(selectionPolygon.size()>0) eraseTheLastDrawnLine(color);

   //Reset the variables associates with the polygon

   //Resize selectionPolygon to remove all the last selected area, reinitialize nbSelectionPoints accordingly
   selectionPolygon.resize(0);
   nbSelectionPoints = 0;
  }
}


void ClusterView::eraseTheLastDrawnLine(QColor polygonColor){
  //Paint in the buffer to allow the selection to be redrawn after a refresh
  QPainter painter;
  painter.begin(&doublebuffer);
  //set the window (part of the word I want to show)
  QRect r((QRect)window);
  painter.setWindow(r.left(),r.top(),r.width()-1,r.height()-1);//hack because Qt QRect is used differently in this function
  painter.setRasterOp(XorROP);
  painter.setPen(polygonColor);

  //The user did not move since the last left click (no mouseMoveEvent)
  if(nbSelectionPoints == selectionPolygon.size()){   
    //Treat the case when we reach the first point of the selection
    if(nbSelectionPoints == 1){
      //Resize selectionPolygon to remove the point from selectionPolygon
      selectionPolygon.resize(0);
      nbSelectionPoints = 0;
    }
    else{
      //Erase the last line drawn
      painter.drawPolyline(selectionPolygon,selectionPolygon.size()-2);
      //Resize selectionPolygon to remove the last point from selectionPolygon
      selectionPolygon.resize(selectionPolygon.size()-1);
      nbSelectionPoints = selectionPolygon.size();
    }
  }
  //The user moved since the last left click, a line has been drawn in the mouseMoveEvent
  else{
    //Treat the case when we reach the first point of the selection
    if(nbSelectionPoints == 1){
      //Erase the last line drawn (in mouseMoveEvent).
      painter.drawPolyline(selectionPolygon,selectionPolygon.size()-2);
    }
    else{
      //CAUTION, Do not remove this line otherwise strang dots will appear
      painter.drawPoint(selectionPolygon.point(selectionPolygon.size()-2));
      //Erase the last line drawn (in mouseMoveEvent) plus the line between the 2 last selected points
      //(selected by a left click of the user)
      painter.drawPolyline(selectionPolygon,selectionPolygon.size()-3);
    }
    //Resize selectionPolygon to remove the 2 last points
    //(the last selected and the one set in mouseMoveEvent) from selectionPolygon
    selectionPolygon.resize(selectionPolygon.size()-2);

    nbSelectionPoints = selectionPolygon.size();
  }
      
  painter.end();
}

void ClusterView::eraseTheLastMovingLine(QColor polygonColor){
  //The user moved since the last left click, a line has been drawn in the mouseMoveEvent
  if(nbSelectionPoints != selectionPolygon.size()){
    //set existLastMovingLine to true to correctely erase the closed polygon
    existLastMovingLine = true;
    
    //Paint in the buffer to allow the selection to be redrawn after a refresh
    QPainter painter;
    painter.begin(&doublebuffer);
    //set the window (part of the word I want to show)
    QRect r((QRect)window);
    painter.setWindow(r.left(),r.top(),r.width()-1,r.height()-1);//hack because Qt QRect is used differently in this function
    painter.setRasterOp(XorROP);
    painter.setPen(polygonColor);
  
    //Treat the case when we reach the first point of the selection
    if(nbSelectionPoints == 1){
      //Erase the last line drawn (in mouseMoveEvent).
      painter.drawPolyline(selectionPolygon,selectionPolygon.size()-2);
    }
    else{
      //CAUTION, Do not remove this line otherwise strang dots will appear
      painter.drawPoint(selectionPolygon.point(selectionPolygon.size()-2));
      //Erase the last line drawn (in mouseMoveEvent)
      painter.drawPolyline(selectionPolygon,selectionPolygon.size()-2);
    }
    //Resize selectionPolygon to remove the last point
    //(the one set in mouseMoveEvent) from selectionPolygon
    selectionPolygon.resize(selectionPolygon.size()-1);

    nbSelectionPoints = selectionPolygon.size();  

    painter.end();
  }
}

void ClusterView::addClusterToUpdate(int clusterId){                          
  //Add the the cluster id to the clusterUpdateList,
  // so it will be updated during the next update
  if(drawContentsMode == REFRESH){
   clusterUpdateList.append(clusterId);
   drawContentsMode = UPDATE;
  }
  else if(drawContentsMode == UPDATE)clusterUpdateList.append(clusterId);
}


void ClusterView::updatedDimensions(int dimensionX, int dimensionY){  
  this->dimensionX = dimensionX;
  this->dimensionY = dimensionY;

  Data& clusteringData = doc.data();
  long maxForDimensionX = static_cast<long>(clusteringData.maxDimension(dimensionX));
  long minForDimensionX = static_cast<long>(clusteringData.minDimension(dimensionX));
  long maxForDimensionY = static_cast<long>(clusteringData.maxDimension(dimensionY));
  long minForDimensionY = static_cast<long>(clusteringData.minDimension(dimensionY));

  //The min and max are chosen in a maner that the axis are always visible and superior
  //to -40000000 (due to a Qt limitation in the big negative values).
  long width = maxForDimensionX - minForDimensionX;
  abscissaMin = static_cast<long>(QMIN(0,minForDimensionX)-width*0.05);
  abscissaMin = static_cast<long>(QMAX(abscissaMin,-1000000)); // below this limit, Qt crashes
  abscissaMax = static_cast<long>(QMAX(0,maxForDimensionX)+width*0.05);

  long height = maxForDimensionY - minForDimensionY;
  ordinateMin = static_cast<long>(-QMAX(0,maxForDimensionY)-height*0.05);
  ordinateMax = static_cast<long>(-QMIN(0,minForDimensionY)+height*0.05);
  ordinateMax = static_cast<long>(QMIN(ordinateMax,1000000)); // below -(this limit), Qt crashes

    
  //Update the window in a maner to always see the axis
  window = ZoomWindow(QRect(QPoint(abscissaMin,ordinateMin),QPoint(abscissaMax,ordinateMax)));
  
  drawContentsMode = REDRAW;

  //reset the information on the polygon to enable a mousetrack in mousemovEvent
  polygonClosed = false;
}

void ClusterView::setMode(BaseFrame::Mode selectedMode){
  statusBar->clear();
  resetSelectionPolygon();
  mode = selectedMode;

  //set the cursor according to the selected mode.
  switch(mode){
   case DELETE_NOISE:
     setCursor(deleteNoiseCursor);
     break;
   case DELETE_ARTEFACT:
     setCursor(deleteArtefactCursor);
     break;
   case NEW_CLUSTER:  
     setCursor(newClusterCursor);   
     break;
   case NEW_CLUSTERS: 
     setCursor(newClustersCursor);
     break;
   case ZOOM:
     setCursor(zoomCursor);
     break; 
   case SELECT_TIME:
    setCursor(selectTimeCursor);
    break;
   }
  
 //Draw the new doublebuffer onto the widget
 QPainter p(this);
 p.drawPixmap(0, 0, doublebuffer);
}

                                                                                                                                                       
void ClusterView::mousePressEvent(QMouseEvent* e){ 
  //Defining a time window t oupdate the Traceview
  if(mode == SELECT_TIME){
   QPoint current = viewportToWorld(e->x(),e->y());
   if(dimensionX == timeDimension){
     dataType time = static_cast<dataType>(current.x() * samplingInterval / static_cast<double>(1000));
     emit moveToTime(time);
   }
   else if(dimensionY == timeDimension){
    dataType time = -static_cast<dataType>(current.y() * samplingInterval / static_cast<double>(1000));
    emit moveToTime(time);
   }
  }
   
  //The parent implementation takes care of the mode ZOOM
  //(rubber band and calculation of the firstClick)
  ViewWidget::mousePressEvent(e);

  //If there is a polygon to draw (one of the selection modes) 
  if(mode == DELETE_NOISE || mode == DELETE_ARTEFACT || mode == NEW_CLUSTER || mode == NEW_CLUSTERS){  
    //Select the appropriate color
    QColor color = selectPolygonColor(mode);

    //Erase the last line drawn
    if(e->button() == QMouseEvent::RightButton){
      if(selectionPolygon.size() == 0) return;

      //Erase the last drawn line by drawing into the buffer
      eraseTheLastDrawnLine(color);

      //Draw the new doublebuffer onto the widget
      QPainter p(this);
      p.drawPixmap(0, 0, doublebuffer);
    }

    //Close the polygon of selection and trigger the right action depending on the mode
    if(e->button() == QMouseEvent::MidButton && selectionPolygon.size()>0){      
      QRegion selectionArea;

      //Paint into the buffer to allow the selection to be redrawn after a refresh
      QPainter painter;
      painter.begin(&doublebuffer);
      //set the window (part of the word I want to show)
      QRect r((QRect)window);
      painter.setWindow(r.left(),r.top(),r.width()-1,r.height()-1);//hack because Qt QRect is used differently in this function
      painter.setPen(color);

      //If, once the last moving line erase, the polygon exists and has at least 3 points, draw it
      if(selectionPolygon.size()>2){
        //erase the last line drawn if the user moved since the last click
        eraseTheLastMovingLine(color);

        //Draw the closing line of the polygon
        painter.setRasterOp(XorROP);
        painter.drawLine(selectionPolygon.point(0),selectionPolygon.point(selectionPolygon.size()-1));

        polygonClosed = true;

        //Send an event to inform that the data have to be recompute accordingly to the selection polygon.
        //This asynchronous event will allow the widget to close the polygon
        //before asking the document to compute the data.
        ComputeEvent* event = getComputeEvent(selectionPolygon.copy());
        QApplication::postEvent(this,event);
       
      }
      //reset the polygon
      else resetSelectionPolygon();
       
      painter.end();
            
      //Draw the new doublebuffer onto the widget (show the closed polygon)
      QPainter p(this);
      p.drawPixmap(0, 0, doublebuffer);

      statusBar->clear();
    }
   
    if (e->button() == QMouseEvent::LeftButton){       
      QPoint selectedPoint = viewportToWorld(e->x(),e->y());
            
      if(nbSelectionPoints == 0) selectionPolygon.putPoints(0, 1, selectedPoint.x(),selectedPoint.y());
      //If the array is not empty, the last point has been put into the array in mouseMoveEvent
      nbSelectionPoints = selectionPolygon.size();
    }
  }      
}

 void ClusterView::mouseReleaseEvent(QMouseEvent* event){
  //Trigger parent event
  ViewWidget::mouseReleaseEvent(event);
  statusBar->clear();
 }

void ClusterView::mouseMoveEvent(QMouseEvent* e){
  //Write the current coordinates in the statusbar.
  QPoint current = viewportToWorld(e->x(),e->y());

  if(dimensionX == timeDimension){
   int timeInS = static_cast<int>(current.x() * samplingInterval / static_cast<double>(1000000));
   statusBar->changeItem("Coordinates: (" + QString("%1").arg(timeInS) + ", " + QString("%1").arg(-current.y()) + ")",1);   
  }
  else if(dimensionY == timeDimension){
   int timeInS = static_cast<int>(current.y() * samplingInterval / static_cast<double>(1000000));
   statusBar->changeItem("Coordinates: (" + QString("%1").arg(current.x()) + ", " + QString("%1").arg(-timeInS) + ")",1);     
  }
  else  statusBar->changeItem("Coordinates: (" + QString("%1").arg(current.x()) + ", " + QString("%1").arg(-current.y()) + ")",1);


                          
  //The parent implementation takes care of the rubber band
  ViewWidget::mouseMoveEvent(e);

  //If the user is closing the polygon do not take mousemove event into account
  if(!polygonClosed){
    //In one of the selection modes we draw the tracking line
    if(mode == DELETE_NOISE || mode == DELETE_ARTEFACT || mode == NEW_CLUSTER || mode == NEW_CLUSTERS){
      
     //Select the appropriate color
     QColor color = selectPolygonColor(mode);

     //If there is no selection point, do not draw a tracking line
     if(selectionPolygon.size() == 0) return;

     //Paint in the buffer to allow the selection to be redrawn after a refresh
     QPainter painter;
     painter.begin(&doublebuffer);
     //set the window (part of the word I want to show)
     QRect r((QRect)window);
     painter.setWindow(r.left(),r.top(),r.width()-1,r.height()-1);//hack because Qt QRect is used differently in this function
     painter.setRasterOp(XorROP);
     painter.setPen(color);

     //First mouseMoveEvent after the last mousePressEvent
     if(nbSelectionPoints == selectionPolygon.size()){
       //Add the current point to the array
       selectionPolygon.putPoints(selectionPolygon.size(), 1, current.x(),current.y());
       painter.drawPolyline(selectionPolygon,selectionPolygon.size()-2);
     }
     else{
       //Erase the previous drawn line
       painter.drawPolyline(selectionPolygon,selectionPolygon.size()-2);
       //Replace the last point by the current one
       selectionPolygon.setPoint(selectionPolygon.size()-1,current);
       //Draw the new line
       painter.drawPolyline(selectionPolygon,selectionPolygon.size()-2);
     }
     painter.end();

     //Draw the new doublebuffer onto the widget
     QPainter p(this);
     p.drawPixmap(0, 0, doublebuffer);
    }
  }
}

void ClusterView::customEvent(QCustomEvent* event){
 if(event->type() == QEvent::User + 700){
  QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
  
  ComputeEvent* computeEvent = (ComputeEvent*) event;
  //Get the polygon
  QPointArray polygon = computeEvent->polygon();
  QRegion selectionArea;
  QPointArray reviewPolygon;
  long Xdimension = 0;
  long Ydimension = 0;

   //The QRegion uses rectangles to define its area and the number of rectangles
   //increases with the height of the region (y axis). The more rectangles the longer
   //the search of one point in the region will take. With a dimension like the time
   //the height has an order of the millon (at least 5 going to 80 or more) given a huge amount
   //of rectangles. A way of speeding the search of points is to reduce the number of rectangles.
   //To do so, if the y dimension is the time, x and y axis are inverted.
   //Caution: in Qt graphical coordinate system, the Y axis is inverted (increasing downwards),
   //thus a point (x,y) is drawn as (x,-y), before creating the region the points are reset to there raw value (x,y).
     
  if(view.ordinateDimension() != timeDimension){
    for(uint i = 0; i< polygon.size();++i){
     reviewPolygon.putPoints(i, 1,polygon.point(i).x(),-polygon.point(i).y());
     Xdimension = dimensionX;
     Ydimension = dimensionY;    
    }
  }
  else{    
    for(uint i = 0; i< polygon.size();++i){
     reviewPolygon.putPoints(i, 1,-polygon.point(i).y(),polygon.point(i).x());

     Xdimension = dimensionY;
     Ydimension = dimensionX;         
   }
  }
  //Create a QRegion with the new selection area in order to use the research facilities offer by a QRegion.  
  selectionArea = QRegion(reviewPolygon);
  if(!selectionArea.isNull()){
    //Call any appropriate method
    switch(mode){
     case DELETE_NOISE:
        doc.deleteNoise(selectionArea,view.clusters(),Xdimension,Ydimension);        
        break;
     case DELETE_ARTEFACT:
       doc.deleteArtifact(selectionArea,view.clusters(),Xdimension,Ydimension);
       break;
     case NEW_CLUSTER:
       doc.createNewCluster(selectionArea,view.clusters(),Xdimension,Ydimension);
       break;
     case NEW_CLUSTERS:
        doc.createNewClusters(selectionArea,view.clusters(),Xdimension,Ydimension);
       break;
     case ZOOM:
       break; //nothing to do   
    }
  }
  QApplication::restoreOverrideCursor(); 
 }
}
 
void ClusterView::drawAxes(QPainter& painter){
  painter.setPen(QColor(60,60,60));    //set the color for the lines     
  painter.drawLine(abscissaMin,0,abscissaMax,0); // draw line
  painter.drawLine(0,ordinateMin,0,ordinateMax); // draw line
}

void ClusterView::drawTimeInformation(QPainter& painter){
  if(dimensionX == timeDimension){
   painter.setPen(QColor(60,60,60)); //set the color for the lines   
   int markHeight = static_cast<int>(abs(ordinateMax - ordinateMin));  
   QFont f("Helvetica",9);
   painter.setFont(f);
   long time = 0;
   QRect r((QRect)window);
   long legendOrdinate = worldToViewportOrdinate(r.top()) + 20;
 
                                                            
   for(long i=0; i < abscissaMax; i += timeStepInRecordingUnit){
    QPoint topInViewport = worldToViewport(i,-markHeight);
    QPoint bottomInViewport = worldToViewport(i,markHeight);
    
    painter.drawLine(topInViewport,bottomInViewport);
    painter.drawText(topInViewport.x() + 1,legendOrdinate,QString("%1").arg(time));

    time += timeStepInSecond;
   }
  }
  else{
   if(dimensionY == timeDimension){
    painter.setPen(QColor(60,60,60)); //set the color for the lines
    QFont f("Helvetica",9); 
    painter.setFont(f);
    long time = 0;
    QRect r((QRect)window);
    long legendAbsciss = worldToViewportAbscissa(r.left()); 


    int markHeight = static_cast<int>(abs(abscissaMax - abscissaMin));
    //ordinateMin is used because in QT coordinate system the ordinate axis in downwards oriented
    //see the function updatedDimensions for detail.
    for(long i=0; i < abs(ordinateMin); i += timeStepInRecordingUnit){
     QPoint topInViewport = worldToViewport(-markHeight,-i);
     QPoint bottomInViewport = worldToViewport(markHeight,-i);
     
     painter.drawLine(topInViewport,bottomInViewport);
     painter.drawText(legendAbsciss,topInViewport.y(),QString("%1").arg(time));

     time += timeStepInSecond;
    }
   }
  }
}


void ClusterView::print(QPainter& printPainter,QPaintDeviceMetrics& metrics,bool whiteBackground){
 //Draw the double buffer (pixmap) by copying it into the printer device throught the painter.
  QRect viewportOld = QRect(viewport.left(),viewport.top(),viewport.width(),viewport.height());

  viewport = QRect(printPainter.viewport().left(),printPainter.viewport().top(),printPainter.viewport().width(),printPainter.viewport().height());

  QRect r = ((QRect)window);

  //Set the window (part of the world I want to show)
  printPainter.setWindow(r.left(),r.top(),r.width()-1,r.height()-1);//hack because Qt QRect is used differently in this function

  //Fill the background with the background color
  QRect back = QRect(r.left(),r.top(),r.width(),r.height());

  QColor colorLegendTmp = colorLegend;
  QColor background= backgroundColor();
  if(whiteBackground){
   colorLegend = black;
   setPaletteBackgroundColor(white);
  }
  
  printPainter.fillRect(back,backgroundColor());
  printPainter.setClipRect(back,QPainter::CoordPainter);

  //Draw the axes
  drawAxes(printPainter);

  //Paint all the clusters in the shownClusters list (in the double buffer)
  drawClusters(printPainter,view.clusters(),true);

  //reset transformation due to setWindow and setViewport
  printPainter.resetXForm();

  //Draw the time axis information if the time is displayed
  drawTimeInformation(printPainter);

  printPainter.setClipping(false);

  //Restore the colors.
  if(whiteBackground){
   colorLegend = colorLegendTmp;
   setPaletteBackgroundColor(background);
  }
  
  //Restore the previous state
  viewport = QRect(viewportOld.left(),viewportOld.top(),viewportOld.width(),viewportOld.height());
}





