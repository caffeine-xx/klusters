/****************************************************************************
** TraceWidget meta object code from reading C++ file 'tracewidget.h'
**
** Created: Sat Sep 1 20:02:04 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "tracewidget.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TraceWidget::className() const
{
    return "TraceWidget";
}

QMetaObject *TraceWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TraceWidget( "TraceWidget", &TraceWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TraceWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TraceWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TraceWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TraceWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TraceWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QVBox::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "color", &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod slot_0 = {"changeBackgroundColor", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "grey", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setGreyScale", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "time", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod slot_2 = {"moveToTime", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "multiple", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"setMultiColumns", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "lines", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setClusterVerticalLines", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "raster", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setClusterRaster", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "waveforms", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"setClusterWaveforms", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "selectedIds", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_7 = {"slotChannelsSelected", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "selectedMode", &static_QUType_ptr, "BaseFrame::Mode", QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"setMode", 2, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "channelsToShow", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_9 = {"showChannels", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "clustersToShow", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_10 = {"showClusters", 2, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "eventsToShow", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut }
    };
    static const QUMethod slot_11 = {"showEvents", 2, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ "channelId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"channelColorUpdate", 2, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "clusterId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"clusterColorUpdate", 3, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "eventId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"eventColorUpdate", 3, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ "groupId", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"groupColorUpdate", 2, param_slot_15 };
    static const QUMethod slot_16 = {"increaseAllChannelsAmplitude", 0, 0 };
    static const QUMethod slot_17 = {"decreaseAllChannelsAmplitude", 0, 0 };
    static const QUParameter param_slot_18[] = {
	{ "channelIds", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_18 = {"increaseSelectedChannelsAmplitude", 1, param_slot_18 };
    static const QUParameter param_slot_19[] = {
	{ "channelIds", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_19 = {"decreaseSelectedChannelsAmplitude", 1, param_slot_19 };
    static const QUParameter param_slot_20[] = {
	{ "gain", &static_QUType_int, 0, QUParameter::In },
	{ "acquisitionGain", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_20 = {"setGains", 2, param_slot_20 };
    static const QUMethod slot_21 = {"updateDrawing", 0, 0 };
    static const QUMethod slot_22 = {"updateContents", 0, 0 };
    static const QUParameter param_slot_23[] = {
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_23 = {"groupsModified", 1, param_slot_23 };
    static const QUParameter param_slot_24[] = {
	{ "selectedIds", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_24 = {"selectChannels", 1, param_slot_24 };
    static const QUParameter param_slot_25[] = {
	{ "selectedChannelDefaultOffsets", &static_QUType_ptr, "QMap<int,int>", QUParameter::In }
    };
    static const QUMethod slot_25 = {"resetOffsets", 1, param_slot_25 };
    static const QUParameter param_slot_26[] = {
	{ "selectedChannels", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_26 = {"resetGains", 1, param_slot_26 };
    static const QUMethod slot_27 = {"drawTraces", 0, 0 };
    static const QUMethod slot_28 = {"reset", 0, 0 };
    static const QUParameter param_slot_29[] = {
	{ "show", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_29 = {"showLabels", 1, param_slot_29 };
    static const QUParameter param_slot_30[] = {
	{ "time", &static_QUType_ptr, "long", QUParameter::In },
	{ "duration", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod slot_30 = {"slotSetStartAndDuration", 2, param_slot_30 };
    static const QUParameter param_slot_31[] = {
	{ "show", &static_QUType_bool, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_31 = {"showCalibration", 2, param_slot_31 };
    static const QUParameter param_slot_32[] = {
	{ "length", &static_QUType_ptr, "long long", QUParameter::In }
    };
    static const QUMethod slot_32 = {"samplingRateModified", 1, param_slot_32 };
    static const QUParameter param_slot_33[] = {
	{ "clustersProvider", &static_QUType_ptr, "ClustersProvider", QUParameter::In },
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "clusterColors", &static_QUType_ptr, "ItemColors", QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In },
	{ "clustersToShow", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "displayGroupsClusterFile", &static_QUType_ptr, "QMap<int,QValueList<int>>", QUParameter::In },
	{ "channelsSpikeGroups", &static_QUType_ptr, "QMap<int,int>", QUParameter::In },
	{ "nbSamplesBefore", &static_QUType_int, 0, QUParameter::In },
	{ "nbSamplesAfter", &static_QUType_int, 0, QUParameter::In },
	{ "clustersToSkip", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_33 = {"addClusterProvider", 10, param_slot_33 };
    static const QUParameter param_slot_34[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_34 = {"removeClusterProvider", 2, param_slot_34 };
    static const QUParameter param_slot_35[] = {
	{ "eventsProvider", &static_QUType_ptr, "EventsProvider", QUParameter::In },
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "eventColors", &static_QUType_ptr, "ItemColors", QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In },
	{ "eventsToShow", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "eventsToNotBrowse", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_35 = {"addEventProvider", 6, param_slot_35 };
    static const QUParameter param_slot_36[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_36 = {"removeEventProvider", 2, param_slot_36 };
    static const QUParameter param_slot_37[] = {
	{ "printPainter", &static_QUType_ptr, "QPainter", QUParameter::InOut },
	{ "metrics", &static_QUType_ptr, "QPaintDeviceMetrics", QUParameter::InOut },
	{ "filePath", &static_QUType_QString, 0, QUParameter::In },
	{ "whiteBackground", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_37 = {"print", 4, param_slot_37 };
    static const QUMethod slot_38 = {"showNextCluster", 0, 0 };
    static const QUMethod slot_39 = {"showPreviousCluster", 0, 0 };
    static const QUMethod slot_40 = {"showNextEvent", 0, 0 };
    static const QUMethod slot_41 = {"showPreviousEvent", 0, 0 };
    static const QUParameter param_slot_42[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "selectedEventId", &static_QUType_int, 0, QUParameter::In },
	{ "time", &static_QUType_double, 0, QUParameter::In },
	{ "newTime", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod slot_42 = {"slotEventModified", 4, param_slot_42 };
    static const QUParameter param_slot_43[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "selectedEventId", &static_QUType_int, 0, QUParameter::In },
	{ "time", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod slot_43 = {"slotEventRemoved", 3, param_slot_43 };
    static const QUParameter param_slot_44[] = {
	{ "active", &static_QUType_bool, 0, QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "time", &static_QUType_double, 0, QUParameter::In },
	{ "newTime", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod slot_44 = {"updateEvents", 4, param_slot_44 };
    static const QUMethod slot_45 = {"removeEvent", 0, 0 };
    static const QUParameter param_slot_46[] = {
	{ "active", &static_QUType_bool, 0, QUParameter::In },
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "time", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod slot_46 = {"updateEvents", 3, param_slot_46 };
    static const QUParameter param_slot_47[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "eventDescription", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_47 = {"eventToAddProperties", 2, param_slot_47 };
    static const QUParameter param_slot_48[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "addedEventDescription", &static_QUType_QString, 0, QUParameter::In },
	{ "time", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod slot_48 = {"slotEventAdded", 3, param_slot_48 };
    static const QUParameter param_slot_49[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "eventsToShow", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_49 = {"updateEvents", 3, param_slot_49 };
    static const QUParameter param_slot_50[] = {
	{ "nbSamplesBefore", &static_QUType_int, 0, QUParameter::In },
	{ "nbSamplesAfter", &static_QUType_int, 0, QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_50 = {"updateWaveformInformation", 3, param_slot_50 };
    static const QUParameter param_slot_51[] = {
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_51 = {"updateClusterData", 1, param_slot_51 };
    static const QUParameter param_slot_52[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "eventsToNotBrowse", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_52 = {"updateNoneBrowsingEventList", 2, param_slot_52 };
    static const QUParameter param_slot_53[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "clustersToNotBrowse", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_53 = {"updateNoneBrowsingClusterList", 2, param_slot_53 };
    static const QUMethod slot_54 = {"dockBeingClosed", 0, 0 };
    static const QUParameter param_slot_55[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "clustersToShow", &static_QUType_ptr, "QValueList<int>", QUParameter::InOut },
	{ "clusterColors", &static_QUType_ptr, "ItemColors", QUParameter::In },
	{ "active", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_55 = {"updateClusters", 4, param_slot_55 };
    static const QUParameter param_slot_56[] = {
	{ "skippedChannels", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_56 = {"updateSkipStatus", 1, param_slot_56 };
    static const QUParameter param_slot_57[] = {
	{ "start", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_57 = {"slotStartMinuteTimeUpdated", 1, param_slot_57 };
    static const QUParameter param_slot_58[] = {
	{ "start", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_58 = {"slotStartSecondTimeUpdated", 1, param_slot_58 };
    static const QUParameter param_slot_59[] = {
	{ "start", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_59 = {"slotStartMilisecondTimeUpdated", 1, param_slot_59 };
    static const QUMethod slot_60 = {"slotDurationUpdated", 0, 0 };
    static const QUMethod slot_61 = {"slotScrollBarUpdated", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "changeBackgroundColor(QColor)", &slot_0, QMetaData::Public },
	{ "setGreyScale(bool)", &slot_1, QMetaData::Public },
	{ "moveToTime(long)", &slot_2, QMetaData::Public },
	{ "setMultiColumns(bool)", &slot_3, QMetaData::Public },
	{ "setClusterVerticalLines(bool)", &slot_4, QMetaData::Public },
	{ "setClusterRaster(bool)", &slot_5, QMetaData::Public },
	{ "setClusterWaveforms(bool)", &slot_6, QMetaData::Public },
	{ "slotChannelsSelected(const QValueList<int>&)", &slot_7, QMetaData::Public },
	{ "setMode(BaseFrame::Mode,bool)", &slot_8, QMetaData::Public },
	{ "showChannels(const QValueList<int>&)", &slot_9, QMetaData::Public },
	{ "showClusters(QString,QValueList<int>&)", &slot_10, QMetaData::Public },
	{ "showEvents(QString,QValueList<int>&)", &slot_11, QMetaData::Public },
	{ "channelColorUpdate(int,bool)", &slot_12, QMetaData::Public },
	{ "clusterColorUpdate(QString,int,bool)", &slot_13, QMetaData::Public },
	{ "eventColorUpdate(QString,int,bool)", &slot_14, QMetaData::Public },
	{ "groupColorUpdate(int,bool)", &slot_15, QMetaData::Public },
	{ "increaseAllChannelsAmplitude()", &slot_16, QMetaData::Public },
	{ "decreaseAllChannelsAmplitude()", &slot_17, QMetaData::Public },
	{ "increaseSelectedChannelsAmplitude(const QValueList<int>&)", &slot_18, QMetaData::Public },
	{ "decreaseSelectedChannelsAmplitude(const QValueList<int>&)", &slot_19, QMetaData::Public },
	{ "setGains(int,int)", &slot_20, QMetaData::Public },
	{ "updateDrawing()", &slot_21, QMetaData::Public },
	{ "updateContents()", &slot_22, QMetaData::Public },
	{ "groupsModified(bool)", &slot_23, QMetaData::Public },
	{ "selectChannels(const QValueList<int>&)", &slot_24, QMetaData::Public },
	{ "resetOffsets(const QMap<int,int>&)", &slot_25, QMetaData::Public },
	{ "resetGains(const QValueList<int>&)", &slot_26, QMetaData::Public },
	{ "drawTraces()", &slot_27, QMetaData::Public },
	{ "reset()", &slot_28, QMetaData::Public },
	{ "showLabels(bool)", &slot_29, QMetaData::Public },
	{ "slotSetStartAndDuration(long,long)", &slot_30, QMetaData::Public },
	{ "showCalibration(bool,bool)", &slot_31, QMetaData::Public },
	{ "samplingRateModified(long long)", &slot_32, QMetaData::Public },
	{ "addClusterProvider(ClustersProvider*,QString,ItemColors*,bool,QValueList<int>&,QMap<int,QValueList<int>>*,QMap<int,int>*,int,int,const QValueList<int>&)", &slot_33, QMetaData::Public },
	{ "removeClusterProvider(QString,bool)", &slot_34, QMetaData::Public },
	{ "addEventProvider(EventsProvider*,QString,ItemColors*,bool,QValueList<int>&,const QValueList<int>&)", &slot_35, QMetaData::Public },
	{ "removeEventProvider(QString,bool)", &slot_36, QMetaData::Public },
	{ "print(QPainter&,QPaintDeviceMetrics&,QString,bool)", &slot_37, QMetaData::Public },
	{ "showNextCluster()", &slot_38, QMetaData::Public },
	{ "showPreviousCluster()", &slot_39, QMetaData::Public },
	{ "showNextEvent()", &slot_40, QMetaData::Public },
	{ "showPreviousEvent()", &slot_41, QMetaData::Public },
	{ "slotEventModified(QString,int,double,double)", &slot_42, QMetaData::Public },
	{ "slotEventRemoved(QString,int,double)", &slot_43, QMetaData::Public },
	{ "updateEvents(bool,QString,double,double)", &slot_44, QMetaData::Public },
	{ "removeEvent()", &slot_45, QMetaData::Public },
	{ "updateEvents(bool,QString,double)", &slot_46, QMetaData::Public },
	{ "eventToAddProperties(QString,QString)", &slot_47, QMetaData::Public },
	{ "slotEventAdded(QString,QString,double)", &slot_48, QMetaData::Public },
	{ "updateEvents(QString,QValueList<int>&,bool)", &slot_49, QMetaData::Public },
	{ "updateWaveformInformation(int,int,bool)", &slot_50, QMetaData::Public },
	{ "updateClusterData(bool)", &slot_51, QMetaData::Public },
	{ "updateNoneBrowsingEventList(QString,const QValueList<int>&)", &slot_52, QMetaData::Public },
	{ "updateNoneBrowsingClusterList(QString,const QValueList<int>&)", &slot_53, QMetaData::Public },
	{ "dockBeingClosed()", &slot_54, QMetaData::Public },
	{ "updateClusters(QString,QValueList<int>&,ItemColors*,bool)", &slot_55, QMetaData::Public },
	{ "updateSkipStatus(const QValueList<int>&)", &slot_56, QMetaData::Public },
	{ "slotStartMinuteTimeUpdated(int)", &slot_57, QMetaData::Private },
	{ "slotStartSecondTimeUpdated(int)", &slot_58, QMetaData::Private },
	{ "slotStartMilisecondTimeUpdated(int)", &slot_59, QMetaData::Private },
	{ "slotDurationUpdated()", &slot_60, QMetaData::Private },
	{ "slotScrollBarUpdated()", &slot_61, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "selectedIds", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod signal_0 = {"channelsSelected", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "startTime", &static_QUType_ptr, "long", QUParameter::In },
	{ "timeWindow", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod signal_1 = {"updateStartAndDuration", 2, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "selectedEventId", &static_QUType_int, 0, QUParameter::In },
	{ "time", &static_QUType_double, 0, QUParameter::In },
	{ "newTime", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"eventModified", 4, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "selectedEventId", &static_QUType_int, 0, QUParameter::In },
	{ "time", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"eventRemoved", 3, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "providerName", &static_QUType_QString, 0, QUParameter::In },
	{ "addedEventDescription", &static_QUType_QString, 0, QUParameter::In },
	{ "time", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"eventAdded", 3, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ "viewWidget", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod signal_5 = {"parentDockBeingClosed", 1, param_signal_5 };
    static const QMetaData signal_tbl[] = {
	{ "channelsSelected(const QValueList<int>&)", &signal_0, QMetaData::Public },
	{ "updateStartAndDuration(long,long)", &signal_1, QMetaData::Public },
	{ "eventModified(QString,int,double,double)", &signal_2, QMetaData::Public },
	{ "eventRemoved(QString,int,double)", &signal_3, QMetaData::Public },
	{ "eventAdded(QString,QString,double)", &signal_4, QMetaData::Public },
	{ "parentDockBeingClosed(QWidget*)", &signal_5, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"TraceWidget", parentObject,
	slot_tbl, 62,
	signal_tbl, 6,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TraceWidget.setMetaObject( metaObj );
    return metaObj;
}

void* TraceWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TraceWidget" ) )
	return this;
    return QVBox::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL channelsSelected
void TraceWidget::channelsSelected( const QValueList<int>& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL updateStartAndDuration
void TraceWidget::updateStartAndDuration( long t0, long t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL eventModified
void TraceWidget::eventModified( QString t0, int t1, double t2, double t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_double.set(o+3,t2);
    static_QUType_double.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL eventRemoved
void TraceWidget::eventRemoved( QString t0, int t1, double t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_double.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL eventAdded
void TraceWidget::eventAdded( QString t0, QString t1, double t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_double.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL parentDockBeingClosed
void TraceWidget::parentDockBeingClosed( QWidget* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool TraceWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: changeBackgroundColor((QColor)(*((QColor*)static_QUType_ptr.get(_o+1)))); break;
    case 1: setGreyScale((bool)static_QUType_bool.get(_o+1)); break;
    case 2: moveToTime((long)(*((long*)static_QUType_ptr.get(_o+1)))); break;
    case 3: setMultiColumns((bool)static_QUType_bool.get(_o+1)); break;
    case 4: setClusterVerticalLines((bool)static_QUType_bool.get(_o+1)); break;
    case 5: setClusterRaster((bool)static_QUType_bool.get(_o+1)); break;
    case 6: setClusterWaveforms((bool)static_QUType_bool.get(_o+1)); break;
    case 7: slotChannelsSelected((const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 8: setMode((BaseFrame::Mode)(*((BaseFrame::Mode*)static_QUType_ptr.get(_o+1))),(bool)static_QUType_bool.get(_o+2)); break;
    case 9: showChannels((const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 10: showClusters((QString)static_QUType_QString.get(_o+1),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2))); break;
    case 11: showEvents((QString)static_QUType_QString.get(_o+1),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2))); break;
    case 12: channelColorUpdate((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 13: clusterColorUpdate((QString)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 14: eventColorUpdate((QString)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 15: groupColorUpdate((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 16: increaseAllChannelsAmplitude(); break;
    case 17: decreaseAllChannelsAmplitude(); break;
    case 18: increaseSelectedChannelsAmplitude((const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 19: decreaseSelectedChannelsAmplitude((const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 20: setGains((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 21: updateDrawing(); break;
    case 22: updateContents(); break;
    case 23: groupsModified((bool)static_QUType_bool.get(_o+1)); break;
    case 24: selectChannels((const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 25: resetOffsets((const QMap<int,int>&)*((const QMap<int,int>*)static_QUType_ptr.get(_o+1))); break;
    case 26: resetGains((const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 27: drawTraces(); break;
    case 28: reset(); break;
    case 29: showLabels((bool)static_QUType_bool.get(_o+1)); break;
    case 30: slotSetStartAndDuration((long)(*((long*)static_QUType_ptr.get(_o+1))),(long)(*((long*)static_QUType_ptr.get(_o+2)))); break;
    case 31: showCalibration((bool)static_QUType_bool.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 32: samplingRateModified((long long)(*((long long*)static_QUType_ptr.get(_o+1)))); break;
    case 33: addClusterProvider((ClustersProvider*)static_QUType_ptr.get(_o+1),(QString)static_QUType_QString.get(_o+2),(ItemColors*)static_QUType_ptr.get(_o+3),(bool)static_QUType_bool.get(_o+4),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+5)),(QMap<int,QValueList<int> >*)static_QUType_ptr.get(_o+6),(QMap<int,int>*)static_QUType_ptr.get(_o+7),(int)static_QUType_int.get(_o+8),(int)static_QUType_int.get(_o+9),(const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+10))); break;
    case 34: removeClusterProvider((QString)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 35: addEventProvider((EventsProvider*)static_QUType_ptr.get(_o+1),(QString)static_QUType_QString.get(_o+2),(ItemColors*)static_QUType_ptr.get(_o+3),(bool)static_QUType_bool.get(_o+4),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+5)),(const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+6))); break;
    case 36: removeEventProvider((QString)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 37: print((QPainter&)*((QPainter*)static_QUType_ptr.get(_o+1)),(QPaintDeviceMetrics&)*((QPaintDeviceMetrics*)static_QUType_ptr.get(_o+2)),(QString)static_QUType_QString.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    case 38: showNextCluster(); break;
    case 39: showPreviousCluster(); break;
    case 40: showNextEvent(); break;
    case 41: showPreviousEvent(); break;
    case 42: slotEventModified((QString)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(double)static_QUType_double.get(_o+3),(double)static_QUType_double.get(_o+4)); break;
    case 43: slotEventRemoved((QString)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(double)static_QUType_double.get(_o+3)); break;
    case 44: updateEvents((bool)static_QUType_bool.get(_o+1),(QString)static_QUType_QString.get(_o+2),(double)static_QUType_double.get(_o+3),(double)static_QUType_double.get(_o+4)); break;
    case 45: removeEvent(); break;
    case 46: updateEvents((bool)static_QUType_bool.get(_o+1),(QString)static_QUType_QString.get(_o+2),(double)static_QUType_double.get(_o+3)); break;
    case 47: eventToAddProperties((QString)static_QUType_QString.get(_o+1),(QString)static_QUType_QString.get(_o+2)); break;
    case 48: slotEventAdded((QString)static_QUType_QString.get(_o+1),(QString)static_QUType_QString.get(_o+2),(double)static_QUType_double.get(_o+3)); break;
    case 49: updateEvents((QString)static_QUType_QString.get(_o+1),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2)),(bool)static_QUType_bool.get(_o+3)); break;
    case 50: updateWaveformInformation((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 51: updateClusterData((bool)static_QUType_bool.get(_o+1)); break;
    case 52: updateNoneBrowsingEventList((QString)static_QUType_QString.get(_o+1),(const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+2))); break;
    case 53: updateNoneBrowsingClusterList((QString)static_QUType_QString.get(_o+1),(const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+2))); break;
    case 54: dockBeingClosed(); break;
    case 55: updateClusters((QString)static_QUType_QString.get(_o+1),(QValueList<int>&)*((QValueList<int>*)static_QUType_ptr.get(_o+2)),(ItemColors*)static_QUType_ptr.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    case 56: updateSkipStatus((const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 57: slotStartMinuteTimeUpdated((int)static_QUType_int.get(_o+1)); break;
    case 58: slotStartSecondTimeUpdated((int)static_QUType_int.get(_o+1)); break;
    case 59: slotStartMilisecondTimeUpdated((int)static_QUType_int.get(_o+1)); break;
    case 60: slotDurationUpdated(); break;
    case 61: slotScrollBarUpdated(); break;
    default:
	return QVBox::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TraceWidget::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: channelsSelected((const QValueList<int>&)*((const QValueList<int>*)static_QUType_ptr.get(_o+1))); break;
    case 1: updateStartAndDuration((long)(*((long*)static_QUType_ptr.get(_o+1))),(long)(*((long*)static_QUType_ptr.get(_o+2)))); break;
    case 2: eventModified((QString)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(double)static_QUType_double.get(_o+3),(double)static_QUType_double.get(_o+4)); break;
    case 3: eventRemoved((QString)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(double)static_QUType_double.get(_o+3)); break;
    case 4: eventAdded((QString)static_QUType_QString.get(_o+1),(QString)static_QUType_QString.get(_o+2),(double)static_QUType_double.get(_o+3)); break;
    case 5: parentDockBeingClosed((QWidget*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QVBox::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool TraceWidget::qt_property( int id, int f, QVariant* v)
{
    return QVBox::qt_property( id, f, v);
}

bool TraceWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
