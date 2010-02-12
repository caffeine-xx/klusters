/***************************************************************************
                          klustersxmlreader.h  -  description
                             -------------------
    begin                : Tue Aug 10 2004
    copyright            : (C) 2004 by Lynn Hazan
    email                : lynn.hazan.myrealbox.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef KLUSTERSXMLREADER_H
#define KLUSTERSXMLREADER_H

// include files for KDE

//Libxml2 include files.
#include <stdlib.h>
#include <stdio.h>
#include <libxml/tree.h>
#include <libxml/parser.h>
#include <libxml/xpath.h>
#include <libxml/xpathInternals.h>

//include files for QT
#include <qvaluelist.h> 
#include <qfile.h>
#include <qmap.h>

class ClusterUserInformation;

/**
  * Class reading the parameter xml file.
  *@author Lynn Hazan
  */

class KlustersXmlReader {
public:

  /**Type of xml file supported by this class.*/
  enum fileType{PARAMETER=0};

	KlustersXmlReader();
	~KlustersXmlReader();

  /**Opens and parses the file with the @p url.
  * @param file qfile representing the file to open.
  * @param type type of the xml file to open.
  * @return true if the file was coorectly parse, false othewise.
  */
  bool parseFile(const QFile& file,fileType type);

  /**Close the currently open file.*/
  void closeFile();

 /**
  * Returns the resolution in bits.
  * @return resolution.
  */
  int getResolution()const;

 /**
  * Returns the number of total of channels.
  * @return number of channels.
  */
  int getNbChannels()const;
  
 /**
  * Returns the list of channels for the given group @p electrodeGroupID.
  * @param electrodeGroupID the id of the electrode group currently opened.  
  * @return number of channels.
  */
  QValueList<int> getNbChannelsByGroup(int electrodeGroupID)const;

 /**
  * Returns the sampling rate of the system in hertz.
  * @return sampling rate in hertz.
  */
  int getSamplingRate()const;

  /**Returns the number of samples in a spike for the given group @p electrodeGroupID,
  * or zero if the element could not be found in the file.
  * @param electrodeGroupID the id of the electrode group currently opened.   
  * @return number of samples.
  */
  int getNbSamples(int electrodeGroupID)const;

  /**Returns the sample index corresponding to the peak of the spike  for the given group @p electrodeGroupID,
  * or zero if the element could not be found in the file.
  * @param electrodeGroupID the id of the electrode group currently opened.   
  * @return index.
  */
  int getPeakSampleIndex(int electrodeGroupID)const;
  
   /**Returns the number of features used in the spike detection for the given group @p electrodeGroupID.
  * @param electrodeGroupID the id of the electrode group currently opened.     
  * @return number of features.
  */
  int getNbFeatures(int electrodeGroupID)const;
  
 /**Returns the voltage range of the acquisition system in volts,
  * or zero if the element could not be found in the file.
  */
  int getVoltageRange() const;

  /**Returns the amplification of the acquisition system,
  * or zero if the element could not be found in the file.
  */
  int getAmplification() const;
  

  /**Returns the offset store in the session file,
  * or zero if the element could not be found in the file.
  * @return offset.
  */
  int getOffset()const;

 /** Gets the map of cluster user information.
	* @param pGroup the electrod group id for which the cluster user information have to be retrieved (corresponds to the 	currently opened cluster file).
	* @param clusterUserInformationMap map given the cluster user information, the key is the cluster id and the value an instance of ClusterUserInformation.
  */ 
  void getClusterUserInformation (int pGroup, QMap<int,ClusterUserInformation>& clusterUserInformationMap)const;

   
private:
 xmlDocPtr doc;  
 fileType type;
 xmlXPathContextPtr xpathContex;
 QString readVersion;
};

#endif
