/***************************************************************************
                          correlationview.cpp  -  description
                             -------------------
    begin                : Fri Sep 26 2003
    copyright            : (C) 2003 by Lynn Hazan
    email                : lynn.hazan@myrealbox.com
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
#include "klustersview.h"
#include "klustersdoc.h"
#include "itemcolors.h"
#include "correlationthread.h"
#include "correlationview.h"

//General C++ include files
#include <iostream>
#include <math.h>
#include <stdlib.h>

// include files for Qt
#include <qpaintdevice.h>
#include <qcursor.h>
#include <qpaintdevicemetrics.h>

// include files for kde
#include <kiconloader.h>

using namespace std;

const int CorrelationView::XMARGIN = 10;
const int CorrelationView::YMARGIN = 0;


CorrelationView::CorrelationView(KlustersDoc& doc,KlustersView& view,QColor backgroundColor,KStatusBar * statusBar,QWidget* parent,Data::ScaleMode scale,int binSize, int correlationTimeFrame,bool shoulderLine, const char* name,
int minSize, int maxSize, int windowTopLeft ,int windowBottomRight, int border) :
ViewWidget(doc,view,backgroundColor,statusBar,parent,name,minSize,maxSize,windowTopLeft,windowBottomRight,border,XMARGIN,YMARGIN),
scaleMode(scale),dataReady(true),binSize(binSize),timeWindow(correlationTimeFrame),shoulderLine(shoulderLine),
isZoomed(false),goingToDie(false),printState(false){

 //The list owns its objects, it will delete the items that are removed.
 threadsToBeKill.setAutoDelete(true);  //The treads will be delete only from threadsToBeKill

 //Set the only mode available.
 mode = ZOOM;
 
 //Set the drawing variables
 nbBins = timeWindow / binSize;
 binWidth = 100;
 widthBorder = (nbBins * binWidth) / 30;
 heightBorder = 20;
 Xspace = (nbBins * binWidth) / 10; 
 Yspace = 40;
 YsizeForMaxAmp = 200;
 if(scale == Data::RAW) Yfactor = 1;
 else Yfactor = YsizeForMaxAmp;
 
 shift = nbBins * binWidth + Xspace;

 //Compute variable to draw tick marks
 int n = 0;
 if((timeWindow - 1)/2 <= 30) n = 5;
 if((timeWindow - 1)/2 > 30 && (timeWindow - 1)/2 <= 100) n = 10;
 if((timeWindow - 1)/2 >= 100) n = 20;
 int pixelPerTimeWindow = (timeWindow * binWidth) / binSize;
 tickMarkStep = static_cast<float>(pixelPerTimeWindow * n) / static_cast<float>(timeWindow);
 nbTickMarks = static_cast<int>(floor(0.5 + static_cast<float>((timeWindow/2) / static_cast<float>(n))));

 tickMarkZero = ((nbBins - 1)/2)* binWidth + binWidth/2;

 abscissaMin = 0;
 ordinateMax = 0;

 //Create the pairs for the clusters to show.
 const QValueList<int>& shownClusters = view.clusters();
 QValueList<int> clusters;
 QValueList<int>::const_iterator clustersIterator;
 for(clustersIterator = shownClusters.begin(); clustersIterator != shownClusters.end(); ++clustersIterator)
   clusters.append(*clustersIterator);
 qHeapSort(clusters);
 
 QValueList<int>::iterator iterator;
 int i = 0;
 for(iterator = clusters.begin(); iterator != clusters.end(); ++iterator){   
  QValueList<int>::iterator iterator2;
  for(iterator2 = clusters.at(i); iterator2 != clusters.end(); ++iterator2){
   //Create pairs as (*iterator,*iterator2) where *iterator <= *iterator2
   pairs.append(Pair(*iterator,*iterator2));   
  }
  ++i;
 }
   
 updateWindow();

 //Set the cursor shap to a magnifier as the only action allowed on the widget is to zoom.
 setCursor(zoomCursor);

 //Allowed the mouse tracking to write the time in the status bar.
 setMouseTracking(true) ; 
}

CorrelationView::~CorrelationView(){
  //Ask the threads to stop as soon as possible.
  willBeKilled();
  
 //Wait until all the threads have finish before quiting otherwise
 // it may endup in a crash of the application.
 for(CorrelationThread* correlationThread = threadsToBeKill.first(); correlationThread; correlationThread = threadsToBeKill.next())
  while(!correlationThread->wait()){};  
}

bool CorrelationView::isThreadsRunning(){  
 if(threadsToBeKill.count() == 0) return false;
 else return true;
}


void CorrelationView::singleColorUpdate(int clusterId,bool active){
 if(active){
  //Add the pairs link to the cluster id to the pairUpdateList,
  // so they will be updated during the next update
  const QValueList<int>& shownClusters = view.clusters();

  QValueList<int>::ConstIterator iterator;
  for(iterator = shownClusters.begin(); iterator != shownClusters.end(); ++iterator){
   //Create pairs as (*iterator,clusterId) where *iterator <= clusterId
   //and (clusterId,*iterator) where *iterator > clusterId
   if(*iterator <= clusterId) pairUpdateList.append(Pair(*iterator,clusterId));
   else pairUpdateList.append(Pair(clusterId,*iterator));
  }

  if(drawContentsMode == REFRESH)drawContentsMode = UPDATE;
 }
 else{
  //Update drawContentsMode if need it.
  if(drawContentsMode == REFRESH || drawContentsMode == UPDATE)drawContentsMode = REDRAW;
 }
}


void CorrelationView::addClusterToView(int clusterId,bool active){
 isZoomed = false;//Hack because all the tabs share the same data.

 //Update drawContentsMode if need it.
 if(drawContentsMode == REFRESH || drawContentsMode == UPDATE)drawContentsMode = REDRAW;

 //Create a thread to get the correlation data for all the clusters shown.
 if(active && view.clusters().size() > 0){
  setCursor(Qt::WaitCursor);
  askForCorrelograms(); 
 }
}


void CorrelationView::removeClusterFromView(int clusterId,bool active){
 isZoomed = false;//Hack because all the tabs share the same data.

 //Update drawContentsMode if need it.
 if(drawContentsMode == REFRESH || drawContentsMode == UPDATE)drawContentsMode = REDRAW;

 //Create a thread to get the correlation data for all the clusters shown.
 if(active && view.clusters().size() > 0){
  setCursor(Qt::WaitCursor); 
  askForCorrelograms();
 }
 if(view.clusters().size() == 0) pairs.clear();
}


void CorrelationView::addNewClusterToView(QValueList<int>& fromClusters,int clusterId,bool active){
 isZoomed = false;//Hack because all the tabs share the same data.

 //Update drawContentsMode if need it.
 if(drawContentsMode == REFRESH || drawContentsMode == UPDATE)drawContentsMode = REDRAW;

 if(active && view.clusters().size() > 0){
  setCursor(Qt::WaitCursor);
  askForCorrelograms();
 }
}

void CorrelationView::spikesRemovedFromClusters(QValueList<int>& fromClusters,bool active){
 isZoomed = false;//Hack because all the tabs share the same data.

 //Update drawContentsMode if need it.
 if(drawContentsMode == REFRESH || drawContentsMode == UPDATE)drawContentsMode = REDRAW;

 //Create a thread to get the correlation data for all the clusters shown.
 if(active && view.clusters().size() > 0){
  setCursor(Qt::WaitCursor);
  askForCorrelograms();
 }
 if(view.clusters().size() == 0) pairs.clear(); 
}


void CorrelationView::spikesAddedToCluster(int clusterId,bool active){
 isZoomed = false;//Hack because all the tabs share the same data.

 //Update drawContentsMode if need it.
 if(drawContentsMode == REFRESH || drawContentsMode == UPDATE)drawContentsMode = REDRAW;

 //Create a thread to get the correlation data for all the clusters shown.
 if(active && view.clusters().size() > 0){
  setCursor(Qt::WaitCursor);
  askForCorrelograms();
 }
}


void CorrelationView::drawContents(QPainter *p){ 
 if((drawContentsMode == UPDATE || drawContentsMode == REDRAW) && dataReady){
 
  QRect contentsRec = contentsRect();
  //Set the window (part of the world I want to show)
  QRect r((QRect)window);

  //If the border is not visible (the user zoomed without taking it in his selection), the viewport and the contentsRec
  //have the same size.
  if(r.left() != 0) viewport = QRect(contentsRec.left(),contentsRec.top(),contentsRec.width(),contentsRec.height() -10);
  else viewport = QRect(contentsRec.left() + XMARGIN,contentsRec.top(),contentsRec.width() - XMARGIN,contentsRec.height() -10);

  //Resize the double buffer with the width and the height of the widget(QFrame)
  doublebuffer.resize(contentsRec.width(),contentsRec.height());
   
  //Create a painter to paint on the double buffer
  QPainter painter;
  painter.begin(&doublebuffer);

  painter.setWindow(r.left(),r.top(),r.width()-1,r.height()-1);//hack because Qt QRect is used differently in this function

  //Set the viewport (part of the device I want to write on).
  //By default, the viewport is the same as the device's rectangle (contentsRec), taking a smaller
  //one will ensure that the legends (cluster ids) will not ovelap a correlogram.
  painter.setViewport(viewport);


  if(drawContentsMode == REDRAW){
   //Fill the double buffer with the background
   doublebuffer.fill(backgroundColor());

   //Paint all the correlograms in the pairs list (in the double buffer)
   drawCorrelograms(painter,pairs);
  }
  //The update mode applies only when the color of a cluster has changed.
  if(drawContentsMode == UPDATE){    
   //Paint the correlograms contained in clusterUpdateList
    drawCorrelograms(painter,pairUpdateList);

    //Reset the pairUpdateList list for the next call.
    pairUpdateList.clear();
  }
  
  //reset transformation due to setWindow and setViewport
  painter.resetXForm() ;
  
  //Draw the cluster Ids along the correlograms.
  drawClusterIds(painter);

  //Closes the painter on the double buffer
  painter.end();

  //Back to the default
  drawContentsMode = REFRESH;
 }
 //if drawContentsMode == REFRESH, we reuse the double buffer (pixmap)
    
 //Draw the double buffer (pixmap) by copying it into the widget device.
 p->drawPixmap(0, 0, doublebuffer);
 setCursor(zoomCursor);
}


CorrelationThread* CorrelationView::getCorrelations(QValueList<Pair>* pairsToCompute,QValueList<int> clusterIds){
  //The creation of a thread automatically start it.
  return new CorrelationThread(*this,doc.data(),pairsToCompute,clusterIds);
}

void CorrelationView::askForCorrelograms(){  
//If the widget is not about to be deleted, request the data.
 if(!goingToDie){
  dataReady = false;

  //Compute the pairs for all the clusters currently shown.
  const QValueList<int>& shownClusters = view.clusters();
  QValueList<int> clusters;
  QValueList<int>::const_iterator clustersIterator;
  for(clustersIterator = shownClusters.begin(); clustersIterator != shownClusters.end(); ++clustersIterator)
    clusters.append(*clustersIterator);
  qHeapSort(clusters);


  pairs.clear();
  QValueList<Pair>* clusterPairs = new QValueList<Pair>();
  QValueList<int>::iterator iterator;
  int i = 0;
  for(iterator = clusters.begin(); iterator != clusters.end(); ++iterator){
   QValueList<int>::iterator iterator2;
   for(iterator2 = clusters.at(i); iterator2 != clusters.end(); ++iterator2){
    //Create pairs as (*iterator,*iterator2) where *iterator <= *iterator2
    pairs.append(Pair(*iterator,*iterator2));
    clusterPairs->append(Pair(*iterator,*iterator2));
   }
   ++i;
  }

  //Create a thread to get the correlation data for that cluster.
  CorrelationThread* correlationThread = getCorrelations(clusterPairs,clusters);
  threadsToBeKill.append(correlationThread);
 }
}
                                                                                                                                                                                                                                                                                                                                                                                                                                    
void CorrelationView::customEvent(QCustomEvent* event){
 //Event sent by a CorrelationThread to inform that the data are available.
 if(event->type() == QEvent::User + 300){
  CorrelationThread::CorrelationsEvent* correlationEvent = (CorrelationThread::CorrelationsEvent*) event;
  //Get the event information
  CorrelationThread* correlationThread = correlationEvent->parentThread();
  
  //Wait to be sure the thread has return from his run method. Even if the send of the event is the last
  //action of the run method it seems that the event loop can be pretty fast and the run has not
  //return when the event is received here.
  while(!correlationThread->wait()){};
    
  //Delete the correlationThread, this is done by removing it from threadsToBeKill as auto-deletion is enabled.
  threadsToBeKill.remove(correlationThread);
   
  if(!goingToDie){
   //Each time a cluster is added to the view or modified, the size of the window is recalculated.
   if(!isZoomed) updateWindow();
   else drawContentsMode = REDRAW;
 
   dataReady = true;

   //setCursor(zoomCursor);

   //Update the widget
   update();
  }
 }
}

void CorrelationView::updateWindow(){
 int nbOfClusters = view.clusters().size();
 
 abscissaMax = 2 * widthBorder + (nbBins * binWidth * nbOfClusters) + (nbOfClusters - 1) * Xspace;
 ordinateMin = -(2 * heightBorder + static_cast<long>(nbOfClusters * YsizeForMaxAmp) + (nbOfClusters - 1) * Yspace); 

 //Set the window
 window = ZoomWindow(QRect(QPoint(abscissaMin,ordinateMin),QPoint(abscissaMax,ordinateMax)));

 //update the drawing mode if needed (if UPDATE, no change is need it).
 if(drawContentsMode == REFRESH)drawContentsMode = REDRAW;  
}

void CorrelationView::drawCorrelograms(QPainter& painter,QValueList<Pair>& pairList){   
  
 //Clear the firing rate list
  firingRates.clear();
  
 //Sort the pair so the drawing will be simplified.
 qHeapSort(pairList); 
 
 //Loop on the pairs to be drawn.
 QValueList<Pair>::iterator pairIterator;

 ItemColors& clusterColors = doc.clusterColors();
 Data& clusteringData = doc.data();

 //The abscissa of the system coordinate center for the current correlogram.
 uint X = widthBorder;
 //The ordinate of the system coordinate center for the current correlogram.
 uint Y = heightBorder;
 //Number of verticals.
 int verticalNb = 0;
 //Clusters corresponding to the previous pair, they are initialized with the first pair.
 int previousCluster1 = pairList[0].getX();
 int previousCluster2 = pairList[0].getY();
 QColor clusterColor;
 
 //If it is an update that means that there some correlograms to redraw.
 //The position of those clusters in the drawing
 //has to been find in order to redraw them at the correct position.
 bool specificPosition = false;
 QValueList<int> shownClusters;
 if(drawContentsMode == UPDATE){
  specificPosition = true;
  QValueList<int>::const_iterator iterator;
  QValueList<int> const clusters = view.clusters();
  for(iterator = clusters.begin(); iterator != clusters.end(); ++iterator)
   shownClusters.append(*iterator);
  qHeapSort(shownClusters);
 }

 for(pairIterator = pairList.begin(); pairIterator != pairList.end(); ++pairIterator){
  int cluster1 = (*pairIterator).getX();
  int cluster2 = (*pairIterator).getY();
  
  //Get the iterator on the values of the current correlogram.
  Data::CorrelogramIterator iterator = clusteringData.correlogramIterator(*pairIterator,scaleMode,binSize,timeWindow);
      
  if(!iterator.isDataAvailable()) continue;  

  //Find the position of the next correlogram.
  if(specificPosition){
   int index1 = shownClusters.findIndex(cluster1);
   int index2 = shownClusters.findIndex(cluster2);
   X = widthBorder + index1 * shift;
   Y = heightBorder + index2 * (YsizeForMaxAmp + Yspace);
  }
  else{
   //The correlogram will be place on the current vertical. 
   if(cluster1 == previousCluster1 && cluster2 != previousCluster2){
    Y += (YsizeForMaxAmp + Yspace);
   } 
   //The correlogram will be place on a new vertical.
   if(cluster1 != previousCluster1){
    X += shift;
    verticalNb++;
    Y = verticalNb * (YsizeForMaxAmp + Yspace) + heightBorder;
   }
  }
  //Update previousCluster1 and previousCluster2 for the next loop
  previousCluster1 = cluster1;
  previousCluster2 = cluster2;                                                                                  

  if(cluster1 == cluster2){
   //Get the firing rate and ensure that there always 2 digits after the dot.
   float firingRate = iterator.getFiringRate();
   firingRate = floor((firingRate * 100) + 0.5) / 100;
   QString firingRateString = QString("%1").arg(firingRate);
   QStringList parts = QStringList::split(".", firingRateString);
   if(parts.count() == 1) firingRateString += ".00";
   else{
    QString precision = parts[1];
    if(precision.length() == 1) firingRateString += "0";
   }
   firingRates.insert(cluster1,firingRateString);
    
   //Get the color associated with the cluster and set the color to use to this color.
   clusterColor = clusterColors.color(cluster1);
   painter.setBrush(QBrush(clusterColor));
   //Do not draw the outlines of the rectangles if there is more than one pair.
   painter.setPen(NoPen);
   }
  else{
   //Use white to draw if the background is dark (the legend is then white) and grey if it is white.
   if(colorLegend == white) clusterColor = white;
   else clusterColor = gray;
   painter.setBrush(QBrush(clusterColor));
   //Do not draw the outlines of the rectangles if there is more than one pair.
   painter.setPen(NoPen);
  }
      
  uint x = 0;

  //Set the clip region to the rectangle defined by a correlogram unit.
  //If the view is been printed, a clip region has been created, take it into account
  if(printState){
   QRegion region = QRegion (X,-(Y+YsizeForMaxAmp),binWidth * nbBins + 1,YsizeForMaxAmp + 1);
   QRegion intersection = printRegion.intersect(region);
   painter.setClipRegion(intersection,QPainter::CoordPainter);
  }
  else painter.setClipRect(X,-(Y+YsizeForMaxAmp),binWidth * nbBins + 1,YsizeForMaxAmp + 1,QPainter::CoordPainter);
    
  //Iterate over the values of the current correlogram and draw them.
  for(;iterator.hasNext();){
   //The point is drawn in the QT coordinate system where the Y axis in oriented downwards
   //The value receive from the iterator is already inverted.
   float value = iterator.next();
   int y = -Y + static_cast<int>(value * Yfactor);
   painter.drawRect(x + X,y,binWidth + 1,- static_cast<int>(value * Yfactor)  + 1);
   x += binWidth;
  }
  //Draw a bottom line.
  if(printState) painter.setClipRegion(printRegion,QPainter::CoordPainter);
  else painter.setClipping(false);
  painter.setPen(clusterColor);
  painter.drawLine(X - (Xspace/5),-Y,X + (binWidth * nbBins) + (Xspace/5),-Y);
  //Draw time marks
  painter.drawLine(X + tickMarkZero,-Y,X + tickMarkZero,-Y + 5);
  for(int i = 1; i<=nbTickMarks;++i){
   int step = static_cast<int>(floor(0.5 + (i * tickMarkStep)));
   painter.drawLine(X + tickMarkZero + step,-Y,X + tickMarkZero + step,-Y + 5);
   painter.drawLine(X + tickMarkZero - step,-Y,X + tickMarkZero - step,-Y + 5);
  }
   

  //Draw the shoulder dash line if asked for.  
  if(shoulderLine){
   painter.setPen(QPen(QColor(60,60,60),0,Qt::DotLine));
   int y = -Y + static_cast<int>(iterator.getScaledShoulder() * Yfactor);
   painter.drawLine(X - (Xspace/10),y,X + (binWidth * nbBins) + (Xspace/10),y);
  }
 }
}


void CorrelationView::setBinSizeAndTimeWindow(int size,int width){
 binSize = size;
 timeWindow = width;
 nbBins = timeWindow / binSize;
 Xspace = (nbBins * binWidth) / 10;
 widthBorder = (nbBins * binWidth) / 30;
 shift = nbBins * binWidth + Xspace;
 
 //Compute variable to draw tick marks
 int n = 0;
 if((timeWindow - 1)/2 <= 30) n = 5;
 if((timeWindow - 1)/2 > 30 && (timeWindow - 1)/2 <= 100) n = 10;
 if((timeWindow - 1)/2 >= 100) n = 20;
 int pixelPerTimeWindow = (timeWindow * binWidth) / binSize;
 tickMarkStep = static_cast<float>(pixelPerTimeWindow * n) / static_cast<float>(timeWindow); 
 nbTickMarks = static_cast<int>(floor(0.5 + static_cast<float>((timeWindow/2) / static_cast<float>(n))));
 
 tickMarkZero = ((nbBins - 1)/2)* binWidth + binWidth/2;
                
 //To be sure to correctly redraw the correlograms
 isZoomed = false;
 
 //The data have to be collected if need it and everything has to be redraw
 if(view.clusters().size() > 0){
  setCursor(Qt::WaitCursor);
  askForCorrelograms();
 }
}

void CorrelationView::drawClusterIds(QPainter& painter){
 QValueList<int> shownClusters;
 QValueList<int>::const_iterator iterator;
 QValueList<int> const clusters = view.clusters();
 for(iterator = clusters.begin(); iterator != clusters.end(); ++iterator)
  shownClusters.append(*iterator);
 qHeapSort(shownClusters);
 
 QFont f("Helvetica",8); 
 painter.setFont(f);
 painter.setPen(colorLegend); //set the color for the legends.

 //Draw the absciss ids
 //The abscissa of the legend for the current correlogram.
 uint X = widthBorder + 2;
 
 //The ordinate of the legend for the current correlogram.
 uint Y = 0;
 int width = nbBins * binWidth + XMARGIN;

 //Variable used to draw the firing rate
 uint firingX = 0;
 uint firingY = 0;
 int clusterIndex = 1;
 int nbClusters = shownClusters.size();
 ItemColors& clusterColors = doc.clusterColors();
 QRect r((QRect)window);
 bool isMargin = true;
 if(r.left() != 0) isMargin = false;
 
 for(iterator = shownClusters.begin(); iterator != shownClusters.end(); ++iterator){
  //the abscissa is increase by the font size to adjust for conversion from world coordinates to viewport coordinates.
  QRect r;
  if(isMargin) r = QRect(worldToViewport(X,-Y).x() + 10,worldToViewport(X,-Y).y() - 2,worldToViewportWidth(width),10);
  else r = QRect(worldToViewport(X,-Y).x() + 10  - XMARGIN,worldToViewport(X,-Y).y() - 2,worldToViewportWidth(width),10);
  painter.drawText(r,Qt::AlignHCenter,QString("%1").arg(*iterator));

  if(shoulderLine){
    QString firingRate = "";
    if(firingRates.contains(*iterator)) firingRate = firingRates[*iterator];
     if(nbClusters == 1){
      firingX = X;
      firingY = heightBorder + YsizeForMaxAmp;
      QRect rf;
      if(isMargin) rf = QRect(worldToViewport(firingX,-firingY).x() + 10,worldToViewport(firingX,-firingY).y() - 17,worldToViewportWidth(width + 20),15);
      else rf = QRect(worldToViewport(firingX,-firingY).x() + 10 - XMARGIN,worldToViewport(firingX,-firingY).y() - 17,worldToViewportWidth(width + 20),15);
      painter.setPen(clusterColors.color(*iterator));
      painter.setBrush(NoBrush);
      painter.drawRect(rf);
      painter.setPen(colorLegend);
      painter.drawText(rf,Qt::AlignCenter,firingRate);
     }
     else if(clusterIndex == 1){
       firingX = X + width + Xspace;
       firingY = heightBorder;
       QRect rf;
       if(isMargin) rf = QRect(worldToViewport(firingX,-firingY).x() + 10,worldToViewport(firingX,-firingY).y() - 13,worldToViewportWidth(width + 20),15);
       else rf = QRect(worldToViewport(firingX,-firingY).x() + 10 - XMARGIN,worldToViewport(firingX,-firingY).y() - 13,worldToViewportWidth(width + 20),15);
       painter.setPen(clusterColors.color(*iterator));
       painter.setBrush(NoBrush);
       painter.drawRect(rf);
       painter.setPen(colorLegend);
       painter.drawText(rf,Qt::AlignCenter,firingRate);
     }
     else{
      firingY = heightBorder + (clusterIndex - 1) * (YsizeForMaxAmp + Yspace) - (Yspace / 2);
      QRect rf;
      if(isMargin) rf = QRect(worldToViewport(firingX,-firingY).x() + 10,worldToViewport(firingX,-firingY).y(),worldToViewportWidth(width + 20),15);
      else rf = QRect(worldToViewport(firingX,-firingY).x() + 10 - XMARGIN,worldToViewport(firingX,-firingY).y(),worldToViewportWidth(width + 20),15);
      painter.setPen(clusterColors.color(*iterator));
      painter.setBrush(NoBrush);
      painter.drawRect(rf);
      painter.setPen(colorLegend);
      painter.drawText(rf,Qt::AlignCenter,firingRate);
      firingX += shift;
     }

   clusterIndex++;
  }

  X += shift;
 }

 //Draw the ordinate ids
 X = 0;
 Y = heightBorder + YsizeForMaxAmp + Yspace - 2;
 uint yshift = YsizeForMaxAmp + Yspace;

 for(iterator = shownClusters.begin(); iterator != shownClusters.end(); ++iterator){
  QRect r(worldToViewport(X,-Y).x(),worldToViewport(X,-Y).y(),10,worldToViewportHeight(YsizeForMaxAmp + Yspace));
  painter.drawText(r,Qt::AlignCenter,QString("%1").arg(*iterator));
  Y += yshift;
 }
}

void  CorrelationView::updateDrawing(){
 //The data have to be collected if need it and everything has to be redraw
 if(view.clusters().size() > 0 && drawContentsMode == REDRAW){
  setCursor(Qt::WaitCursor);
  askForCorrelograms();
 }
}

void CorrelationView::clustersRenumbered(bool active){
 //The data have to be collected and everything has to be redrawn.
 //If the widget is in the active view, it is done immediately otherswise it will be done
 //when the view willbecome active (updateDrawing will be called).
 drawContentsMode = REDRAW;

 if(view.clusters().size() > 0 && active){
  setCursor(Qt::WaitCursor);
  askForCorrelograms();
 }
}

void CorrelationView::mouseDoubleClickEvent (QMouseEvent *e){
 //Trigger parent event
 ViewWidget::mouseDoubleClickEvent(e);
 if((view.clusters().size() > 0)){
  Data& clusteringData = doc.data();
  QValueList<Pair>::iterator pairIterator;
  bool correlogramsNotAvailable = false;
  for(pairIterator = pairs.begin(); pairIterator != pairs.end(); ++pairIterator){
   Data::CorrelogramIterator iterator = clusteringData.correlogramIterator(*pairIterator,scaleMode,binSize,timeWindow);
   if(!iterator.isDataAvailable()) correlogramsNotAvailable = true;
  }
  if(correlogramsNotAvailable){
    setCursor(Qt::WaitCursor);
    askForCorrelograms();
  }
 }
 isZoomed = true;
}


void CorrelationView::mouseReleaseEvent(QMouseEvent* e){
 //Trigger parent event
 ViewWidget::mouseReleaseEvent(e);

 if((e->button() & QMouseEvent::LeftButton) && (view.clusters().size() > 0)){
  Data& clusteringData = doc.data();
  QValueList<Pair>::iterator pairIterator;
  bool correlogramsNotAvailable = false;
  for(pairIterator = pairs.begin(); pairIterator != pairs.end(); ++pairIterator){
   Data::CorrelogramIterator iterator = clusteringData.correlogramIterator(*pairIterator,scaleMode,binSize,timeWindow);
   if(!iterator.isDataAvailable()) correlogramsNotAvailable = true;
  }
  if(correlogramsNotAvailable){
    setCursor(Qt::WaitCursor);
    askForCorrelograms();
  }
 }
 
 isZoomed = true;
}


void CorrelationView::resizeEvent(QResizeEvent* e){
  drawContentsMode = REDRAW;

 if(view.clusters().size() > 0){
  Data& clusteringData = doc.data();
  QValueList<Pair>::iterator pairIterator;
  bool correlogramsNotAvailable = false;
  for(pairIterator = pairs.begin(); pairIterator != pairs.end(); ++pairIterator){
   Data::CorrelogramIterator iterator = clusteringData.correlogramIterator(*pairIterator,scaleMode,binSize,timeWindow);
   if(!iterator.isDataAvailable()) correlogramsNotAvailable = true;
  }
  if(correlogramsNotAvailable){
   setCursor(Qt::WaitCursor);
   askForCorrelograms();
  }
 }
}


void CorrelationView::willBeKilled(){
 if(!goingToDie){
  goingToDie = true;
  //inform the running threads to stop processing as soon as possible.
  for(CorrelationThread* correlationThread = threadsToBeKill.first(); correlationThread; correlationThread = threadsToBeKill.next())
   correlationThread->stopProcessing();
 }
}

void CorrelationView::mouseMoveEvent(QMouseEvent* event){
 //Write the current coordinates in the statusbar.
 QRect r((QRect)window);
 QPoint current;
 if(r.left() != 0) current = viewportToWorld(event->x(),event->y());
 else current = viewportToWorld(event->x() - XMARGIN,event->y());

 //Compute the time
 int x = (current.x() - static_cast<int>(widthBorder));
 
 if(x < 0) statusBar->changeItem("",1);//on the left side of the first correlogram.
 else{
  float time = (static_cast<float>(fmod(x,static_cast<float>(nbBins * binWidth + Xspace))
                 - static_cast<float>(nbBins * binWidth / 2))
                 / static_cast<float>(binWidth / binSize));
                                                                                                                                                   
  //Compute the value corresponding to the right side of the last correlogram.
  int nbOfClusters = view.clusters().size();
  float rightmostValue = widthBorder + (nbBins * binWidth + Xspace) * nbOfClusters;

  if((time < static_cast<float>(-timeWindow) / 2.0) || (time > static_cast<float>(timeWindow) / 2.0) || (current.x() > rightmostValue))
    statusBar->changeItem("",1);
  else{   
   //Compute the cluster ids corresponding to the correlogram under the mouse
   int xCluster = static_cast<int>(static_cast<float>(x)/static_cast<float>(nbBins * binWidth + Xspace));
   int y = (current.y() - static_cast<int>(heightBorder));
   int yCluster = abs(static_cast<int>(static_cast<float>(y)/static_cast<float>(YsizeForMaxAmp + Yspace)));
   if(xCluster <= yCluster){
    QValueList<int> shownClusters;
    QValueList<int>::const_iterator iterator;
    QValueList<int> const clusters = view.clusters();
    for(iterator = clusters.begin(); iterator != clusters.end(); ++iterator)
     shownClusters.append(*iterator);
    qHeapSort(shownClusters); 
    
    statusBar->changeItem("Time (ms): "+ QString("%1, Clusters (%2,%3)").arg(time).arg(shownClusters[xCluster]).arg(shownClusters[yCluster]),1);
   }
   else statusBar->changeItem("Time (ms): "+ QString("%1").arg(time),1);
  }  
 }

 //The parent implementation takes care of the rubber band
 ViewWidget::mouseMoveEvent(event); 
}

void CorrelationView::print(QPainter& printPainter,QPaintDeviceMetrics& metrics,bool whiteBackground){
  printState = true;
  
 //Draw the double buffer (pixmap) by copying it into the printer device throught the painter.
  QRect viewportOld = QRect(viewport.left(),viewport.top(),viewport.width(),viewport.height());

 //If the left margin is not visible (the user zoomed without taking it in his selection), the viewport and the printer
  //have the same size.
  QRect r((QRect)window);
  if(r.left() != 0) viewport = QRect(printPainter.viewport().left(),printPainter.viewport().top(),printPainter.viewport().width(),printPainter.viewport().height()-10);
  else viewport = QRect(printPainter.viewport().left() + XMARGIN,printPainter.viewport().top(),printPainter.viewport().width() - XMARGIN,printPainter.viewport().height()-10);
  
  //Set the window (part of the world I want to show)
  printPainter.setWindow(r.left(),r.top(),r.width()-1,r.height()-1);//hack because Qt QRect is used differently in this function
  
  //Set the viewport (part of the device I want to write on).
  //By default, the viewport is the same as the device's rectangle (contentsRec), taking a smaller
  //one will ensure that the legends (cluster ids) will not ovelap a correlogram.
  printPainter.setViewport(viewport);

  //Fill the background with the background color and ensure we draw the same portion of the world than on the screen
  QRect back = QRect(r.left(),r.top(),r.width(),r.height());
  float heightRatio = (static_cast<float>(back.height())/static_cast<float>(metrics.height()));
  back.setBottom(r.top() + r.height() - 1 + static_cast<long>(10 * heightRatio));
  float widthRatio = (static_cast<float>(back.width())/static_cast<float>(metrics.width()));
  if(r.left() == 0) back.setLeft(r.left() - static_cast<long>(XMARGIN * widthRatio));

  printRegion = QRegion(back);

  QColor colorLegendTmp = colorLegend;
  QColor background= backgroundColor();
  if(whiteBackground){
   colorLegend = black;
   setPaletteBackgroundColor(white);
  }
  
  printPainter.fillRect(back,backgroundColor());
  printPainter.setClipRegion(printRegion,QPainter::CoordPainter);

  //Paint all the correlograms in the pairs list (in the double buffer)
  drawCorrelograms(printPainter,pairs);

  //reset transformation due to setWindow and setViewport
  printPainter.resetXForm();

  //Draw the cluster Ids along the correlograms.
  drawClusterIds(printPainter);

  printPainter.setClipping(false);

  //Restore the colors.
  if(whiteBackground){
   colorLegend = colorLegendTmp;
   setPaletteBackgroundColor(background);
  }
  
  //Restore the previous state
  viewport = QRect(viewportOld.left(),viewportOld.top(),viewportOld.width(),viewportOld.height());

  printState = false;
}


  void  CorrelationView::setNoScale(){
   scaleMode = Data::RAW;

   //Update the drawing factor.
   Yfactor = 1;

  //The data have to be collected if need it and everything has to be redraw
   if(view.clusters().size() > 0){
    setCursor(Qt::WaitCursor);
    askForCorrelograms();
   }
  }
  
  void  CorrelationView::setMaximumScale(){
   scaleMode = Data::MAX;

   //Update the drawing factor.
   Yfactor = YsizeForMaxAmp;

  //The data have to be collected if need it and everything has to be redraw
   if(view.clusters().size() > 0){
    setCursor(Qt::WaitCursor);
    askForCorrelograms();
   }
  }

 void  CorrelationView::setShoulderScale(){
   scaleMode = Data::SHOULDER;

   //Update the drawing factor.
   Yfactor = YsizeForMaxAmp;

  //The data have to be collected if need it and everything has to be redraw
   if(view.clusters().size() > 0){
    setCursor(Qt::WaitCursor);
    askForCorrelograms();
   }
  }

 void  CorrelationView::increaseAmplitude(){
   //Decreases the ordinate scale resulting in
   //an reduction of the correlograms in the ordinate direction.
   Yfactor /= 0.75;

  //The data have to be collected if need it and everything has to be redraw
   if(view.clusters().size() > 0){
    setCursor(Qt::WaitCursor);
    askForCorrelograms();
   }
  }

 void  CorrelationView::decreaseAmplitude(){
   //Increases the ordinate scale resulting in
   //an enlargement of the correlograms in the ordinate direction.
   Yfactor *= 0.75;

   //The data have to be collected if need it and everything has to be redraw
   if(view.clusters().size() > 0){
    setCursor(Qt::WaitCursor);
    askForCorrelograms();
   }
  }

 void  CorrelationView::setShoulderLine(bool b){
    shoulderLine = b;

  //The data have to be collected if need it and everything has to be redraw
   if(view.clusters().size() > 0){
    setCursor(Qt::WaitCursor);
    askForCorrelograms();
   }
  }
