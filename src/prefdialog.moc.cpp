/****************************************************************************
** PrefDialog meta object code from reading C++ file 'prefdialog.h'
**
** Created: Sat Sep 1 20:02:11 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "prefdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PrefDialog::className() const
{
    return "PrefDialog";
}

QMetaObject *PrefDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PrefDialog( "PrefDialog", &PrefDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PrefDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PrefDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PrefDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PrefDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PrefDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = KDialogBase::staticMetaObject();
    static const QUMethod slot_0 = {"slotDefault", 0, 0 };
    static const QUMethod slot_1 = {"slotApply", 0, 0 };
    static const QUMethod slot_2 = {"enableApply", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "slotDefault()", &slot_0, QMetaData::Public },
	{ "slotApply()", &slot_1, QMetaData::Public },
	{ "enableApply()", &slot_2, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"settingsChanged", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "settingsChanged()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"PrefDialog", parentObject,
	slot_tbl, 3,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PrefDialog.setMetaObject( metaObj );
    return metaObj;
}

void* PrefDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PrefDialog" ) )
	return this;
    return KDialogBase::qt_cast( clname );
}

// SIGNAL settingsChanged
void PrefDialog::settingsChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool PrefDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotDefault(); break;
    case 1: slotApply(); break;
    case 2: enableApply(); break;
    default:
	return KDialogBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PrefDialog::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: settingsChanged(); break;
    default:
	return KDialogBase::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool PrefDialog::qt_property( int id, int f, QVariant* v)
{
    return KDialogBase::qt_property( id, f, v);
}

bool PrefDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
