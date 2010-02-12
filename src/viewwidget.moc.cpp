/****************************************************************************
** ViewWidget meta object code from reading C++ file 'viewwidget.h'
**
** Created: Sat Sep 1 20:01:54 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "viewwidget.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ViewWidget::className() const
{
    return "ViewWidget";
}

QMetaObject *ViewWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ViewWidget( "ViewWidget", &ViewWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ViewWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ViewWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ViewWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ViewWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ViewWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = BaseFrame::staticMetaObject();
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
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In },
	{ "isModifiedByDeletion", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"updateClusters", 3, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"undoUpdateClusters", 2, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_11 = {"isThreadsRunning", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ "printPainter", &static_QUType_ptr, "QPainter", QUParameter::InOut },
	{ "metrics", &static_QUType_ptr, "QPaintDeviceMetrics", QUParameter::InOut },
	{ "whiteBackground", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"print", 3, param_slot_12 };
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
	{ "updateClusters(QValueList<int>&,bool,bool)", &slot_9, QMetaData::Public },
	{ "undoUpdateClusters(QValueList<int>&,bool)", &slot_10, QMetaData::Public },
	{ "isThreadsRunning()", &slot_11, QMetaData::Public },
	{ "print(QPainter&,QPaintDeviceMetrics&,bool)", &slot_12, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ViewWidget", parentObject,
	slot_tbl, 13,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ViewWidget.setMetaObject( metaObj );
    return metaObj;
}

void* ViewWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ViewWidget" ) )
	return this;
    return BaseFrame::qt_cast( clname );
}

bool ViewWidget::qt_invoke( int _id, QUObject* _o )
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
    case 9: updateClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 10: undoUpdateClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2)); break;
    case 11: static_QUType_bool.set(_o,isThreadsRunning()); break;
    case 12: print((QPainter&)*((QPainter*)static_QUType_ptr.get(_o+1)),(QPaintDeviceMetrics&)*((QPaintDeviceMetrics*)static_QUType_ptr.get(_o+2)),(bool)static_QUType_bool.get(_o+3)); break;
    default:
	return BaseFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ViewWidget::qt_emit( int _id, QUObject* _o )
{
    return BaseFrame::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ViewWidget::qt_property( int id, int f, QVariant* v)
{
    return BaseFrame::qt_property( id, f, v);
}

bool ViewWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
