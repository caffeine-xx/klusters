/****************************************************************************
** WaveformView meta object code from reading C++ file 'waveformview.h'
**
** Created: Sat Sep 1 20:01:49 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "waveformview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *WaveformView::className() const
{
    return "WaveformView";
}

QMetaObject *WaveformView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_WaveformView( "WaveformView", &WaveformView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString WaveformView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WaveformView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString WaveformView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WaveformView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* WaveformView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ViewWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"singleColorUpdate", 2, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"addClusterToView", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"removeClusterFromView", 2, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "fromClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"addNewClusterToView", 3, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"addNewClusterToView", 2, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "fromClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"spikesRemovedFromClusters", 2, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"spikesAddedToCluster", 2, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "selectedMode", &static_QUType_ptr, "BaseFrame::Mode", QUParameter::In }
    };
    static const QUMethod slot_7 = {"setMode", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In },
	{ "isModifiedByDeletion", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"updateClusters", 3, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"undoUpdateClusters", 2, param_slot_9 };
    static const QUMethod slot_10 = {"setMeanPresentation", 0, 0 };
    static const QUMethod slot_11 = {"setAllWaveformsPresentation", 0, 0 };
    static const QUMethod slot_12 = {"setOverLayPresentation", 0, 0 };
    static const QUMethod slot_13 = {"setSideBySidePresentation", 0, 0 };
    static const QUMethod slot_14 = {"setSampleMode", 0, 0 };
    static const QUMethod slot_15 = {"setTimeFrameMode", 0, 0 };
    static const QUParameter param_slot_16[] = {
	{ "start", &static_QUType_ptr, "long", QUParameter::In },
	{ "width", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod slot_16 = {"setTimeFrame", 2, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ "gain", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"setGain", 1, param_slot_17 };
    static const QUMethod slot_18 = {"increaseAmplitude", 0, 0 };
    static const QUMethod slot_19 = {"decreaseAmplitude", 0, 0 };
    static const QUParameter param_slot_20[] = {
	{ "nbSpikes", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod slot_20 = {"setDisplayNbSpikes", 1, param_slot_20 };
    static const QUParameter param_slot_21[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_21 = {"isThreadsRunning", 1, param_slot_21 };
    static const QUMethod slot_22 = {"updateDrawing", 0, 0 };
    static const QUParameter param_slot_23[] = {
	{ "positions", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_23 = {"setChannelPositions", 1, param_slot_23 };
    static const QUParameter param_slot_24[] = {
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_24 = {"clustersRenumbered", 1, param_slot_24 };
    static const QUParameter param_slot_25[] = {
	{ "printPainter", &static_QUType_ptr, "QPainter", QUParameter::InOut },
	{ "metrics", &static_QUType_ptr, "QPaintDeviceMetrics", QUParameter::InOut },
	{ "whiteBackground", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_25 = {"print", 3, param_slot_25 };
    static const QMetaData slot_tbl[] = {
	{ "singleColorUpdate(int,bool)", &slot_0, QMetaData::Public },
	{ "addClusterToView(int,bool)", &slot_1, QMetaData::Public },
	{ "removeClusterFromView(int,bool)", &slot_2, QMetaData::Public },
	{ "addNewClusterToView(QValueList<int>&,int,bool)", &slot_3, QMetaData::Public },
	{ "addNewClusterToView(int,bool)", &slot_4, QMetaData::Public },
	{ "spikesRemovedFromClusters(QValueList<int>&,bool)", &slot_5, QMetaData::Public },
	{ "spikesAddedToCluster(int,bool)", &slot_6, QMetaData::Public },
	{ "setMode(BaseFrame::Mode)", &slot_7, QMetaData::Public },
	{ "updateClusters(QValueList<int>&,bool,bool)", &slot_8, QMetaData::Public },
	{ "undoUpdateClusters(QValueList<int>&,bool)", &slot_9, QMetaData::Public },
	{ "setMeanPresentation()", &slot_10, QMetaData::Public },
	{ "setAllWaveformsPresentation()", &slot_11, QMetaData::Public },
	{ "setOverLayPresentation()", &slot_12, QMetaData::Public },
	{ "setSideBySidePresentation()", &slot_13, QMetaData::Public },
	{ "setSampleMode()", &slot_14, QMetaData::Public },
	{ "setTimeFrameMode()", &slot_15, QMetaData::Public },
	{ "setTimeFrame(long,long)", &slot_16, QMetaData::Public },
	{ "setGain(int)", &slot_17, QMetaData::Public },
	{ "increaseAmplitude()", &slot_18, QMetaData::Public },
	{ "decreaseAmplitude()", &slot_19, QMetaData::Public },
	{ "setDisplayNbSpikes(long)", &slot_20, QMetaData::Public },
	{ "isThreadsRunning()", &slot_21, QMetaData::Public },
	{ "updateDrawing()", &slot_22, QMetaData::Public },
	{ "setChannelPositions(QValueList<int>&)", &slot_23, QMetaData::Public },
	{ "clustersRenumbered(bool)", &slot_24, QMetaData::Public },
	{ "print(QPainter&,QPaintDeviceMetrics&,bool)", &slot_25, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"WaveformView", parentObject,
	slot_tbl, 26,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_WaveformView.setMetaObject( metaObj );
    return metaObj;
}

void* WaveformView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "WaveformView" ) )
	return this;
    return ViewWidget::qt_cast( clname );
}

bool WaveformView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: singleColorUpdate((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 1: addClusterToView((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 2: removeClusterFromView((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 3: addNewClusterToView((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 4: addNewClusterToView((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 5: spikesRemovedFromClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2)); break;
    case 6: spikesAddedToCluster((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 7: setMode((BaseFrame::Mode)(*((BaseFrame::Mode*)static_QUType_ptr.get(_o+1)))); break;
    case 8: updateClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 9: undoUpdateClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2)); break;
    case 10: setMeanPresentation(); break;
    case 11: setAllWaveformsPresentation(); break;
    case 12: setOverLayPresentation(); break;
    case 13: setSideBySidePresentation(); break;
    case 14: setSampleMode(); break;
    case 15: setTimeFrameMode(); break;
    case 16: setTimeFrame((long)(*((long*)static_QUType_ptr.get(_o+1))),(long)(*((long*)static_QUType_ptr.get(_o+2)))); break;
    case 17: setGain((int)static_QUType_int.get(_o+1)); break;
    case 18: increaseAmplitude(); break;
    case 19: decreaseAmplitude(); break;
    case 20: setDisplayNbSpikes((long)(*((long*)static_QUType_ptr.get(_o+1)))); break;
    case 21: static_QUType_bool.set(_o,isThreadsRunning()); break;
    case 22: updateDrawing(); break;
    case 23: setChannelPositions((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 24: clustersRenumbered((bool)static_QUType_bool.get(_o+1)); break;
    case 25: print((QPainter&)*((QPainter*)static_QUType_ptr.get(_o+1)),(QPaintDeviceMetrics&)*((QPaintDeviceMetrics*)static_QUType_ptr.get(_o+2)),(bool)static_QUType_bool.get(_o+3)); break;
    default:
	return ViewWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool WaveformView::qt_emit( int _id, QUObject* _o )
{
    return ViewWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool WaveformView::qt_property( int id, int f, QVariant* v)
{
    return ViewWidget::qt_property( id, f, v);
}

bool WaveformView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
