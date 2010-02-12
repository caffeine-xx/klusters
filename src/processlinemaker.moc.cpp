/****************************************************************************
** ProcessLineMaker meta object code from reading C++ file 'processlinemaker.h'
**
** Created: Sat Sep 1 20:01:58 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "processlinemaker.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ProcessLineMaker::className() const
{
    return "ProcessLineMaker";
}

QMetaObject *ProcessLineMaker::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ProcessLineMaker( "ProcessLineMaker", &ProcessLineMaker::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ProcessLineMaker::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProcessLineMaker", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ProcessLineMaker::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProcessLineMaker", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ProcessLineMaker::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"slotReceivedStdout", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"slotReceivedStderr", 1, param_slot_1 };
    static const QUMethod slot_2 = {"slotWidgetHidden", 0, 0 };
    static const QUMethod slot_3 = {"slotProcessExited", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "process", &static_QUType_ptr, "KProcess", QUParameter::In },
	{ "buffer", &static_QUType_charstar, 0, QUParameter::In },
	{ "buflen", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"slotReceivedStdout", 3, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "process", &static_QUType_ptr, "KProcess", QUParameter::In },
	{ "buffer", &static_QUType_charstar, 0, QUParameter::In },
	{ "buflen", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"slotReceivedStderr", 3, param_slot_5 };
    static const QMetaData slot_tbl[] = {
	{ "slotReceivedStdout(const QString&)", &slot_0, QMetaData::Public },
	{ "slotReceivedStderr(const QString&)", &slot_1, QMetaData::Public },
	{ "slotWidgetHidden()", &slot_2, QMetaData::Public },
	{ "slotProcessExited()", &slot_3, QMetaData::Public },
	{ "slotReceivedStdout(KProcess*,char*,int)", &slot_4, QMetaData::Protected },
	{ "slotReceivedStderr(KProcess*,char*,int)", &slot_5, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ "line", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"receivedStdoutLine", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "line", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"receivedStderrLine", 1, param_signal_1 };
    static const QUMethod signal_2 = {"outputTreatmentOver", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "receivedStdoutLine(const QString&)", &signal_0, QMetaData::Protected },
	{ "receivedStderrLine(const QString&)", &signal_1, QMetaData::Protected },
	{ "outputTreatmentOver()", &signal_2, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ProcessLineMaker", parentObject,
	slot_tbl, 6,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ProcessLineMaker.setMetaObject( metaObj );
    return metaObj;
}

void* ProcessLineMaker::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ProcessLineMaker" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL receivedStdoutLine
void ProcessLineMaker::receivedStdoutLine( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL receivedStderrLine
void ProcessLineMaker::receivedStderrLine( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL outputTreatmentOver
void ProcessLineMaker::outputTreatmentOver()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

bool ProcessLineMaker::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotReceivedStdout((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: slotReceivedStderr((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: slotWidgetHidden(); break;
    case 3: slotProcessExited(); break;
    case 4: slotReceivedStdout((KProcess*)static_QUType_ptr.get(_o+1),(char*)static_QUType_charstar.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 5: slotReceivedStderr((KProcess*)static_QUType_ptr.get(_o+1),(char*)static_QUType_charstar.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ProcessLineMaker::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: receivedStdoutLine((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: receivedStderrLine((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: outputTreatmentOver(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ProcessLineMaker::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool ProcessLineMaker::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
