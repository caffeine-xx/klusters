/***************************************************************************
                          custerview.h  -  description
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

#ifndef CLUSTERVIEW_H
#define CLUSTERVIEW_H

// include files for QT
#include <qframe.h>
#include <qpainter.h>
#include <qstyle.h>
#include <qpixmap.h>
#include <qpointarray.h>
#include <qtimer.h>
#include <qregion.h>
#include <qvaluelist.h>

//include files for the application
#include "zoomwindow.h"
#include "viewwidget.h"
#include "types.h"

//General C++ include files
#include <iostream>
using namespace std;

class KlustersDoc;
class KlustersView;
class QCursor;

  /**
  * View displaying spikes in the PCA feature space.
  * Through this view the user can act upon the clusters by selecting spikes.
  * All modification request is sent to the KlustersDoc object and the view
  * is automatically updated via KlustersView when the clusters have been changed.
  *@author Lynn Hazan
  */

class ClusterView : public ViewWidget  {
   Q_OBJECT

public:
	ClusterView(KlustersDoc& doc,KlustersView& view,QColor backgroundColor,int timeInterval,KStatusBar* statusBar, QWidget* parent=0, const char* name=0,
              int minSize = 50, int maxSize = 4000,
              int windowTopLeft = -500,int windowBottomRight = 1001, int border = 0);
	~ClusterView();

  /**Informs if the user is currently making a selection.
  * @return true if a selection is in process, false othewise.
  */
  inline bool isASelectionInProcess() const{
   if(selectionPolygon.size() == 0) return false;
   else return true;
  };

  /**Returns the current abscissa dimension.
  */
  inline int getDimensionX() const{return dimensionX;};

  /**Returns the current ordinate dimension.
  */
  inline int getDimensionY() const{return dimensionY;};

  inline BaseFrame::Mode getMode() const {return mode;};

public slots:

  /**
  * Takes into  account the update of the dimension used to present the clusters.
  * @param dimensionX
  * @param dimensionY
  */
  virtual void updatedDimensions(int dimensionX, int dimensionY);

  /**Updates the view only for one cluster for which the color has been changed
  * @param clusterId cluster Id for which the color have changed.
  * @param active true if the view is the active one, false otherwise.
  */
  virtual inline void singleColorUpdate(int clusterId,bool active){
    addClusterToUpdate(clusterId);
  };

  /**
  * Draws an additional cluster to those already shown.
  * This method aims to reduce the number of clusters to draw.
  * @param clusterId cluster Id to add to the clusters already drawn
  * @param active true if the view is the active one, false otherwise.
  */
  inline void addClusterToView(int clusterId,bool active){
    addClusterToUpdate(clusterId);
  };

  /**
  * Removes a cluster from those already shown. Which impose to redraw everything
  * @param clusterId cluster Id to remove.
  * @param active true if the view is the active one, false otherwise.
  */
  inline void removeClusterFromView(int clusterId,bool active){redraw();};

  /**
  * Adds a newly created cluster to those already shown.
  * This method aims to reduce the number of clusters to draw.
  * @param fromClusters list of clusters from which the spikes of the new cluster are coming.
  * @param clusterId cluster Id to add to the clusters already drawn
  * @param active true if the view is the active one, false otherwise.
  */
  inline void addNewClusterToView(QValueList<int>& fromClusters,int clusterId,bool active){
    addClusterToUpdate(clusterId);
  };

  /**
  * Adds a newly created cluster to those already shown.
  * This method aims to reduce the number of clusters to draw.
  * @param clusterId cluster Id to add to the clusters already drawn
  * @param active true if the view is the active one, false otherwise.
  */
  inline void addNewClusterToView(int clusterId,bool active){
    addClusterToUpdate(clusterId);
  };

  /**
  * Update the content of the widget due to the removal of spikes in a cluster.
  * This method aims to reduce the number of clusters to draw.
  * @param fromClusters list of clusters from which the spikes have been taken.
  * @param active true if the view is the active one, false otherwise.
  */
  inline void spikesRemovedFromClusters(QValueList<int>& fromClusters,bool active){redraw();};

  /**
  * Update the content of the widget due to the addition of spikes in a cluster.
  * This method aims to reduce the number of clusters to draw.
  * @param clusterId cluster Id to which the spikes have been added
  * @param active true if the view is the active one, false otherwise.
  */
  void spikesAddedToCluster(int clusterId,bool active){
    addClusterToUpdate(clusterId);
  };

 /**Method call when no spikes have been found in a polygon of selection
  */
  inline void emptySelection(){drawContentsMode = UPDATE;};

  /**Change the current mode, call by a selection of a tool
  * @param selectedMode new mode of drawing (selection or zoom)
  */
  void setMode(BaseFrame::Mode selectedMode);

  /**
  * Update the clusters which have been modified by the suppression of spikes
  * (used to create a new cluster or simply move to the cluster of noise or artefact).
  * This method aims to reduce the number of clusters to draw. The view is redraw
  * only if @p isModifiedByDeletion is true.
  * @param modifiedClusters list of clusters from which spikes were taken from.
  * @param active true if the view is the active one, false otherwise.
  * @param isModifiedByDeletion true if the clusters of @p modifiedClusters have been modified
  * by the deletion of spikes (moved to cluster 0 or 1, cluster of artefact and cluster of noise respectively).
  */
  void updateClusters(QValueList<int>& modifiedClusters,bool active,bool isModifiedByDeletion){
    if(isModifiedByDeletion) redraw();
  };

  /**
  * Update the clusters which have been modified by the suppression of spikes
  * (used to create a new cluster or simply move to the cluster of noise or artefact).
  * This method is call only during an undo otherwise the updateClusters is call.
  * There are 2 functions in order to reduce the number of clusters to draw whenever possible.
  * @param modifiedClusters list of clusters from which spikes were taken from.
  * @param active true if the view is the active one, false otherwise.
  */  
  inline void undoUpdateClusters(QValueList<int>& modifiedClusters,bool active){redraw();};

  /**Updates the time interval in second and in recording unit using @p step given in second.
  * @param step the interval to use in second.
  */
  inline void setTimeStepInSecond(int step){
    timeStepInSecond = step;
    timeStepInRecordingUnit =  static_cast<long>((static_cast<double>(timeStepInSecond) * static_cast<double>(1000000)) / samplingInterval);
  };
  
  /**Updates the time interval between time lines. The update is made both in second and
  * in recording unit using @p step given in second. This is an overloaded member function to be called when the user changes the settings.
  * @param step the interval to use in second.
  * @param active true if the view is the active one, false otherwise.
  */
  inline void setTimeStepInSecond(int step,bool active){    
    timeStepInSecond = step;
    timeStepInRecordingUnit =  static_cast<long>((static_cast<double>(timeStepInSecond) * static_cast<double>(1000000)) / samplingInterval);
    if(active)redraw(); 
  };

  /**Prints the currently display information on a printer via the painter @p printPainter.
  * @param printPainter painter on a printer.
  * @param metrics object providing information about the printer.
  * @param whiteBackground true if the printed background has to be white, false otherwise.
  */
  void print(QPainter& printPainter,QPaintDeviceMetrics& metrics,bool whiteBackground);
  
protected:
  /**
  * Draws the contents of the frame
  * @param p painter used to draw the contents
  */
  virtual void drawContents(QPainter* p);
 
  virtual inline void resizeEvent(QResizeEvent* event){
   //Trigger parent event
   ViewWidget::resizeEvent(event);
  };
  void mouseReleaseEvent(QMouseEvent* event);
  void mousePressEvent(QMouseEvent* event);
  void mouseMoveEvent(QMouseEvent* event);
  virtual inline  void mouseDoubleClickEvent(QMouseEvent* event){
   //Trigger parent event
   ViewWidget::mouseDoubleClickEvent(event);
  };
  /**Treat the events informing that it is time to compute the new data
  * due to the selection polygon.
  */
  virtual void customEvent(QCustomEvent* event);
    
 signals:
   void moveToTime(long startTime);
    
private:

  //Color for the different selection modes
  static const QColor NEW_CLUSTER_COLOR;
  static const QColor DELETE_NOISE_COLOR;
  static const QColor DELETE_ARTEFACT_COLOR;

  /**
  * Draws the spikes of the clusters in the list @p clustersList on the given painter
  * @param painter painter on which to draw the spikes
  * @param clustersList list of clusters to draw
  */
  void drawClusters(QPainter& painter,const QValueList<int>& clustersList,bool drawCircles = false);

  /**
  * Returns the color associated with one of the selection mode. This color will
  * be use to draw the polygon of selection.
  * @return color to be used
  */
  inline QColor selectPolygonColor(Mode mode){
    switch(mode){
      case DELETE_NOISE:
         return DELETE_NOISE_COLOR;
      case DELETE_ARTEFACT:
        return DELETE_ARTEFACT_COLOR;
      case NEW_CLUSTER:
        return NEW_CLUSTER_COLOR;
      case NEW_CLUSTERS:
        return NEW_CLUSTER_COLOR;
      case ZOOM:
        break; //nothing to do  
      case SELECT_TIME:
       break; //nothing to do 
   }
   //never reach
   return QColor(0,0,0);
  };

  /**
  * Erase any polygon of selection in the double buffer and reset the associated variables.
  */
  void resetSelectionPolygon();

  /**
  * Erase the last line drawn while drawing the polygon of selection in the double buffer.
  * @param polygonColor color used to draw the line (to erase the line another line is draw on top of it)
  */
  void eraseTheLastDrawnLine(QColor polygonColor);

  /**
  * Erase the last line drawn during a mousemove event while drawing the polygon of selection in the double buffer.
  * @param polygonColor color used to draw the line (to erase the line another line is draw on top of it)
  */
  void eraseTheLastMovingLine(QColor polygonColor);
  
  /**
  * Adds a cluster to the list of clusters to update
  * @param clusterId id of the cluster to update.
  */
  void addClusterToUpdate(int clusterId);

  /**Draws the axis for the current dimensions
  * @param painter painter on which to draw the axes
  */
  void drawAxes(QPainter& painter);

  /**Set of instructions need it in order to enable a correct redraw when the drawContents
  is called*/
  inline void redraw(){
   drawContentsMode = REDRAW;

   //Clear the update list
   clusterUpdateList.clear();

   //reset the information on the polygon to enable a mousetrack in mousemovEvent
   polygonClosed = false;
  };

  /**Draws information on the time axis.
  * @param painter painter on which to draw the information
  */
  void drawTimeInformation(QPainter& painter);
  
//Members

  /**
  * Points defining the selection polygon.
  */
  QPointArray selectionPolygon;

  /**
  * Number of points defining the selection polygon.
  */
  uint nbSelectionPoints;

  /**Boolean used to know if there is a closing line for the polygon and so if it is necessary to remove it*/
  bool polygonClosed;

  /**Minimal abscissa  in window coordinate*/
  long abscissaMin;

  /**Maximal abscissa in window coordinate*/
  long abscissaMax;

  /**Minimal ordinate in window coordinate*/
  long ordinateMin;

  /**Maximal ordinate in window coordinate*/
  long ordinateMax;

  /**Boolean used to correctely erase the closed polygon.*/
  bool  existLastMovingLine; 

  /**The abscissa dimension*/
  int dimensionX;

  /**The ordinate dimension*/
  int dimensionY;

  /**The dimension of the time.*/
  int timeDimension;
  
  /**Sampling rate (time between two samples) in micro second.*/
  double samplingInterval;

  /**The step, in second, used to draw information mark on the time axis.
  * The default is 60 second.
  */
  int timeStepInSecond;

  /**The step, in recording unit, used to draw information mark on the time axis.*/
  long timeStepInRecordingUnit;

  QCursor newClusterCursor;
  QCursor newClustersCursor;
  QCursor deleteNoiseCursor;
  QCursor deleteArtefactCursor;
  /**A cursor to represent the selection of time state.*/
  QCursor selectTimeCursor;


  class ComputeEvent;
  friend class ComputeEvent;

  /**Returns a new ComputeEvent.*/
  inline ComputeEvent* getComputeEvent(QPointArray polygon){
    return new ComputeEvent(polygon);
  };

  /**
  * Internal class use to inform the Cluster View that it is time to compute the new data
  * corresponding to the polygon of selection. The aim of this event is to allow the view
  * to close the polygon of selection before asking for the computation.
  *@author Lynn Hazan
  */
  class ComputeEvent : public QCustomEvent{
   //Only the method getComputeEvent of ClusterView has access to the private part of ComputeEvent,
   //the constructor of ComputeEvent being private, only this method con create a new ComputeEvent
   friend ComputeEvent* ClusterView::getComputeEvent(QPointArray selectionPolygon);

  public:
    inline ~ComputeEvent(){};
    inline QPointArray polygon(){return selectionPolygon;};
    
  private:
    ComputeEvent(QPointArray polygon):QCustomEvent(QEvent::User + 700),selectionPolygon(polygon){};

    QPointArray selectionPolygon;
  };
  
};

#endif
