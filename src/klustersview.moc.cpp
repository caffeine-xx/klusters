/****************************************************************************
** KlustersView meta object code from reading C++ file 'klustersview.h'
**
** Created: Sat Sep 1 20:01:59 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "klustersview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *KlustersView::className() const
{
    return "KlustersView";
}

QMetaObject *KlustersView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_KlustersView( "KlustersView", &KlustersView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString KlustersView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KlustersView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString KlustersView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KlustersView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* KlustersView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = KDockArea::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "clusterView", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_0 = {"clusterDockClosed", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "waveformView", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_1 = {"waveformDockClosed", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "correlogramView", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_2 = {"correlogramDockClosed", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "errorMatrixView", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_3 = {"errorMatrixDockClosed", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "traceWidget", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_4 = {"traceDockClosed", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "start", &static_QUType_ptr, "long", QUParameter::In },
	{ "duration", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod slot_5 = {"setStartAndDuration", 2, param_slot_5 };
    static const QMetaData slot_tbl[] = {
	{ "clusterDockClosed(QWidget*)", &slot_0, QMetaData::Public },
	{ "waveformDockClosed(QWidget*)", &slot_1, QMetaData::Public },
	{ "correlogramDockClosed(QWidget*)", &slot_2, QMetaData::Public },
	{ "errorMatrixDockClosed(QWidget*)", &slot_3, QMetaData::Public },
	{ "traceDockClosed(QWidget*)", &slot_4, QMetaData::Public },
	{ "setStartAndDuration(long,long)", &slot_5, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "dimensionX", &static_QUType_int, 0, QUParameter::In },
	{ "dimensionY", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"updatedDimensions", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"singleColorUpdated", 2, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "ClusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"clusterRemovedFromView", 2, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"clusterAddedToView", 2, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "fromClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"newClusterAddedToView", 3, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"newClusterAddedToView", 2, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ "fromClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_6 = {"spikesRemovedFromClusters", 2, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "selectedMode", &static_QUType_ptr, "BaseFrame::Mode", QUParameter::In }
    };
    static const QUMethod signal_7 = {"modeToSet", 1, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ "destinationClusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_8 = {"spikesAddedToCluster", 2, param_signal_8 };
    static const QUMethod signal_9 = {"updateContents", 0, 0 };
    static const QUMethod signal_10 = {"emptySelection", 0, 0 };
    static const QUParameter param_signal_11[] = {
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In },
	{ "isModifiedByDeletion", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_11 = {"modifiedClusters", 3, param_signal_11 };
    static const QUParameter param_signal_12[] = {
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_12 = {"modifiedClustersUndo", 2, param_signal_12 };
    static const QUParameter param_signal_13[] = {
	{ "start", &static_QUType_ptr, "long", QUParameter::In },
	{ "timeFrameWidth", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod signal_13 = {"updatedTimeFrame", 2, param_signal_13 };
    static const QUMethod signal_14 = {"sampleMode", 0, 0 };
    static const QUMethod signal_15 = {"timeFrameMode", 0, 0 };
    static const QUMethod signal_16 = {"meanPresentation", 0, 0 };
    static const QUMethod signal_17 = {"allWaveformsPresentation", 0, 0 };
    static const QUMethod signal_18 = {"overLayPresentation", 0, 0 };
    static const QUMethod signal_19 = {"sideBySidePresentation", 0, 0 };
    static const QUMethod signal_20 = {"increaseAmplitude", 0, 0 };
    static const QUMethod signal_21 = {"decreaseAmplitude", 0, 0 };
    static const QUParameter param_signal_22[] = {
	{ "nbSpikes", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod signal_22 = {"updateDisplayNbSpikes", 1, param_signal_22 };
    static const QUMethod signal_23 = {"increaseAmplitudeofCorrelograms", 0, 0 };
    static const QUMethod signal_24 = {"decreaseAmplitudeofCorrelograms", 0, 0 };
    static const QUMethod signal_25 = {"noScale", 0, 0 };
    static const QUMethod signal_26 = {"maxScale", 0, 0 };
    static const QUMethod signal_27 = {"shoulderScale", 0, 0 };
    static const QUParameter param_signal_28[] = {
	{ "size", &static_QUType_int, 0, QUParameter::In },
	{ "timeFrame", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_28 = {"updatedBinSizeAndTimeFrame", 2, param_signal_28 };
    static const QUParameter param_signal_29[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_29 = {"setShoulderLine", 1, param_signal_29 };
    static const QUMethod signal_30 = {"updateDrawing", 0, 0 };
    static const QUParameter param_signal_31[] = {
	{ "acquisitionGain", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_31 = {"changeGain", 1, param_signal_31 };
    static const QUParameter param_signal_32[] = {
	{ "step", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_32 = {"changeTimeInterval", 2, param_signal_32 };
    static const QUParameter param_signal_33[] = {
	{ "positions", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_33 = {"changeChannelPositions", 1, param_signal_33 };
    static const QUMethod signal_34 = {"computeProbabilities", 0, 0 };
    static const QUParameter param_signal_35[] = {
	{ "color", &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod signal_35 = {"changeBackgroundColor", 1, param_signal_35 };
    static const QUParameter param_signal_36[] = {
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_36 = {"clustersRenumbered", 1, param_signal_36 };
    static const QUParameter param_signal_37[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "clustersToShow", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "clustersColors", &static_QUType_ptr, "ItemColors", QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_37 = {"updateClusters", 4, param_signal_37 };
    static const QUMethod signal_38 = {"increaseAllAmplitude", 0, 0 };
    static const QUMethod signal_39 = {"decreaseAllAmplitude", 0, 0 };
    static const QUParameter param_signal_40[] = {
	{ "show", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_40 = {"showLabels", 1, param_signal_40 };
    static const QUMethod signal_41 = {"nextCluster", 0, 0 };
    static const QUMethod signal_42 = {"previousCluster", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "updatedDimensions(int,int)", &signal_0, QMetaData::Public },
	{ "singleColorUpdated(int,bool)", &signal_1, QMetaData::Public },
	{ "clusterRemovedFromView(int,bool)", &signal_2, QMetaData::Public },
	{ "clusterAddedToView(int,bool)", &signal_3, QMetaData::Public },
	{ "newClusterAddedToView(QValueList<int>&,int,bool)", &signal_4, QMetaData::Public },
	{ "newClusterAddedToView(int,bool)", &signal_5, QMetaData::Public },
	{ "spikesRemovedFromClusters(QValueList<int>&,bool)", &signal_6, QMetaData::Public },
	{ "modeToSet(BaseFrame::Mode)", &signal_7, QMetaData::Public },
	{ "spikesAddedToCluster(int,bool)", &signal_8, QMetaData::Public },
	{ "updateContents()", &signal_9, QMetaData::Public },
	{ "emptySelection()", &signal_10, QMetaData::Public },
	{ "modifiedClusters(QValueList<int>&,bool,bool)", &signal_11, QMetaData::Public },
	{ "modifiedClustersUndo(QValueList<int>&,bool)", &signal_12, QMetaData::Public },
	{ "updatedTimeFrame(long,long)", &signal_13, QMetaData::Public },
	{ "sampleMode()", &signal_14, QMetaData::Public },
	{ "timeFrameMode()", &signal_15, QMetaData::Public },
	{ "meanPresentation()", &signal_16, QMetaData::Public },
	{ "allWaveformsPresentation()", &signal_17, QMetaData::Public },
	{ "overLayPresentation()", &signal_18, QMetaData::Public },
	{ "sideBySidePresentation()", &signal_19, QMetaData::Public },
	{ "increaseAmplitude()", &signal_20, QMetaData::Public },
	{ "decreaseAmplitude()", &signal_21, QMetaData::Public },
	{ "updateDisplayNbSpikes(long)", &signal_22, QMetaData::Public },
	{ "increaseAmplitudeofCorrelograms()", &signal_23, QMetaData::Public },
	{ "decreaseAmplitudeofCorrelograms()", &signal_24, QMetaData::Public },
	{ "noScale()", &signal_25, QMetaData::Public },
	{ "maxScale()", &signal_26, QMetaData::Public },
	{ "shoulderScale()", &signal_27, QMetaData::Public },
	{ "updatedBinSizeAndTimeFrame(int,int)", &signal_28, QMetaData::Public },
	{ "setShoulderLine(bool)", &signal_29, QMetaData::Public },
	{ "updateDrawing()", &signal_30, QMetaData::Public },
	{ "changeGain(int)", &signal_31, QMetaData::Public },
	{ "changeTimeInterval(int,bool)", &signal_32, QMetaData::Public },
	{ "changeChannelPositions(QValueList<int>&)", &signal_33, QMetaData::Public },
	{ "computeProbabilities()", &signal_34, QMetaData::Public },
	{ "changeBackgroundColor(QColor)", &signal_35, QMetaData::Public },
	{ "clustersRenumbered(bool)", &signal_36, QMetaData::Public },
	{ "updateClusters(QString,QValueList<int>&,ItemColors*,bool)", &signal_37, QMetaData::Public },
	{ "increaseAllAmplitude()", &signal_38, QMetaData::Public },
	{ "decreaseAllAmplitude()", &signal_39, QMetaData::Public },
	{ "showLabels(bool)", &signal_40, QMetaData::Public },
	{ "nextCluster()", &signal_41, QMetaData::Public },
	{ "previousCluster()", &signal_42, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"KlustersView", parentObject,
	slot_tbl, 6,
	signal_tbl, 43,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_KlustersView.setMetaObject( metaObj );
    return metaObj;
}

void* KlustersView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "KlustersView" ) )
	return this;
    return KDockArea::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL updatedDimensions
void KlustersView::updatedDimensions( int t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL singleColorUpdated
void KlustersView::singleColorUpdated( int t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL clusterRemovedFromView
void KlustersView::clusterRemovedFromView( int t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL clusterAddedToView
void KlustersView::clusterAddedToView( int t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL newClusterAddedToView
void KlustersView::newClusterAddedToView( QValueList<int>& t0, int t1, bool t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_bool.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL newClusterAddedToView
void KlustersView::newClusterAddedToView( int t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL spikesRemovedFromClusters
void KlustersView::spikesRemovedFromClusters( QValueList<int>& t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL modeToSet
void KlustersView::modeToSet( BaseFrame::Mode t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 7 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL spikesAddedToCluster
void KlustersView::spikesAddedToCluster( int t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL updateContents
void KlustersView::updateContents()
{
    activate_signal( staticMetaObject()->signalOffset() + 9 );
}

// SIGNAL emptySelection
void KlustersView::emptySelection()
{
    activate_signal( staticMetaObject()->signalOffset() + 10 );
}

// SIGNAL modifiedClusters
void KlustersView::modifiedClusters( QValueList<int>& t0, bool t1, bool t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 11 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_bool.set(o+2,t1);
    static_QUType_bool.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL modifiedClustersUndo
void KlustersView::modifiedClustersUndo( QValueList<int>& t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 12 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL updatedTimeFrame
void KlustersView::updatedTimeFrame( long t0, long t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 13 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL sampleMode
void KlustersView::sampleMode()
{
    activate_signal( staticMetaObject()->signalOffset() + 14 );
}

// SIGNAL timeFrameMode
void KlustersView::timeFrameMode()
{
    activate_signal( staticMetaObject()->signalOffset() + 15 );
}

// SIGNAL meanPresentation
void KlustersView::meanPresentation()
{
    activate_signal( staticMetaObject()->signalOffset() + 16 );
}

// SIGNAL allWaveformsPresentation
void KlustersView::allWaveformsPresentation()
{
    activate_signal( staticMetaObject()->signalOffset() + 17 );
}

// SIGNAL overLayPresentation
void KlustersView::overLayPresentation()
{
    activate_signal( staticMetaObject()->signalOffset() + 18 );
}

// SIGNAL sideBySidePresentation
void KlustersView::sideBySidePresentation()
{
    activate_signal( staticMetaObject()->signalOffset() + 19 );
}

// SIGNAL increaseAmplitude
void KlustersView::increaseAmplitude()
{
    activate_signal( staticMetaObject()->signalOffset() + 20 );
}

// SIGNAL decreaseAmplitude
void KlustersView::decreaseAmplitude()
{
    activate_signal( staticMetaObject()->signalOffset() + 21 );
}

// SIGNAL updateDisplayNbSpikes
void KlustersView::updateDisplayNbSpikes( long t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 22 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL increaseAmplitudeofCorrelograms
void KlustersView::increaseAmplitudeofCorrelograms()
{
    activate_signal( staticMetaObject()->signalOffset() + 23 );
}

// SIGNAL decreaseAmplitudeofCorrelograms
void KlustersView::decreaseAmplitudeofCorrelograms()
{
    activate_signal( staticMetaObject()->signalOffset() + 24 );
}

// SIGNAL noScale
void KlustersView::noScale()
{
    activate_signal( staticMetaObject()->signalOffset() + 25 );
}

// SIGNAL maxScale
void KlustersView::maxScale()
{
    activate_signal( staticMetaObject()->signalOffset() + 26 );
}

// SIGNAL shoulderScale
void KlustersView::shoulderScale()
{
    activate_signal( staticMetaObject()->signalOffset() + 27 );
}

// SIGNAL updatedBinSizeAndTimeFrame
void KlustersView::updatedBinSizeAndTimeFrame( int t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 28 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL setShoulderLine
void KlustersView::setShoulderLine( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 29, t0 );
}

// SIGNAL updateDrawing
void KlustersView::updateDrawing()
{
    activate_signal( staticMetaObject()->signalOffset() + 30 );
}

// SIGNAL changeGain
void KlustersView::changeGain( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 31, t0 );
}

// SIGNAL changeTimeInterval
void KlustersView::changeTimeInterval( int t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 32 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL changeChannelPositions
void KlustersView::changeChannelPositions( QValueList<int>& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 33 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL computeProbabilities
void KlustersView::computeProbabilities()
{
    activate_signal( staticMetaObject()->signalOffset() + 34 );
}

// SIGNAL changeBackgroundColor
void KlustersView::changeBackgroundColor( QColor t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 35 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_varptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL clustersRenumbered
void KlustersView::clustersRenumbered( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 36, t0 );
}

// SIGNAL updateClusters
void KlustersView::updateClusters( QString t0, QValueList<int>& t1, ItemColors* t2, bool t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 37 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_QString.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    static_QUType_ptr.set(o+3,t2);
    static_QUType_bool.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL increaseAllAmplitude
void KlustersView::increaseAllAmplitude()
{
    activate_signal( staticMetaObject()->signalOffset() + 38 );
}

// SIGNAL decreaseAllAmplitude
void KlustersView::decreaseAllAmplitude()
{
    activate_signal( staticMetaObject()->signalOffset() + 39 );
}

// SIGNAL showLabels
void KlustersView::showLabels( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 40, t0 );
}

// SIGNAL nextCluster
void KlustersView::nextCluster()
{
    activate_signal( staticMetaObject()->signalOffset() + 41 );
}

// SIGNAL previousCluster
void KlustersView::previousCluster()
{
    activate_signal( staticMetaObject()->signalOffset() + 42 );
}

bool KlustersView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: clusterDockClosed((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 1: waveformDockClosed((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 2: correlogramDockClosed((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 3: errorMatrixDockClosed((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 4: traceDockClosed((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 5: setStartAndDuration((long)(*((long*)static_QUType_ptr.get(_o+1))),(long)(*((long*)static_QUType_ptr.get(_o+2)))); break;
    default:
	return KDockArea::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool KlustersView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: updatedDimensions((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 1: singleColorUpdated((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 2: clusterRemovedFromView((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 3: clusterAddedToView((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 4: newClusterAddedToView((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 5: newClusterAddedToView((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 6: spikesRemovedFromClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2)); break;
    case 7: modeToSet((BaseFrame::Mode)(*((BaseFrame::Mode*)static_QUType_ptr.get(_o+1)))); break;
    case 8: spikesAddedToCluster((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 9: updateContents(); break;
    case 10: emptySelection(); break;
    case 11: modifiedClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 12: modifiedClustersUndo((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2)); break;
    case 13: updatedTimeFrame((long)(*((long*)static_QUType_ptr.get(_o+1))),(long)(*((long*)static_QUType_ptr.get(_o+2)))); break;
    case 14: sampleMode(); break;
    case 15: timeFrameMode(); break;
    case 16: meanPresentation(); break;
    case 17: allWaveformsPresentation(); break;
    case 18: overLayPresentation(); break;
    case 19: sideBySidePresentation(); break;
    case 20: increaseAmplitude(); break;
    case 21: decreaseAmplitude(); break;
    case 22: updateDisplayNbSpikes((long)(*((long*)static_QUType_ptr.get(_o+1)))); break;
    case 23: increaseAmplitudeofCorrelograms(); break;
    case 24: decreaseAmplitudeofCorrelograms(); break;
    case 25: noScale(); break;
    case 26: maxScale(); break;
    case 27: shoulderScale(); break;
    case 28: updatedBinSizeAndTimeFrame((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 29: setShoulderLine((bool)static_QUType_bool.get(_o+1)); break;
    case 30: updateDrawing(); break;
    case 31: changeGain((int)static_QUType_int.get(_o+1)); break;
    case 32: changeTimeInterval((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 33: changeChannelPositions((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 34: computeProbabilities(); break;
    case 35: changeBackgroundColor((QColor)(*((QColor*)static_QUType_ptr.get(_o+1)))); break;
    case 36: clustersRenumbered((bool)static_QUType_bool.get(_o+1)); break;
    case 37: updateClusters((QString)static_QUType_QString.get(_o+1),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2)),(ItemColors*)static_QUType_ptr.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    case 38: increaseAllAmplitude(); break;
    case 39: decreaseAllAmplitude(); break;
    case 40: showLabels((bool)static_QUType_bool.get(_o+1)); break;
    case 41: nextCluster(); break;
    case 42: previousCluster(); break;
    default:
	return KDockArea::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool KlustersView::qt_property( int id, int f, QVariant* v)
{
    return KDockArea::qt_property( id, f, v);
}

bool KlustersView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
