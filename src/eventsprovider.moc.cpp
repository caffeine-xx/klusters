/****************************************************************************
** EventsProvider meta object code from reading C++ file 'eventsprovider.h'
**
** Created: Sat Sep 1 20:01:52 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "eventsprovider.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *EventsProvider::className() const
{
    return "EventsProvider";
}

QMetaObject *EventsProvider::metaObj = 0;
static QMetaObjectCleanUp cleanUp_EventsProvider( "EventsProvider", &EventsProvider::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString EventsProvider::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EventsProvider", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString EventsProvider::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EventsProvider", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* EventsProvider::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = DataProvider::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ "times", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "ids", &static_QUType_ptr, "Array<int>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"dataReady", 4, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "times", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "ids", &static_QUType_ptr, "Array<int>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "startingTime", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod signal_1 = {"nextEventDataReady", 5, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "times", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "ids", &static_QUType_ptr, "Array<int>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "startingTime", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod signal_2 = {"previousEventDataReady", 5, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "oldNewEventIds", &static_QUType_ptr, "QMap<int,int>", QUParameter::In },
	{ "newOldEventIds", &static_QUType_ptr, "QMap<int,int>", QUParameter::In },
	{ "eventDescriptionAdded", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"newEventDescriptionCreated", 4, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "oldNewEventIds", &static_QUType_ptr, "QMap<int,int>", QUParameter::In },
	{ "newOldEventIds", &static_QUType_ptr, "QMap<int,int>", QUParameter::In },
	{ "eventIdToRemove", &static_QUType_int, 0, QUParameter::In },
	{ "eventDescriptionToRemove", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"eventDescriptionRemoved", 5, param_signal_4 };
    static const QMetaData signal_tbl[] = {
	{ "dataReady(Array<dataType>&,Array<int>&,QObject*,QString)", &signal_0, QMetaData::Public },
	{ "nextEventDataReady(Array<dataType>&,Array<int>&,QObject*,QString,long)", &signal_1, QMetaData::Public },
	{ "previousEventDataReady(Array<dataType>&,Array<int>&,QObject*,QString,long)", &signal_2, QMetaData::Public },
	{ "newEventDescriptionCreated(QString,QMap<int,int>,QMap<int,int>,QString)", &signal_3, QMetaData::Public },
	{ "eventDescriptionRemoved(QString,QMap<int,int>,QMap<int,int>,int,QString)", &signal_4, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"EventsProvider", parentObject,
	0, 0,
	signal_tbl, 5,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_EventsProvider.setMetaObject( metaObj );
    return metaObj;
}

void* EventsProvider::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "EventsProvider" ) )
	return this;
    return DataProvider::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL dataReady
void EventsProvider::dataReady( Array<dataType>& t0, Array<int>& t1, QObject* t2, QString t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,&t1);
    static_QUType_ptr.set(o+3,t2);
    static_QUType_QString.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL nextEventDataReady
void EventsProvider::nextEventDataReady( Array<dataType>& t0, Array<int>& t1, QObject* t2, QString t3, long t4 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[6];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,&t1);
    static_QUType_ptr.set(o+3,t2);
    static_QUType_QString.set(o+4,t3);
    static_QUType_ptr.set(o+5,&t4);
    activate_signal( clist, o );
}

// SIGNAL previousEventDataReady
void EventsProvider::previousEventDataReady( Array<dataType>& t0, Array<int>& t1, QObject* t2, QString t3, long t4 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[6];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,&t1);
    static_QUType_ptr.set(o+3,t2);
    static_QUType_QString.set(o+4,t3);
    static_QUType_ptr.set(o+5,&t4);
    activate_signal( clist, o );
}

// SIGNAL newEventDescriptionCreated
void EventsProvider::newEventDescriptionCreated( QString t0, QMap<int,int> t1, QMap<int,int> t2, QString t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_QString.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    static_QUType_ptr.set(o+3,&t2);
    static_QUType_QString.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL eventDescriptionRemoved
void EventsProvider::eventDescriptionRemoved( QString t0, QMap<int,int> t1, QMap<int,int> t2, int t3, QString t4 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[6];
    static_QUType_QString.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    static_QUType_ptr.set(o+3,&t2);
    static_QUType_int.set(o+4,t3);
    static_QUType_QString.set(o+5,t4);
    activate_signal( clist, o );
}

bool EventsProvider::qt_invoke( int _id, QUObject* _o )
{
    return DataProvider::qt_invoke(_id,_o);
}

bool EventsProvider::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: dataReady((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(Array<int>&)*((Array<int>*)static_QUType_ptr.get(_o+2)),(QObject*)static_QUType_ptr.get(_o+3),(QString)static_QUType_QString.get(_o+4)); break;
    case 1: nextEventDataReady((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(Array<int>&)*((Array<int>*)static_QUType_ptr.get(_o+2)),(QObject*)static_QUType_ptr.get(_o+3),(QString)static_QUType_QString.get(_o+4),(long)(*((long*)static_QUType_ptr.get(_o+5)))); break;
    case 2: previousEventDataReady((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(Array<int>&)*((Array<int>*)static_QUType_ptr.get(_o+2)),(QObject*)static_QUType_ptr.get(_o+3),(QString)static_QUType_QString.get(_o+4),(long)(*((long*)static_QUType_ptr.get(_o+5)))); break;
    case 3: newEventDescriptionCreated((QString)static_QUType_QString.get(_o+1),(QMap<int,int>)(*((QMap<int,int>*)static_QUType_ptr.get(_o+2))),(QMap<int,int>)(*((QMap<int,int>*)static_QUType_ptr.get(_o+3))),(QString)static_QUType_QString.get(_o+4)); break;
    case 4: eventDescriptionRemoved((QString)static_QUType_QString.get(_o+1),(QMap<int,int>)(*((QMap<int,int>*)static_QUType_ptr.get(_o+2))),(QMap<int,int>)(*((QMap<int,int>*)static_QUType_ptr.get(_o+3))),(int)static_QUType_int.get(_o+4),(QString)static_QUType_QString.get(_o+5)); break;
    default:
	return DataProvider::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool EventsProvider::qt_property( int id, int f, QVariant* v)
{
    return DataProvider::qt_property( id, f, v);
}

bool EventsProvider::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
