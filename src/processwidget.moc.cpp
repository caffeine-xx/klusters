/****************************************************************************
** ProcessWidget meta object code from reading C++ file 'processwidget.h'
**
** Created: Sat Sep 1 20:02:15 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "processwidget.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ProcessWidget::className() const
{
    return "ProcessWidget";
}

QMetaObject *ProcessWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ProcessWidget( "ProcessWidget", &ProcessWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ProcessWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProcessWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ProcessWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProcessWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ProcessWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = KListBox::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out },
	{ "dir", &static_QUType_QString, 0, QUParameter::In },
	{ "command", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"startJob", 3, param_slot_0 };
    static const QUMethod slot_1 = {"killJob", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "line", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"insertStdoutLine", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "line", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"insertStderrLine", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_ptr, "KProcess", QUParameter::In }
    };
    static const QUMethod slot_4 = {"slotProcessExited", 1, param_slot_4 };
    static const QUMethod slot_5 = {"slotOutputTreatmentOver", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "startJob(const QString&,const QString&)", &slot_0, QMetaData::Public },
	{ "killJob()", &slot_1, QMetaData::Public },
	{ "insertStdoutLine(const QString&)", &slot_2, QMetaData::Public },
	{ "insertStderrLine(const QString&)", &slot_3, QMetaData::Public },
	{ "slotProcessExited(KProcess*)", &slot_4, QMetaData::Protected },
	{ "slotOutputTreatmentOver()", &slot_5, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "KProcess", QUParameter::In }
    };
    static const QUMethod signal_0 = {"processExited", 1, param_signal_0 };
    static const QUMethod signal_1 = {"processOutputsFinished", 0, 0 };
    static const QUMethod signal_2 = {"hidden", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "processExited(KProcess*)", &signal_0, QMetaData::Protected },
	{ "processOutputsFinished()", &signal_1, QMetaData::Protected },
	{ "hidden()", &signal_2, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ProcessWidget", parentObject,
	slot_tbl, 6,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ProcessWidget.setMetaObject( metaObj );
    return metaObj;
}

void* ProcessWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ProcessWidget" ) )
	return this;
    return KListBox::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL processExited
void ProcessWidget::processExited( KProcess* t0 )
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

// SIGNAL processOutputsFinished
void ProcessWidget::processOutputsFinished()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL hidden
void ProcessWidget::hidden()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

bool ProcessWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: static_QUType_bool.set(_o,startJob((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2))); break;
    case 1: killJob(); break;
    case 2: insertStdoutLine((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: insertStderrLine((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: slotProcessExited((KProcess*)static_QUType_ptr.get(_o+1)); break;
    case 5: slotOutputTreatmentOver(); break;
    default:
	return KListBox::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ProcessWidget::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: processExited((KProcess*)static_QUType_ptr.get(_o+1)); break;
    case 1: processOutputsFinished(); break;
    case 2: hidden(); break;
    default:
	return KListBox::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ProcessWidget::qt_property( int id, int f, QVariant* v)
{
    return KListBox::qt_property( id, f, v);
}

bool ProcessWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
