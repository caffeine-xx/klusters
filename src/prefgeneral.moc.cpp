/****************************************************************************
** PrefGeneral meta object code from reading C++ file 'prefgeneral.h'
**
** Created: Sat Sep 1 20:02:14 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "prefgeneral.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PrefGeneral::className() const
{
    return "PrefGeneral";
}

QMetaObject *PrefGeneral::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PrefGeneral( "PrefGeneral", &PrefGeneral::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PrefGeneral::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PrefGeneral", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PrefGeneral::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PrefGeneral", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PrefGeneral::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = PrefGeneralLayout::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "state", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"updateCrashRecoveryTimeInterval", 1, param_slot_0 };
    static const QUMethod slot_1 = {"updateReclusteringExecutable", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "updateCrashRecoveryTimeInterval(int)", &slot_0, QMetaData::Private },
	{ "updateReclusteringExecutable()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PrefGeneral", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PrefGeneral.setMetaObject( metaObj );
    return metaObj;
}

void* PrefGeneral::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PrefGeneral" ) )
	return this;
    return PrefGeneralLayout::qt_cast( clname );
}

bool PrefGeneral::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateCrashRecoveryTimeInterval((int)static_QUType_int.get(_o+1)); break;
    case 1: updateReclusteringExecutable(); break;
    default:
	return PrefGeneralLayout::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PrefGeneral::qt_emit( int _id, QUObject* _o )
{
    return PrefGeneralLayout::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PrefGeneral::qt_property( int id, int f, QVariant* v)
{
    return PrefGeneralLayout::qt_property( id, f, v);
}

bool PrefGeneral::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
