/****************************************************************************
** ClustersProvider meta object code from reading C++ file 'clustersprovider.h'
**
** Created: Sat Sep 1 20:02:06 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "clustersprovider.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ClustersProvider::className() const
{
    return "ClustersProvider";
}

QMetaObject *ClustersProvider::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ClustersProvider( "ClustersProvider", &ClustersProvider::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ClustersProvider::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClustersProvider", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ClustersProvider::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClustersProvider", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ClustersProvider::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = DataProvider::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ "data", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"dataReady", 3, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "data", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "startingTime", &static_QUType_ptr, "long", QUParameter::In },
	{ "startingTimeInRecordingUnits", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod signal_1 = {"nextClusterDataReady", 5, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "data", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "startingTime", &static_QUType_ptr, "long", QUParameter::In },
	{ "startingTimeInRecordingUnits", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod signal_2 = {"previousClusterDataReady", 5, param_signal_2 };
    static const QMetaData signal_tbl[] = {
	{ "dataReady(Array<dataType>&,QObject*,QString)", &signal_0, QMetaData::Public },
	{ "nextClusterDataReady(Array<dataType>&,QObject*,QString,long,long)", &signal_1, QMetaData::Public },
	{ "previousClusterDataReady(Array<dataType>&,QObject*,QString,long,long)", &signal_2, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ClustersProvider", parentObject,
	0, 0,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ClustersProvider.setMetaObject( metaObj );
    return metaObj;
}

void* ClustersProvider::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ClustersProvider" ) )
	return this;
    return DataProvider::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL dataReady
void ClustersProvider::dataReady( Array<dataType>& t0, QObject* t1, QString t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL nextClusterDataReady
void ClustersProvider::nextClusterDataReady( Array<dataType>& t0, QObject* t1, QString t2, long t3, long t4 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[6];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    static_QUType_ptr.set(o+4,&t3);
    static_QUType_ptr.set(o+5,&t4);
    activate_signal( clist, o );
}

// SIGNAL previousClusterDataReady
void ClustersProvider::previousClusterDataReady( Array<dataType>& t0, QObject* t1, QString t2, long t3, long t4 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[6];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    static_QUType_ptr.set(o+4,&t3);
    static_QUType_ptr.set(o+5,&t4);
    activate_signal( clist, o );
}

bool ClustersProvider::qt_invoke( int _id, QUObject* _o )
{
    return DataProvider::qt_invoke(_id,_o);
}

bool ClustersProvider::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: dataReady((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(QObject*)static_QUType_ptr.get(_o+2),(QString)static_QUType_QString.get(_o+3)); break;
    case 1: nextClusterDataReady((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(QObject*)static_QUType_ptr.get(_o+2),(QString)static_QUType_QString.get(_o+3),(long)(*((long*)static_QUType_ptr.get(_o+4))),(long)(*((long*)static_QUType_ptr.get(_o+5)))); break;
    case 2: previousClusterDataReady((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(QObject*)static_QUType_ptr.get(_o+2),(QString)static_QUType_QString.get(_o+3),(long)(*((long*)static_QUType_ptr.get(_o+4))),(long)(*((long*)static_QUType_ptr.get(_o+5)))); break;
    default:
	return DataProvider::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ClustersProvider::qt_property( int id, int f, QVariant* v)
{
    return DataProvider::qt_property( id, f, v);
}

bool ClustersProvider::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
