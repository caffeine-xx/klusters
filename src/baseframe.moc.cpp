/****************************************************************************
** BaseFrame meta object code from reading C++ file 'baseframe.h'
**
** Created: Sat Sep 1 20:02:08 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "baseframe.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *BaseFrame::className() const
{
    return "BaseFrame";
}

QMetaObject *BaseFrame::metaObj = 0;
static QMetaObjectCleanUp cleanUp_BaseFrame( "BaseFrame", &BaseFrame::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString BaseFrame::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "BaseFrame", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString BaseFrame::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "BaseFrame", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* BaseFrame::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUMethod slot_0 = {"updateDrawing", 0, 0 };
    static const QUMethod slot_1 = {"dockBeingClosed", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "color", &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod slot_2 = {"changeBackgroundColor", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "selectedMode", &static_QUType_ptr, "BaseFrame::Mode", QUParameter::In }
    };
    static const QUMethod slot_3 = {"setMode", 1, param_slot_3 };
    static const QMetaData slot_tbl[] = {
	{ "updateDrawing()", &slot_0, QMetaData::Public },
	{ "dockBeingClosed()", &slot_1, QMetaData::Public },
	{ "changeBackgroundColor(QColor)", &slot_2, QMetaData::Public },
	{ "setMode(BaseFrame::Mode)", &slot_3, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "viewWidget", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod signal_0 = {"parentDockBeingClosed", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "parentDockBeingClosed(QWidget*)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"BaseFrame", parentObject,
	slot_tbl, 4,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_BaseFrame.setMetaObject( metaObj );
    return metaObj;
}

void* BaseFrame::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "BaseFrame" ) )
	return this;
    return QFrame::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL parentDockBeingClosed
void BaseFrame::parentDockBeingClosed( QWidget* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool BaseFrame::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateDrawing(); break;
    case 1: dockBeingClosed(); break;
    case 2: changeBackgroundColor((QColor)(*((QColor*)static_QUType_ptr.get(_o+1)))); break;
    case 3: setMode((BaseFrame::Mode)(*((BaseFrame::Mode*)static_QUType_ptr.get(_o+1)))); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool BaseFrame::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: parentDockBeingClosed((QWidget*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool BaseFrame::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool BaseFrame::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
