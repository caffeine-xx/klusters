/***************************************************************************
 *   Copyright (C) 2007 by Lynn Hazan   *
 *   lynn.hazan@myrealbox.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef CLUSTERPALETTEICONVIEWITEM_H
#define CLUSTERPALETTEICONVIEWITEM_H

// include files for QT
#include <qiconview.h>

class QPixmap;

//include files for the application
#include "clusterpalettetooltip.h"

/**
	@author Lynn Hazan <lynn.hazan@myrealbox.com>
	This class represents the items in the clusterpalette. It overwrites thr default
	QIconViewItem to enable the use of a custom toolTip class (#ClusterPaletteToolTip).
*/
class ClusterPaletteIconViewItem : public QIconViewItem
{
	public:
		ClusterPaletteIconViewItem(QIconView*, QString);
		ClusterPaletteIconViewItem(QIconView* parent, QString text, const QPixmap & icon );

		~ClusterPaletteIconViewItem();

		void  setToolTipText(const QString);
		inline const QString   getToolTipText(void) const { return(toolTipText); }

	private:
		QString               toolTipText;
		ClusterPaletteToolTip*    toolTip;
};

#endif
