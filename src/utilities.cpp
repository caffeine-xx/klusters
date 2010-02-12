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
#include "utilities.h"

// include files for KDE
#include <kurl.h>
#include <kprocess.h>
#include <kio/netaccess.h>
#include <ktempfile.h>


int Utilities::getNbLines(QString path){
 int nbLines = -1;
 
 KProcess childproc;
 const char* shellToUse = getenv("SHELL");
 if(shellToUse != NULL) childproc.setUseShell(true,shellToUse);
 else childproc.setUseShell(true);

 KTempFile counterFile = KTempFile();//make a unique file
 childproc << "wc -l "<<path<<" > "<<counterFile.name();
 childproc.start(KProcess::DontCare);
 sleep(1);
 QFileInfo fi(counterFile.name());
 while(!fi.exists()){
  sleep(1);
 } 
 QFile tmpFile(counterFile.name());
 bool status = tmpFile.open(IO_ReadOnly);
 
 //If the number of lines could not be determined, stop here
 if(!status) return nbLines;
 
 //Create a reader on the temp file
 QTextStream fileStream(&tmpFile);
 QString infoLine = fileStream.readLine();
 QString info;
 if(infoLine != NULL){
  info = infoLine.stripWhiteSpace();
  QStringList parts = QStringList::split(" ", info);
  nbLines = parts[0].toLong();
  tmpFile.close();
  cout<<"nbLines "<<nbLines<<endl;
 }

  
 //Remove the temporary file
 KProcess childproc2;
 childproc2.setUseShell(true);
 childproc2 <<"rm -f "<<counterFile.name();
 bool res = childproc2.start(KProcess::DontCare);
 

 //If the number of lines could not be determined, try again
 if(infoLine == NULL || info == ""){
   cout<<"infoLine == NULL || info == ''"<<endl;
  return getNbLines(path);   
 }
 
 return nbLines;
}



void Utilities::createBackup(QString path){
 QFile original(path);
 QFile backup(path+"~");
 original.open(IO_ReadOnly);
 backup.open(IO_WriteOnly);
 backup.writeBlock(original.readAll());
 original.close();
 backup.close();
}

