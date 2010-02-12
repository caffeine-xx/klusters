/****************************************************************************
** PrefWaveformView meta object code from reading C++ file 'prefwaveformview.h'
**
** Created: Sat Sep 1 20:02:07 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "prefwaveformview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PrefWaveformView::className() const
{
    return "PrefWaveformView";
}

QMetaObject *PrefWaveformView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PrefWaveformView( "PrefWaveformView", &PrefWaveformView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PrefWaveformView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PrefWaveformView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PrefWaveformView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PrefWaveformView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PrefWaveformView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = PrefWaveformViewLayout::staticMetaObject();
    static const QUMethod slot_0 = {"saveChannelOrder", 0, 0 };
    static const QUMethod slot_1 = {"loadChannelOrder", 0, 0 };
    static const QUMethod slot_2 = {"updateChannelPositions", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "saveChannelOrder()", &slot_0, QMetaData::Private },
	{ "loadChannelOrder()", &slot_1, QMetaData::Private },
	{ "updateChannelPositions()", &slot_2, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"positionsChanged", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "positionsChanged()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"PrefWaveformView", parentObject,
	slot_tbl, 3,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PrefWaveformView.setMetaObject( metaObj );
    return metaObj;
}

void* PrefWaveformView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PrefWaveformView" ) )
	return this;
    return PrefWaveformViewLayout::qt_cast( clname );
}

// SIGNAL positionsChanged
void PrefWaveformView::positionsChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool PrefWaveformView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: saveChannelOrder(); break;
    case 1: loadChannelOrder(); break;
    case 2: updateChannelPositions(); break;
    default:
	return PrefWaveformViewLayout::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PrefWaveformView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: positionsChanged(); break;
    default:
	return PrefWaveformViewLayout::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool PrefWaveformView::qt_property( int id, int f, QVariant* v)
{
    return PrefWaveformViewLayout::qt_property( id, f, v);
}

bool PrefWaveformView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
