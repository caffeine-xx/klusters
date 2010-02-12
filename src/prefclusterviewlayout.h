/****************************************************************************
** Form interface generated from reading ui file './prefclusterviewlayout.ui'
**
** Created: sam sep 1 20:00:24 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.7   edited Aug 31 2005 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef PREFCLUSTERVIEWLAYOUT_H
#define PREFCLUSTERVIEWLAYOUT_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QGroupBox;
class QLabel;
class QSpinBox;

class PrefClusterViewLayout : public QWidget
{
    Q_OBJECT

public:
    PrefClusterViewLayout( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~PrefClusterViewLayout();

    QGroupBox* groupBox3;
    QLabel* textLabel6;
    QSpinBox* intervalSpinBox;

protected:
    QGridLayout* PrefClusterViewLayoutLayout;
    QSpacerItem* spacer21;
    QGridLayout* layout57;
    QSpacerItem* spacer18;
    QHBoxLayout* layout55;
    QSpacerItem* spacer19;

protected slots:
    virtual void languageChange();

};

#endif // PREFCLUSTERVIEWLAYOUT_H
