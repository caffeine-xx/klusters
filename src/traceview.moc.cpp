/****************************************************************************
** TraceView meta object code from reading C++ file 'traceview.h'
**
** Created: Sat Sep 1 20:01:50 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "traceview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TraceView::className() const
{
    return "TraceView";
}

QMetaObject *TraceView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TraceView( "TraceView", &TraceView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TraceView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TraceView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TraceView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TraceView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TraceView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = BaseFrame::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "data", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_0 = {"dataAvailable", 2, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "data", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"dataAvailable", 3, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "times", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "ids", &static_QUType_ptr, "Array<int>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"dataAvailable", 4, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "data", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "startingTime", &static_QUType_ptr, "long", QUParameter::In },
	{ "startingTimeInRecordingUnits", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod slot_3 = {"nextClusterDataAvailable", 5, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "data", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "startingTime", &static_QUType_ptr, "long", QUParameter::In },
	{ "startingTimeInRecordingUnits", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod slot_4 = {"previousClusterDataAvailable", 5, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "times", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "ids", &static_QUType_ptr, "Array<int>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "startingTime", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod slot_5 = {"nextEventDataAvailable", 5, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "times", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "ids", &static_QUType_ptr, "Array<int>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "startingTime", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod slot_6 = {"previousEventDataAvailable", 5, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "eventDescription", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"eventToAddProperties", 2, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "skippedChannels", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_8 = {"skipStatusChanged", 1, param_slot_8 };
    static const QMetaData slot_tbl[] = {
	{ "dataAvailable(Array<dataType>&,QObject*)", &slot_0, QMetaData::Public },
	{ "dataAvailable(Array<dataType>&,QObject*,QString)", &slot_1, QMetaData::Public },
	{ "dataAvailable(Array<dataType>&,Array<int>&,QObject*,QString)", &slot_2, QMetaData::Public },
	{ "nextClusterDataAvailable(Array<dataType>&,QObject*,QString,long,long)", &slot_3, QMetaData::Public },
	{ "previousClusterDataAvailable(Array<dataType>&,QObject*,QString,long,long)", &slot_4, QMetaData::Public },
	{ "nextEventDataAvailable(Array<dataType>&,Array<int>&,QObject*,QString,long)", &slot_5, QMetaData::Public },
	{ "previousEventDataAvailable(Array<dataType>&,Array<int>&,QObject*,QString,long)", &slot_6, QMetaData::Public },
	{ "eventToAddProperties(QString,QString)", &slot_7, QMetaData::Public },
	{ "skipStatusChanged(const QValueList<int>&)", &slot_8, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "selectedIds", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod signal_0 = {"channelsSelected", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "time", &static_QUType_ptr, "long", QUParameter::In },
	{ "duration", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod signal_1 = {"setStartAndDuration", 2, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "selectedEventId", &static_QUType_int, 0, QUParameter::In },
	{ "time", &static_QUType_double, 0, QUParameter::In },
	{ "newTime", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"eventModified", 4, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "selectedEventId", &static_QUType_int, 0, QUParameter::In },
	{ "time", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"eventRemoved", 3, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "addedEventDescription", &static_QUType_QString, 0, QUParameter::In },
	{ "time", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"eventAdded", 3, param_signal_4 };
    static const QMetaData signal_tbl[] = {
	{ "channelsSelected(const QValueList<int>&)", &signal_0, QMetaData::Public },
	{ "setStartAndDuration(long,long)", &signal_1, QMetaData::Public },
	{ "eventModified(QString,int,double,double)", &signal_2, QMetaData::Public },
	{ "eventRemoved(QString,int,double)", &signal_3, QMetaData::Public },
	{ "eventAdded(QString,QString,double)", &signal_4, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"TraceView", parentObject,
	slot_tbl, 9,
	signal_tbl, 5,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TraceView.setMetaObject( metaObj );
    return metaObj;
}

void* TraceView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TraceView" ) )
	return this;
    return BaseFrame::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL channelsSelected
void TraceView::channelsSelected( const QValueList<int>& t0 )
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

// SIGNAL setStartAndDuration
void TraceView::setStartAndDuration( long t0, long t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL eventModified
void TraceView::eventModified( QString t0, int t1, double t2, double t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_double.set(o+3,t2);
    static_QUType_double.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL eventRemoved
void TraceView::eventRemoved( QString t0, int t1, double t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_double.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL eventAdded
void TraceView::eventAdded( QString t0, QString t1, double t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_double.set(o+3,t2);
    activate_signal( clist, o );
}

bool TraceView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: dataAvailable((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(QObject*)static_QUType_ptr.get(_o+2)); break;
    case 1: dataAvailable((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(QObject*)static_QUType_ptr.get(_o+2),(QString)static_QUType_QString.get(_o+3)); break;
    case 2: dataAvailable((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(Array<int>&)*((Array<int>*)static_QUType_ptr.get(_o+2)),(QObject*)static_QUType_ptr.get(_o+3),(QString)static_QUType_QString.get(_o+4)); break;
    case 3: nextClusterDataAvailable((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(QObject*)static_QUType_ptr.get(_o+2),(QString)static_QUType_QString.get(_o+3),(long)(*((long*)static_QUType_ptr.get(_o+4))),(long)(*((long*)static_QUType_ptr.get(_o+5)))); break;
    case 4: previousClusterDataAvailable((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(QObject*)static_QUType_ptr.get(_o+2),(QString)static_QUType_QString.get(_o+3),(long)(*((long*)static_QUType_ptr.get(_o+4))),(long)(*((long*)static_QUType_ptr.get(_o+5)))); break;
    case 5: nextEventDataAvailable((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(Array<int>&)*((Array<int>*)static_QUType_ptr.get(_o+2)),(QObject*)static_QUType_ptr.get(_o+3),(QString)static_QUType_QString.get(_o+4),(long)(*((long*)static_QUType_ptr.get(_o+5)))); break;
    case 6: previousEventDataAvailable((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(Array<int>&)*((Array<int>*)static_QUType_ptr.get(_o+2)),(QObject*)static_QUType_ptr.get(_o+3),(QString)static_QUType_QString.get(_o+4),(long)(*((long*)static_QUType_ptr.get(_o+5)))); break;
    case 7: eventToAddProperties((QString)static_QUType_QString.get(_o+1),(QString)static_QUType_QString.get(_o+2)); break;
    case 8: skipStatusChanged((const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    default:
	return BaseFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TraceView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: channelsSelected((const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 1: setStartAndDuration((long)(*((long*)static_QUType_ptr.get(_o+1))),(long)(*((long*)static_QUType_ptr.get(_o+2)))); break;
    case 2: eventModified((QString)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(double)static_QUType_double.get(_o+3),(double)static_QUType_double.get(_o+4)); break;
    case 3: eventRemoved((QString)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(double)static_QUType_double.get(_o+3)); break;
    case 4: eventAdded((QString)static_QUType_QString.get(_o+1),(QString)static_QUType_QString.get(_o+2),(double)static_QUType_double.get(_o+3)); break;
    default:
	return BaseFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool TraceView::qt_property( int id, int f, QVariant* v)
{
    return BaseFrame::qt_property( id, f, v);
}

bool TraceView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
