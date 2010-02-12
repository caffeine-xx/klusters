/***************************************************************************
                          baseframe.cpp  -  description
                             -------------------
    begin                : Wed Feb 18 2004
    copyright            : (C) 2004 by Lynn Hazan
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
#include "baseframe.h"

// include files for Qt
#include <qpaintdevice.h>
#include <qpainter.h>
#include <qstyle.h>

// include files for kde
#include <kiconloader.h>

//include files for c/c++ libraries
#include <math.h>

//General C++ include files
#include <iostream>
using namespace std;

BaseFrame:: BaseFrame(int Xborder,int Yborder,QWidget* parent,const char* name,QColor backgroundColor,
           int minSize,int maxSize ,int windowTopLeft ,int windowBottomRight,int border):
           QFrame(parent,name,WRepaintNoErase|WResizeNoErase),
           MIN_SIZE(minSize),MAX_SIZE(maxSize),BORDER(border),WINDOW_TOP_LEFT(windowTopLeft),WINDOW_BOTTOM_RIGHT(windowBottomRight),
           viewport(QRect()),window (QRect(QPoint(0,-WINDOW_TOP_LEFT),QPoint(WINDOW_BOTTOM_RIGHT,0))),
           firstClick(0,0),isDoubleClick(false),rubber(0),
           drawContentsMode(REDRAW),Xborder(Xborder),Yborder(Yborder),isRubberBandToBeDrawn(false),
           wholeHeightRectangle(false){

  //Setting of the frame
  setLineWidth (BORDER);
  setPaletteBackgroundColor(backgroundColor);
  setFrameStyle(QFrame::Box|QFrame::Plain);

  int h;
  int s;
  int v;
  backgroundColor.hsv(&h,&s,&v);
  if((s <= 80 && v >= 240) || (s <= 40 && v >= 220)) colorLegend = black;
  else colorLegend = white;
  

  //Set the minimum size to ensure that the frame rectangle may never be null or invalid.
  setMinimumSize(static_cast<int>(MIN_SIZE*1.05)  + 2 * BORDER,MIN_SIZE  + 2 * BORDER);
  setMaximumSize(MAX_SIZE + 2 * BORDER,MAX_SIZE + 2 * BORDER);

  //Create and set the zoom cursor (a magnifier).
  KIconLoader *loader = KGlobal::iconLoader();
  zoomCursor = QCursor(loader->loadIcon("zoom_cursor", KIcon::User),7,7);
}

BaseFrame::~BaseFrame(){
}

void BaseFrame::changeBackgroundColor(QColor color){
  setPaletteBackgroundColor(color);
  int h;
  int s;
  int v;
  color.hsv(&h,&s,&v);
  if(s <= 80 && v >= 240 || (s <= 40 && v >= 220)) colorLegend = black;
  else colorLegend = white;
  drawContentsMode = REDRAW;
}

void BaseFrame::mousePressEvent(QMouseEvent* e){
 if(mode == ZOOM || isRubberBandToBeDrawn){
    //Test if a selected rectangle exist, if so draw it and delete it.
    if(rubber){
      drawRubber();
      delete rubber;
      rubber = 0;
    }

   if(e->button() == QMouseEvent::LeftButton){
       //Assign firstClick
       QRect r((QRect)window);
       
       if(r.left() != 0) firstClick = viewportToWorld(e->x(),e->y() - Yborder);
       else firstClick = viewportToWorld(e->x() - Xborder,e->y() - Yborder);
                                                                      
       //Construct the rubber starting on the selected point (width = 1 and not 0 because bottomRight = left+width-1, same trick for height ;0))
       //or using only the abscissa and the ordinate if the top of the window if the rubber band has to
       //drawn on whole the height of the window.
       if(isRubberBandToBeDrawn && wholeHeightRectangle) rubber = new QRect(firstClick.x(),r.top(),1,1);
       else rubber = new QRect(firstClick.x(),firstClick.y(),1,1);
   }
 }
}


void BaseFrame::mouseReleaseEvent(QMouseEvent* e){
 //We do not consider the other button events but we consider key press
 if(e->button() & QMouseEvent::LeftButton){
  bool isZoomed = false;

  if(isRubberBandToBeDrawn){
   //Test if a selected rectangle exist, if so draw it and delete it.
   if(rubber){
     drawRubber();
     delete rubber;
     rubber = 0;
   }  
  }
  
  if(mode == ZOOM){
   //if double click, only update isDoubleClick, action has been taken in mouseDoubleClickEvent
   if(isDoubleClick){
      isDoubleClick = false;
      return;
   }

  //Test if a selected rectangle exist, if so draw it and delete it.
   if(rubber){
     drawRubber();
     delete rubber;
     rubber = 0;
   }

   //Calculate the selected point in world coordinates
   QPoint secondClick;
   QRect r((QRect)window);
   if(r.left() != 0) secondClick = viewportToWorld(e->x(),e->y() - Yborder);
   else secondClick = viewportToWorld(e->x() - Xborder,e->y() - Yborder);
   
   //If the distance between the first and second selected points are > 5:
   //the user wanted to draw a rectangle otherwise he intended to select a single point
   if((abs(secondClick.x() - firstClick.x()) > 5) || (abs(secondClick.y() - firstClick.y()) > 5)){
    //CAUTION this correction is intended to compensate for a selection in the left margin which is not part of the widget'window.
    //If the widget contains a left margin and draws in the negative abscisses this correction will not work. 
    if(firstClick.x() < 0 && Xborder > 0) firstClick.setX(0);
    if(secondClick.x() < 0 && Xborder > 0) secondClick.setX(0);
    isZoomed = window.zoom(firstClick, secondClick);
   }
   else{
     float factor;

     //Shrink asked
     if(e->state() & Qt::ShiftButton) factor = static_cast<float>(0.5);
     //Enlarge asked
     else factor = static_cast<float>(2);
     
     //modify the window rectangle
     isZoomed = window.zoom(factor, secondClick);
   }
   if(isZoomed){
    drawContentsMode = REDRAW;
    update();
   }
  }
 }
}

void BaseFrame::mouseMoveEvent(QMouseEvent* e){
  //We do not consider the other button events
  if(e->state() == Qt::LeftButton){
    //Test if a selected rectangle exist, if so draw to erase the previous one,
    //update it and draw again.
    if(rubber){
     QPoint current;
     QRect r((QRect)window);
     if(r.left() != 0) current = viewportToWorld(e->x(),e->y() - Yborder);
     else current = viewportToWorld(e->x()- Xborder,e->y() - Yborder);
     if(current == rubber->bottomRight()) return; //did not move
     drawRubber();
     rubber->setRight(current.x());
     //The ordinate is the bottom of the window if the rubber band has to
     //drawn on whole the height of the window.
     if(isRubberBandToBeDrawn && wholeHeightRectangle) rubber->setBottom(r.bottom());     
     else rubber->setBottom(current.y());
     drawRubber();
    }
  }
}

void BaseFrame::mouseDoubleClickEvent(QMouseEvent* e){
  if(mode == ZOOM){
    if ((e->button() == QMouseEvent::LeftButton) && !(e->state() & Qt::ShiftButton)){
     //Reset to the initial window
     window.reset();
     drawContentsMode = REDRAW;
     update();
     //Update the boolean so in mouserelease we know that we do not have to zoom
     isDoubleClick = true;
    }
 }
}

void BaseFrame::resizeEvent(QResizeEvent* e){
  drawContentsMode = REDRAW;
}

/**
* Translates a point (@p vx, @p vy) on the viewport to a QPoint in the world.
* @param vx x coordinate of the point in the viewport's coordinates system (relative to the widget).
* @param vy y coordinate of the point in the viewport's coordinates system (relative to the widget).
*/
QPoint BaseFrame::viewportToWorld(int vx, int vy){

  //Coordinates in the viewport
  float viewportX = vx;
  float viewportY = vy;
  //Coordinates in the window
  float windowX;
  float windowY;
  //Coordinates in the world
  float worldX;
  float worldY;

  //The coordinates of a point take the frame width into account so we have to substract
  //it from the coordinates to have the position inside the viewport (viewport: rectangle inside the frame).
  viewportX -= frameWidth();
  viewportY -= frameWidth();

  //We have to translate the viewport's coordinates to window's coordinates
  //NB: the window is the part of the world which is drawn in the viewport.
  //The transformation is done by using the following formula:
  //windowX = viewportX * (windowWidth/viewportWidth)
  //windowY = viewportY * (windowHeight/viewportHeight)

  windowX = viewportX * (static_cast<float>(((QRect)window).width())/static_cast<float>(viewport.width()));
  windowY = viewportY * (static_cast<float>(((QRect)window).height())/static_cast<float>(viewport.height()));

  //The final step is to translate the window's coordinates to world's coordinates
  //For that, we need the world's coordinates of the window center of coordinates (WindowCoordinatesCenter):
  //WindowCoordinatesCenterX = ((QRect)window).left()
  //WindowCoordinatesCenterY = ((QRect)window).top()
  //The transformation is done by using the following formula:
  //worldX = WindowCoordinatesCenterX + windowX
  //worldY = WindowCoordinatesCenterY + windowY
  worldX = ((QRect)window).left() + windowX;
  worldY = ((QRect)window).top() + windowY;

  return QPoint(static_cast<int>(worldX),static_cast<int>(worldY));
}


/**
* Translates a point (@p wx, @p wy) in the world to a QPoint on the viewport (relative to the widget).
* @param wx x coordinate of the point in the world's coordinates system.
* @param wy y coordinate of the point in the world's coordinates system.
*/
QPoint BaseFrame::worldToViewport(int wx, int wy){

  //Coordinates in the viewport
  float viewportX;
  float viewportY;
  //Coordinates in the window
  float windowX;
  float windowY;
  //Coordinates in the world
  float worldX = wx;
  float worldY = wy;

  //We have to translate the world's coordinates to window's coordinates
  //For that, we need the world's coordinates of the window center of coordinates (WindowCoordinatesCenter):
  //WindowCoordinatesCenterX = ((QRect)window).left()
  //WindowCoordinatesCenterY = ((QRect)window).top()
  //The transformation is done by using the following formula:
  //windowX = worldX - WindowCoordinatesCenterX
  //windowY = worldY - WindowCoordinatesCenterY
  windowX = worldX - ((QRect)window).left();
  windowY = worldY - ((QRect)window).top();

  //We have now to translate the window's coordinates to viewport's coordinates
  //NB: the window is the part of the world which is drawn in the viewport.
  //The transformation is done by using the following formula:
  //viewportX = windowX * (viewportWidth/windowWidth)
  //viewportY = windowY * (viewportHeight/windowHeight)
  viewportX = windowX * (static_cast<float>(viewport.width())/static_cast<float>(((QRect)window).width()));
  viewportY = windowY * (static_cast<float>(viewport.height())/static_cast<float>(((QRect)window).height()));


  //The coordinates of a point take the frame width into account so we have to substract
  //it from the coordinates to have the position inside the viewport (viewport: rectangle inside the frame).
  viewportX += frameWidth();
  viewportY += frameWidth();

  return QPoint(static_cast<int>(viewportX),static_cast<int>(viewportY));
}


long BaseFrame::worldToViewportAbscissa(long wx){
  //Coordinate in the viewport
  float viewportX;
  //Coordinate in the window
  float windowX;
  //Coordinate in the world
  float worldX = wx;

  //We have to translate the world's coordinate to window's coordinate
  //For that, we need the world's coordinates of the window center of coordinates (WindowCoordinatesCenter):
  //WindowCoordinatesCenterX = ((QRect)window).left()
  //The transformation is done by using the following formula:
  //windowX = worldX - WindowCoordinatesCenterX
  windowX = worldX - ((QRect)window).left();

  //We have now to translate the window's coordinate to viewport's coordinate
  //NB: the window is the part of the world which is drawn in the viewport.
  //The transformation is done by using the following formula:
  //viewportX = windowX * (viewportWidth/windowWidth)
  viewportX = windowX * (static_cast<float>(viewport.width())/static_cast<float>(((QRect)window).width()));

  //The coordinates of a point take the frame width into account so we have to substract
  //it from the coordinates to have the position inside the viewport (viewport: rectangle inside the frame).
  viewportX += frameWidth();

  return static_cast<long>(viewportX);

}

long BaseFrame::worldToViewportOrdinate(long wy){
  //Coordinate in the viewport
  float viewportY;
  //Coordinate in the window
  float windowY;
  //Coordinate in the world
  float worldY = wy;

  //We have to translate the world's coordinate to window's coordinate
  //For that, we need the world's coordinates of the window center of coordinates (WindowCoordinatesCenter):
  //WindowCoordinatesCenterY = ((QRect)window).top()
  //The transformation is done by using the following formula:
  //windowY = worldY - WindowCoordinatesCenterY
  windowY = worldY - ((QRect)window).top();

  //We have now to translate the window's coordinate to viewport's coordinate
  //NB: the window is the part of the world which is drawn in the viewport.
  //The transformation is done by using the following formula:
  //viewportY = windowY * (viewportHeight/windowHeight)
  viewportY = windowY * (static_cast<float>(viewport.height())/static_cast<float>(((QRect)window).height()));


  //The coordinates of a point take the frame width into account so we have to substract
  //it from the coordinates to have the position inside the viewport (viewport: rectangle inside the frame).
  viewportY += frameWidth();

  return static_cast<long>(viewportY);
}

void BaseFrame::drawRubber(){
    if(!rubber) return;

    QPainter painter;
    painter.begin(this);
    //set the window (part of the word I want to show)
    QRect r((QRect)window);

    painter.setWindow(r.left(),r.top(),r.width()-1,r.height()-1);//hack because Qt QRect is used differently in this function
    painter.setViewport(viewport);
    
    painter.setRasterOp(NotROP);
    painter.setPen(QPen(color0,1));
    painter.setBrush(NoBrush);

    QRect normalizeRubber = rubber->normalize(); //not mandatory as it seems that drawPrimitive does the job (but more secure)

    style().drawPrimitive(QStyle::PE_FocusRect, &painter,
                           QRect(normalizeRubber.x(), normalizeRubber.y(), normalizeRubber.width(),normalizeRubber.height()),
                           colorGroup(), QStyle::Style_Default, colorGroup().background() );

    painter.end();
}

