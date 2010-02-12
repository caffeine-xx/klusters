/****************************************************************************
** TracesProvider meta object code from reading C++ file 'tracesprovider.h'
**
** Created: Sat Sep 1 20:01:57 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "tracesprovider.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TracesProvider::className() const
{
    return "TracesProvider";
}

QMetaObject *TracesProvider::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TracesProvider( "TracesProvider", &TracesProvider::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TracesProvider::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TracesProvider", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TracesProvider::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TracesProvider", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TracesProvider::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = DataProvider::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ "data", &static_QUType_ptr, "Array<dataType>", QUParameter::InOut },
	{ "initiator", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod signal_0 = {"dataReady", 2, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "dataReady(Array<dataType>&,QObject*)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"TracesProvider", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TracesProvider.setMetaObject( metaObj );
    return metaObj;
}

void* TracesProvider::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TracesProvider" ) )
	return this;
    return DataProvider::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL dataReady
void TracesProvider::dataReady( Array<dataType>& t0, QObject* t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,t1);
    activate_signal( clist, o );
}

bool TracesProvider::qt_invoke( int _id, QUObject* _o )
{
    return DataProvider::qt_invoke(_id,_o);
}

bool TracesProvider::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: dataReady((Array<dataType>&)*((Array<dataType>*)static_QUType_ptr.get(_o+1)),(QObject*)static_QUType_ptr.get(_o+2)); break;
    default:
	return DataProvider::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool TracesProvider::qt_property( int id, int f, QVariant* v)
{
    return DataProvider::qt_property( id, f, v);
}

bool TracesProvider::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
