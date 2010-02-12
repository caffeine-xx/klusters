/****************************************************************************
** ClusterView meta object code from reading C++ file 'clusterview.h'
**
** Created: Sat Sep 1 20:02:00 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "clusterview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ClusterView::className() const
{
    return "ClusterView";
}

QMetaObject *ClusterView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ClusterView( "ClusterView", &ClusterView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ClusterView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClusterView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ClusterView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClusterView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ClusterView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ViewWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "dimensionX", &static_QUType_int, 0, QUParameter::In },
	{ "dimensionY", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"updatedDimensions", 2, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"singleColorUpdate", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"addClusterToView", 2, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"removeClusterFromView", 2, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "fromClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"addNewClusterToView", 3, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"addNewClusterToView", 2, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "fromClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"spikesRemovedFromClusters", 2, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"spikesAddedToCluster", 2, param_slot_7 };
    static const QUMethod slot_8 = {"emptySelection", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ "selectedMode", &static_QUType_ptr, "BaseFrame::Mode", QUParameter::In }
    };
    static const QUMethod slot_9 = {"setMode", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In },
	{ "isModifiedByDeletion", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"updateClusters", 3, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"undoUpdateClusters", 2, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ "step", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"setTimeStepInSecond", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ "step", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"setTimeStepInSecond", 2, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ "printPainter", &static_QUType_ptr, "QPainter", QUParameter::InOut },
	{ "metrics", &static_QUType_ptr, "QPaintDeviceMetrics", QUParameter::InOut },
	{ "whiteBackground", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"print", 3, param_slot_14 };
    static const QMetaData slot_tbl[] = {
	{ "updatedDimensions(int,int)", &slot_0, QMetaData::Public },
	{ "singleColorUpdate(int,bool)", &slot_1, QMetaData::Public },
	{ "addClusterToView(int,bool)", &slot_2, QMetaData::Public },
	{ "removeClusterFromView(int,bool)", &slot_3, QMetaData::Public },
	{ "addNewClusterToView(QValueList<int>&,int,bool)", &slot_4, QMetaData::Public },
	{ "addNewClusterToView(int,bool)", &slot_5, QMetaData::Public },
	{ "spikesRemovedFromClusters(QValueList<int>&,bool)", &slot_6, QMetaData::Public },
	{ "spikesAddedToCluster(int,bool)", &slot_7, QMetaData::Public },
	{ "emptySelection()", &slot_8, QMetaData::Public },
	{ "setMode(BaseFrame::Mode)", &slot_9, QMetaData::Public },
	{ "updateClusters(QValueList<int>&,bool,bool)", &slot_10, QMetaData::Public },
	{ "undoUpdateClusters(QValueList<int>&,bool)", &slot_11, QMetaData::Public },
	{ "setTimeStepInSecond(int)", &slot_12, QMetaData::Public },
	{ "setTimeStepInSecond(int,bool)", &slot_13, QMetaData::Public },
	{ "print(QPainter&,QPaintDeviceMetrics&,bool)", &slot_14, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "startTime", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod signal_0 = {"moveToTime", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "moveToTime(long)", &signal_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ClusterView", parentObject,
	slot_tbl, 15,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ClusterView.setMetaObject( metaObj );
    return metaObj;
}

void* ClusterView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ClusterView" ) )
	return this;
    return ViewWidget::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL moveToTime
void ClusterView::moveToTime( long t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

bool ClusterView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updatedDimensions((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 1: singleColorUpdate((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 2: addClusterToView((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 3: removeClusterFromView((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 4: addNewClusterToView((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 5: addNewClusterToView((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 6: spikesRemovedFromClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2)); break;
    case 7: spikesAddedToCluster((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 8: emptySelection(); break;
    case 9: setMode((BaseFrame::Mode)(*((BaseFrame::Mode*)static_QUType_ptr.get(_o+1)))); break;
    case 10: updateClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 11: undoUpdateClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2)); break;
    case 12: setTimeStepInSecond((int)static_QUType_int.get(_o+1)); break;
    case 13: setTimeStepInSecond((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 14: print((QPainter&)*((QPainter*)static_QUType_ptr.get(_o+1)),(QPaintDeviceMetrics&)*((QPaintDeviceMetrics*)static_QUType_ptr.get(_o+2)),(bool)static_QUType_bool.get(_o+3)); break;
    default:
	return ViewWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ClusterView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: moveToTime((long)(*((long*)static_QUType_ptr.get(_o+1)))); break;
    default:
	return ViewWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ClusterView::qt_property( int id, int f, QVariant* v)
{
    return ViewWidget::qt_property( id, f, v);
}

bool ClusterView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
