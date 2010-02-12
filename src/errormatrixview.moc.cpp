/****************************************************************************
** ErrorMatrixView meta object code from reading C++ file 'errormatrixview.h'
**
** Created: Sat Sep 1 20:01:55 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "errormatrixview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ErrorMatrixView::className() const
{
    return "ErrorMatrixView";
}

QMetaObject *ErrorMatrixView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ErrorMatrixView( "ErrorMatrixView", &ErrorMatrixView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ErrorMatrixView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ErrorMatrixView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ErrorMatrixView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ErrorMatrixView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ErrorMatrixView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ViewWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_0 = {"isThreadsRunning", 1, param_slot_0 };
    static const QUMethod slot_1 = {"updateMatrixContents", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "groupedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "newClusterId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"clustersGrouped", 2, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "deletedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "destinationCluster", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"clustersDeleted", 2, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "fromClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "destinationClusterId", &static_QUType_int, 0, QUParameter::In },
	{ "emptiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_4 = {"removeSpikesFromClusters", 3, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "fromClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "emptiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_5 = {"newClusterAdded", 3, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "fromToNewClusterIds", &static_QUType_ptr, "QMap<int,int>", QUParameter::InOut },
	{ "emptiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_6 = {"newClustersAdded", 2, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "clustersToRecluster", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_7 = {"newClustersAdded", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "clusterIdsOldNew", &static_QUType_ptr, "QMap<int,int>", QUParameter::InOut }
    };
    static const QUMethod slot_8 = {"renumber", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "clusterIdsNewOld", &static_QUType_ptr, "QMap<int,int>", QUParameter::InOut }
    };
    static const QUMethod slot_9 = {"undoRenumbering", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ "addedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "updatedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_10 = {"undoAdditionModification", 2, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ "addedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_11 = {"undoAddition", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ "updatedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_12 = {"undoModification", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ "clusterIdsOldNew", &static_QUType_ptr, "QMap<int,int>", QUParameter::InOut }
    };
    static const QUMethod slot_13 = {"redoRenumbering", 1, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ "addedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "isModifiedByDeletion", &static_QUType_bool, 0, QUParameter::In },
	{ "deletedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_14 = {"redoAdditionModification", 4, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ "addedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "deletedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_15 = {"redoAddition", 2, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ "updatedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "isModifiedByDeletion", &static_QUType_bool, 0, QUParameter::In },
	{ "deletedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_16 = {"redoModification", 3, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ "deletedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_17 = {"redoDeletion", 1, param_slot_17 };
    static const QUParameter param_slot_18[] = {
	{ "printPainter", &static_QUType_ptr, "QPainter", QUParameter::InOut },
	{ "metrics", &static_QUType_ptr, "QPaintDeviceMetrics", QUParameter::InOut },
	{ "whiteBackground", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_18 = {"print", 3, param_slot_18 };
    static const QMetaData slot_tbl[] = {
	{ "isThreadsRunning()", &slot_0, QMetaData::Public },
	{ "updateMatrixContents()", &slot_1, QMetaData::Public },
	{ "clustersGrouped(QValueList<int>&,int)", &slot_2, QMetaData::Public },
	{ "clustersDeleted(QValueList<int>&,int)", &slot_3, QMetaData::Public },
	{ "removeSpikesFromClusters(QValueList<int>&,int,QValueList<int>&)", &slot_4, QMetaData::Public },
	{ "newClusterAdded(QValueList<int>&,int,QValueList<int>&)", &slot_5, QMetaData::Public },
	{ "newClustersAdded(QMap<int,int>&,QValueList<int>&)", &slot_6, QMetaData::Public },
	{ "newClustersAdded(QValueList<int>&)", &slot_7, QMetaData::Public },
	{ "renumber(QMap<int,int>&)", &slot_8, QMetaData::Public },
	{ "undoRenumbering(QMap<int,int>&)", &slot_9, QMetaData::Public },
	{ "undoAdditionModification(QValueList<int>&,QValueList<int>&)", &slot_10, QMetaData::Public },
	{ "undoAddition(QValueList<int>&)", &slot_11, QMetaData::Public },
	{ "undoModification(QValueList<int>&)", &slot_12, QMetaData::Public },
	{ "redoRenumbering(QMap<int,int>&)", &slot_13, QMetaData::Public },
	{ "redoAdditionModification(QValueList<int>&,QValueList<int>&,bool,QValueList<int>&)", &slot_14, QMetaData::Public },
	{ "redoAddition(QValueList<int>&,QValueList<int>&)", &slot_15, QMetaData::Public },
	{ "redoModification(QValueList<int>&,bool,QValueList<int>&)", &slot_16, QMetaData::Public },
	{ "redoDeletion(QValueList<int>&)", &slot_17, QMetaData::Public },
	{ "print(QPainter&,QPaintDeviceMetrics&,bool)", &slot_18, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ErrorMatrixView", parentObject,
	slot_tbl, 19,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ErrorMatrixView.setMetaObject( metaObj );
    return metaObj;
}

void* ErrorMatrixView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ErrorMatrixView" ) )
	return this;
    return ViewWidget::qt_cast( clname );
}

bool ErrorMatrixView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: static_QUType_bool.set(_o,isThreadsRunning()); break;
    case 1: updateMatrixContents(); break;
    case 2: clustersGrouped((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(int)static_QUType_int.get(_o+2)); break;
    case 3: clustersDeleted((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(int)static_QUType_int.get(_o+2)); break;
    case 4: removeSpikesFromClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(int)static_QUType_int.get(_o+2),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+3))); break;
    case 5: newClusterAdded((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(int)static_QUType_int.get(_o+2),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+3))); break;
    case 6: newClustersAdded((QMap<int,int>&)*((QMap<int,int>*)static_QUType_ptr.get(_o+1)),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2))); break;
    case 7: newClustersAdded((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 8: renumber((QMap<int,int>&)*((QMap<int,int>*)static_QUType_ptr.get(_o+1))); break;
    case 9: undoRenumbering((QMap<int,int>&)*((QMap<int,int>*)static_QUType_ptr.get(_o+1))); break;
    case 10: undoAdditionModification((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2))); break;
    case 11: undoAddition((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 12: undoModification((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 13: redoRenumbering((QMap<int,int>&)*((QMap<int,int>*)static_QUType_ptr.get(_o+1))); break;
    case 14: redoAdditionModification((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2)),(bool)static_QUType_bool.get(_o+3),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+4))); break;
    case 15: redoAddition((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2))); break;
    case 16: redoModification((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+3))); break;
    case 17: redoDeletion((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 18: print((QPainter&)*((QPainter*)static_QUType_ptr.get(_o+1)),(QPaintDeviceMetrics&)*((QPaintDeviceMetrics*)static_QUType_ptr.get(_o+2)),(bool)static_QUType_bool.get(_o+3)); break;
    default:
	return ViewWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ErrorMatrixView::qt_emit( int _id, QUObject* _o )
{
    return ViewWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ErrorMatrixView::qt_property( int id, int f, QVariant* v)
{
    return ViewWidget::qt_property( id, f, v);
}

bool ErrorMatrixView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
