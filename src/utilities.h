/***************************************************************************
 *   Copyright (C) 2004 by Lynn Hazan                                      *
 *   lynn@myrealbox.com                                                    *
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
#ifndef UTILITIES_H
#define UTILITIES_H

// include files for Qt
#include <qstring.h>
#include <qstringlist.h> 
#include <qfile.h>
#include <qfileinfo.h>
 
//General C++ include files
#include <iostream>
#include <fstream>
using namespace std;

/**
@author Lynn Hazan
*/
class Utilities{
public:
    inline Utilities(){};
    inline ~Utilities(){};
    
    /**
    * Compares the versions
    * @param oldVersion the old version 
    * @param newVersion the new version
    * @return true if @p newVersion is superior to @p oldVersion, false otherwise.
    */
    inline static bool compareVersion(QString oldVersion, QString newVersion){
     QStringList oldList = QStringList::split(".", oldVersion);
     QStringList newList = QStringList::split(".", newVersion);
     int minLength = QMIN(oldList.count(),newList.count());
     for(int i = 0; i< minLength;++i){
      if(newList[i] > oldList[i]) return true;
     }
     if(newList.count() > oldList.count()) return true;
     else return false;
    };

    /**Counts and returns the number of lines in the file @p path.
    * @param path file path.
    * @return the number of lines in the file. 
    */
    static int getNbLines(QString path);
    
    /**Creates a backup of the file @p path. The backup file name is the original
    * file name with an additional ~.
    * @param path file path.
    */
    static void createBackup(QString path);
};

#endif
