/****************************************************************************
** PrefClusterView meta object code from reading C++ file 'prefclusterview.h'
**
** Created: Sat Sep 1 20:02:10 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "prefclusterview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PrefClusterView::className() const
{
    return "PrefClusterView";
}

QMetaObject *PrefClusterView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PrefClusterView( "PrefClusterView", &PrefClusterView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PrefClusterView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PrefClusterView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PrefClusterView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PrefClusterView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PrefClusterView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = PrefClusterViewLayout::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"PrefClusterView", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PrefClusterView.setMetaObject( metaObj );
    return metaObj;
}

void* PrefClusterView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PrefClusterView" ) )
	return this;
    return PrefClusterViewLayout::qt_cast( clname );
}

bool PrefClusterView::qt_invoke( int _id, QUObject* _o )
{
    return PrefClusterViewLayout::qt_invoke(_id,_o);
}

bool PrefClusterView::qt_emit( int _id, QUObject* _o )
{
    return PrefClusterViewLayout::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PrefClusterView::qt_property( int id, int f, QVariant* v)
{
    return PrefClusterViewLayout::qt_property( id, f, v);
}

bool PrefClusterView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
