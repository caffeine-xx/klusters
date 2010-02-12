/****************************************************************************
** ClusterPalette meta object code from reading C++ file 'clusterPalette.h'
**
** Created: Sat Sep 15 16:42:32 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "clusterPalette.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ClusterPalette::className() const
{
    return "ClusterPalette";
}

QMetaObject *ClusterPalette::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ClusterPalette( "ClusterPalette", &ClusterPalette::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ClusterPalette::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClusterPalette", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ClusterPalette::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClusterPalette", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ClusterPalette::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QVBox::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"changeColor", 1, param_slot_0 };
    static const QUMethod slot_1 = {"moveClustersToNoise", 0, 0 };
    static const QUMethod slot_2 = {"moveClustersToArtefact", 0, 0 };
    static const QUMethod slot_3 = {"groupClusters", 0, 0 };
    static const QUMethod slot_4 = {"updateClusters", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_5 = {"slotRightPressed", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_6 = {"slotMousePressed", 2, param_slot_6 };
    static const QUMethod slot_7 = {"slotClickRedraw", 0, 0 };
    static const QUMethod slot_8 = {"languageChange", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_9 = {"slotOnItem", 1, param_slot_9 };
    static const QMetaData slot_tbl[] = {
	{ "changeColor(QIconViewItem*)", &slot_0, QMetaData::Public },
	{ "moveClustersToNoise()", &slot_1, QMetaData::Public },
	{ "moveClustersToArtefact()", &slot_2, QMetaData::Public },
	{ "groupClusters()", &slot_3, QMetaData::Public },
	{ "updateClusters()", &slot_4, QMetaData::Public },
	{ "slotRightPressed(QIconViewItem*)", &slot_5, QMetaData::Protected },
	{ "slotMousePressed(int,QIconViewItem*)", &slot_6, QMetaData::Protected },
	{ "slotClickRedraw()", &slot_7, QMetaData::Protected },
	{ "languageChange()", &slot_8, QMetaData::Protected },
	{ "slotOnItem(QIconViewItem*)", &slot_9, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ "selectedCluster", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"singleChangeColor", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "selectedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod signal_1 = {"updateShownClusters", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "selectedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod signal_2 = {"groupClusters", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "selectedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod signal_3 = {"moveClustersToNoise", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "selectedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod signal_4 = {"moveClustersToArtefact", 1, param_signal_4 };
    static const QUMethod signal_5 = {"clusterInformationModified", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "singleChangeColor(int)", &signal_0, QMetaData::Protected },
	{ "updateShownClusters(QValueList<int>)", &signal_1, QMetaData::Protected },
	{ "groupClusters(QValueList<int>)", &signal_2, QMetaData::Protected },
	{ "moveClustersToNoise(QValueList<int>)", &signal_3, QMetaData::Protected },
	{ "moveClustersToArtefact(QValueList<int>)", &signal_4, QMetaData::Protected },
	{ "clusterInformationModified()", &signal_5, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ClusterPalette", parentObject,
	slot_tbl, 10,
	signal_tbl, 6,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ClusterPalette.setMetaObject( metaObj );
    return metaObj;
}

void* ClusterPalette::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ClusterPalette" ) )
	return this;
    return QVBox::qt_cast( clname );
}

// SIGNAL singleChangeColor
void ClusterPalette::singleChangeColor( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL updateShownClusters
void ClusterPalette::updateShownClusters( QValueList<int> t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL groupClusters
void ClusterPalette::groupClusters( QValueList<int> t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL moveClustersToNoise
void ClusterPalette::moveClustersToNoise( QValueList<int> t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL moveClustersToArtefact
void ClusterPalette::moveClustersToArtefact( QValueList<int> t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL clusterInformationModified
void ClusterPalette::clusterInformationModified()
{
    activate_signal( staticMetaObject()->signalOffset() + 5 );
}

bool ClusterPalette::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: changeColor((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 1: moveClustersToNoise(); break;
    case 2: moveClustersToArtefact(); break;
    case 3: groupClusters(); break;
    case 4: updateClusters(); break;
    case 5: slotRightPressed((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: slotMousePressed((int)static_QUType_int.get(_o+1),(QIconViewItem*)static_QUType_ptr.get(_o+2)); break;
    case 7: slotClickRedraw(); break;
    case 8: languageChange(); break;
    case 9: slotOnItem((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QVBox::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ClusterPalette::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: singleChangeColor((int)static_QUType_int.get(_o+1)); break;
    case 1: updateShownClusters((QValueList<int>)(*((QValueList<int>*)static_QUType_ptr.get(_o+1)))); break;
    case 2: groupClusters((QValueList<int>)(*((QValueList<int>*)static_QUType_ptr.get(_o+1)))); break;
    case 3: moveClustersToNoise((QValueList<int>)(*((QValueList<int>*)static_QUType_ptr.get(_o+1)))); break;
    case 4: moveClustersToArtefact((QValueList<int>)(*((QValueList<int>*)static_QUType_ptr.get(_o+1)))); break;
    case 5: clusterInformationModified(); break;
    default:
	return QVBox::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ClusterPalette::qt_property( int id, int f, QVariant* v)
{
    return QVBox::qt_property( id, f, v);
}

bool ClusterPalette::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
