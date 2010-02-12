/****************************************************************************
** CorrelationView meta object code from reading C++ file 'correlationview.h'
**
** Created: Sat Sep 1 20:01:53 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "correlationview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CorrelationView::className() const
{
    return "CorrelationView";
}

QMetaObject *CorrelationView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CorrelationView( "CorrelationView", &CorrelationView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CorrelationView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CorrelationView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CorrelationView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CorrelationView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CorrelationView::staticMetaObject()
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
    static const QUMethod slot_8 = {"setNoScale", 0, 0 };
    static const QUMethod slot_9 = {"setMaximumScale", 0, 0 };
    static const QUMethod slot_10 = {"setShoulderScale", 0, 0 };
    static const QUParameter param_slot_11[] = {
	{ "size", &static_QUType_int, 0, QUParameter::In },
	{ "width", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"setBinSizeAndTimeWindow", 2, param_slot_11 };
    static const QUMethod slot_12 = {"increaseAmplitude", 0, 0 };
    static const QUMethod slot_13 = {"decreaseAmplitude", 0, 0 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_14 = {"isThreadsRunning", 1, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"undoUpdateClusters", 2, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In },
	{ "isModifiedByDeletion", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"updateClusters", 3, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"setShoulderLine", 1, param_slot_17 };
    static const QUMethod slot_18 = {"updateDrawing", 0, 0 };
    static const QUParameter param_slot_19[] = {
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"clustersRenumbered", 1, param_slot_19 };
    static const QUParameter param_slot_20[] = {
	{ "printPainter", &static_QUType_ptr, "QPainter", QUParameter::InOut },
	{ "metrics", &static_QUType_ptr, "QPaintDeviceMetrics", QUParameter::InOut },
	{ "whiteBackground", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_20 = {"print", 3, param_slot_20 };
    static const QMetaData slot_tbl[] = {
	{ "singleColorUpdate(int,bool)", &slot_0, QMetaData::Public },
	{ "addClusterToView(int,bool)", &slot_1, QMetaData::Public },
	{ "removeClusterFromView(int,bool)", &slot_2, QMetaData::Public },
	{ "addNewClusterToView(QValueList<int>&,int,bool)", &slot_3, QMetaData::Public },
	{ "addNewClusterToView(int,bool)", &slot_4, QMetaData::Public },
	{ "spikesRemovedFromClusters(QValueList<int>&,bool)", &slot_5, QMetaData::Public },
	{ "spikesAddedToCluster(int,bool)", &slot_6, QMetaData::Public },
	{ "setMode(BaseFrame::Mode)", &slot_7, QMetaData::Public },
	{ "setNoScale()", &slot_8, QMetaData::Public },
	{ "setMaximumScale()", &slot_9, QMetaData::Public },
	{ "setShoulderScale()", &slot_10, QMetaData::Public },
	{ "setBinSizeAndTimeWindow(int,int)", &slot_11, QMetaData::Public },
	{ "increaseAmplitude()", &slot_12, QMetaData::Public },
	{ "decreaseAmplitude()", &slot_13, QMetaData::Public },
	{ "isThreadsRunning()", &slot_14, QMetaData::Public },
	{ "undoUpdateClusters(QValueList<int>&,bool)", &slot_15, QMetaData::Public },
	{ "updateClusters(QValueList<int>&,bool,bool)", &slot_16, QMetaData::Public },
	{ "setShoulderLine(bool)", &slot_17, QMetaData::Public },
	{ "updateDrawing()", &slot_18, QMetaData::Public },
	{ "clustersRenumbered(bool)", &slot_19, QMetaData::Public },
	{ "print(QPainter&,QPaintDeviceMetrics&,bool)", &slot_20, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"CorrelationView", parentObject,
	slot_tbl, 21,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CorrelationView.setMetaObject( metaObj );
    return metaObj;
}

void* CorrelationView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CorrelationView" ) )
	return this;
    return ViewWidget::qt_cast( clname );
}

bool CorrelationView::qt_invoke( int _id, QUObject* _o )
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
    case 8: setNoScale(); break;
    case 9: setMaximumScale(); break;
    case 10: setShoulderScale(); break;
    case 11: setBinSizeAndTimeWindow((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 12: increaseAmplitude(); break;
    case 13: decreaseAmplitude(); break;
    case 14: static_QUType_bool.set(_o,isThreadsRunning()); break;
    case 15: undoUpdateClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2)); break;
    case 16: updateClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 17: setShoulderLine((bool)static_QUType_bool.get(_o+1)); break;
    case 18: updateDrawing(); break;
    case 19: clustersRenumbered((bool)static_QUType_bool.get(_o+1)); break;
    case 20: print((QPainter&)*((QPainter*)static_QUType_ptr.get(_o+1)),(QPaintDeviceMetrics&)*((QPaintDeviceMetrics*)static_QUType_ptr.get(_o+2)),(bool)static_QUType_bool.get(_o+3)); break;
    default:
	return ViewWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CorrelationView::qt_emit( int _id, QUObject* _o )
{
    return ViewWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CorrelationView::qt_property( int id, int f, QVariant* v)
{
    return ViewWidget::qt_property( id, f, v);
}

bool CorrelationView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
