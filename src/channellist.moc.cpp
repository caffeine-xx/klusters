/****************************************************************************
** ChannelList meta object code from reading C++ file 'channellist.h'
**
** Created: Sat Sep 1 20:01:56 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "channellist.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ChannelList::className() const
{
    return "ChannelList";
}

QMetaObject *ChannelList::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ChannelList( "ChannelList", &ChannelList::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ChannelList::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ChannelList", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ChannelList::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ChannelList", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ChannelList::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListBox::staticMetaObject();
    static const QUMethod signal_0 = {"positionsChanged", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "positionsChanged()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ChannelList", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ChannelList.setMetaObject( metaObj );
    return metaObj;
}

void* ChannelList::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ChannelList" ) )
	return this;
    return QListBox::qt_cast( clname );
}

// SIGNAL positionsChanged
void ChannelList::positionsChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool ChannelList::qt_invoke( int _id, QUObject* _o )
{
    return QListBox::qt_invoke(_id,_o);
}

bool ChannelList::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: positionsChanged(); break;
    default:
	return QListBox::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ChannelList::qt_property( int id, int f, QVariant* v)
{
    return QListBox::qt_property( id, f, v);
}

bool ChannelList::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
