/****************************************************************************
** KlustersDoc meta object code from reading C++ file 'klustersdoc.h'
**
** Created: Sat Sep 15 16:42:29 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "klustersdoc.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *KlustersDoc::className() const
{
    return "KlustersDoc";
}

QMetaObject *KlustersDoc::metaObj = 0;
static QMetaObjectCleanUp cleanUp_KlustersDoc( "KlustersDoc", &KlustersDoc::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString KlustersDoc::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KlustersDoc", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString KlustersDoc::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KlustersDoc", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* KlustersDoc::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "sender", &static_QUType_ptr, "KlustersView", QUParameter::In }
    };
    static const QUMethod slot_0 = {"updateAllViews", 1, param_slot_0 };
    static const QUMethod slot_1 = {"renumberClusters", 0, 0 };
    static const QUMethod slot_2 = {"launchAutoSave", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "updateAllViews(KlustersView*)", &slot_0, QMetaData::Public },
	{ "renumberClusters()", &slot_1, QMetaData::Public },
	{ "launchAutoSave()", &slot_2, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "undoNb", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"updateUndoNb", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "undoNb", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"updateRedoNb", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "groupedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "newClusterId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"clustersGrouped", 2, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "deletedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "destinationCluster", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"clustersDeleted", 2, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "fromClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "destinationClusterId", &static_QUType_int, 0, QUParameter::In },
	{ "emptiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_4 = {"removeSpikesFromClusters", 3, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ "fromClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "emptiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_5 = {"newClusterAdded", 3, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ "fromToNewClusterIds", &static_QUType_ptr, "QMap<int,int>", QUParameter::InOut },
	{ "emptiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_6 = {"newClustersAdded", 2, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "clusterIdsOldNew", &static_QUType_ptr, "QMap<int,int>", QUParameter::InOut }
    };
    static const QUMethod signal_7 = {"renumber", 1, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ "clusterIdsNewOld", &static_QUType_ptr, "QMap<int,int>", QUParameter::InOut }
    };
    static const QUMethod signal_8 = {"undoRenumbering", 1, param_signal_8 };
    static const QUParameter param_signal_9[] = {
	{ "addedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "updatedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_9 = {"undoAdditionModification", 2, param_signal_9 };
    static const QUParameter param_signal_10[] = {
	{ "addedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_10 = {"undoAddition", 1, param_signal_10 };
    static const QUParameter param_signal_11[] = {
	{ "updatedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_11 = {"undoModification", 1, param_signal_11 };
    static const QUParameter param_signal_12[] = {
	{ "clusterIdsOldNew", &static_QUType_ptr, "QMap<int,int>", QUParameter::InOut }
    };
    static const QUMethod signal_12 = {"redoRenumbering", 1, param_signal_12 };
    static const QUParameter param_signal_13[] = {
	{ "addedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "modifiedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "isModifiedByDeletion", &static_QUType_bool, 0, QUParameter::In },
	{ "deletedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_13 = {"redoAdditionModification", 4, param_signal_13 };
    static const QUParameter param_signal_14[] = {
	{ "addedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "deletedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_14 = {"redoAddition", 2, param_signal_14 };
    static const QUParameter param_signal_15[] = {
	{ "updatedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "isModifiedByDeletion", &static_QUType_bool, 0, QUParameter::In },
	{ "deletedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_15 = {"redoModification", 3, param_signal_15 };
    static const QUParameter param_signal_16[] = {
	{ "deletedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_16 = {"redoDeletion", 1, param_signal_16 };
    static const QUParameter param_signal_17[] = {
	{ "clustersToRecluster", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod signal_17 = {"newClustersAdded", 1, param_signal_17 };
    static const QUMethod signal_18 = {"spikesDeleted", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "updateUndoNb(int)", &signal_0, QMetaData::Public },
	{ "updateRedoNb(int)", &signal_1, QMetaData::Public },
	{ "clustersGrouped(QValueList<int>&,int)", &signal_2, QMetaData::Public },
	{ "clustersDeleted(QValueList<int>&,int)", &signal_3, QMetaData::Public },
	{ "removeSpikesFromClusters(QValueList<int>&,int,QValueList<int>&)", &signal_4, QMetaData::Public },
	{ "newClusterAdded(QValueList<int>&,int,QValueList<int>&)", &signal_5, QMetaData::Public },
	{ "newClustersAdded(QMap<int,int>&,QValueList<int>&)", &signal_6, QMetaData::Public },
	{ "renumber(QMap<int,int>&)", &signal_7, QMetaData::Public },
	{ "undoRenumbering(QMap<int,int>&)", &signal_8, QMetaData::Public },
	{ "undoAdditionModification(QValueList<int>&,QValueList<int>&)", &signal_9, QMetaData::Public },
	{ "undoAddition(QValueList<int>&)", &signal_10, QMetaData::Public },
	{ "undoModification(QValueList<int>&)", &signal_11, QMetaData::Public },
	{ "redoRenumbering(QMap<int,int>&)", &signal_12, QMetaData::Public },
	{ "redoAdditionModification(QValueList<int>&,QValueList<int>&,bool,QValueList<int>&)", &signal_13, QMetaData::Public },
	{ "redoAddition(QValueList<int>&,QValueList<int>&)", &signal_14, QMetaData::Public },
	{ "redoModification(QValueList<int>&,bool,QValueList<int>&)", &signal_15, QMetaData::Public },
	{ "redoDeletion(QValueList<int>&)", &signal_16, QMetaData::Public },
	{ "newClustersAdded(QValueList<int>&)", &signal_17, QMetaData::Public },
	{ "spikesDeleted()", &signal_18, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"KlustersDoc", parentObject,
	slot_tbl, 3,
	signal_tbl, 19,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_KlustersDoc.setMetaObject( metaObj );
    return metaObj;
}

void* KlustersDoc::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "KlustersDoc" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL updateUndoNb
void KlustersDoc::updateUndoNb( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL updateRedoNb
void KlustersDoc::updateRedoNb( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL clustersGrouped
void KlustersDoc::clustersGrouped( QValueList<int>& t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL clustersDeleted
void KlustersDoc::clustersDeleted( QValueList<int>& t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL removeSpikesFromClusters
void KlustersDoc::removeSpikesFromClusters( QValueList<int>& t0, int t1, QValueList<int>& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_ptr.set(o+3,&t2);
    activate_signal( clist, o );
}

// SIGNAL newClusterAdded
void KlustersDoc::newClusterAdded( QValueList<int>& t0, int t1, QValueList<int>& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_ptr.set(o+3,&t2);
    activate_signal( clist, o );
}

// SIGNAL newClustersAdded
void KlustersDoc::newClustersAdded( QMap<int,int>& t0, QValueList<int>& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL renumber
void KlustersDoc::renumber( QMap<int,int>& t0 )
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

// SIGNAL undoRenumbering
void KlustersDoc::undoRenumbering( QMap<int,int>& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL undoAdditionModification
void KlustersDoc::undoAdditionModification( QValueList<int>& t0, QValueList<int>& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 9 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL undoAddition
void KlustersDoc::undoAddition( QValueList<int>& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 10 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL undoModification
void KlustersDoc::undoModification( QValueList<int>& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 11 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL redoRenumbering
void KlustersDoc::redoRenumbering( QMap<int,int>& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 12 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL redoAdditionModification
void KlustersDoc::redoAdditionModification( QValueList<int>& t0, QValueList<int>& t1, bool t2, QValueList<int>& t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 13 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,&t1);
    static_QUType_bool.set(o+3,t2);
    static_QUType_ptr.set(o+4,&t3);
    activate_signal( clist, o );
}

// SIGNAL redoAddition
void KlustersDoc::redoAddition( QValueList<int>& t0, QValueList<int>& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 14 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL redoModification
void KlustersDoc::redoModification( QValueList<int>& t0, bool t1, QValueList<int>& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 15 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_bool.set(o+2,t1);
    static_QUType_ptr.set(o+3,&t2);
    activate_signal( clist, o );
}

// SIGNAL redoDeletion
void KlustersDoc::redoDeletion( QValueList<int>& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 16 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL newClustersAdded
void KlustersDoc::newClustersAdded( QValueList<int>& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 17 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL spikesDeleted
void KlustersDoc::spikesDeleted()
{
    activate_signal( staticMetaObject()->signalOffset() + 18 );
}

bool KlustersDoc::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateAllViews((KlustersView*)static_QUType_ptr.get(_o+1)); break;
    case 1: renumberClusters(); break;
    case 2: launchAutoSave(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool KlustersDoc::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: updateUndoNb((int)static_QUType_int.get(_o+1)); break;
    case 1: updateRedoNb((int)static_QUType_int.get(_o+1)); break;
    case 2: clustersGrouped((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(int)static_QUType_int.get(_o+2)); break;
    case 3: clustersDeleted((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(int)static_QUType_int.get(_o+2)); break;
    case 4: removeSpikesFromClusters((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(int)static_QUType_int.get(_o+2),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+3))); break;
    case 5: newClusterAdded((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(int)static_QUType_int.get(_o+2),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+3))); break;
    case 6: newClustersAdded((QMap<int,int>&)*((QMap<int,int>*)static_QUType_ptr.get(_o+1)),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2))); break;
    case 7: renumber((QMap<int,int>&)*((QMap<int,int>*)static_QUType_ptr.get(_o+1))); break;
    case 8: undoRenumbering((QMap<int,int>&)*((QMap<int,int>*)static_QUType_ptr.get(_o+1))); break;
    case 9: undoAdditionModification((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2))); break;
    case 10: undoAddition((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 11: undoModification((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 12: redoRenumbering((QMap<int,int>&)*((QMap<int,int>*)static_QUType_ptr.get(_o+1))); break;
    case 13: redoAdditionModification((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2)),(bool)static_QUType_bool.get(_o+3),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+4))); break;
    case 14: redoAddition((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2))); break;
    case 15: redoModification((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+3))); break;
    case 16: redoDeletion((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 17: newClustersAdded((QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 18: spikesDeleted(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool KlustersDoc::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool KlustersDoc::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
