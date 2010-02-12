/****************************************************************************
** KlustersApp meta object code from reading C++ file 'klusters.h'
**
** Created: Sat Sep 15 16:44:30 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.7   edited Oct 19 16:22 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "klusters.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *KlustersApp::className() const
{
    return "KlustersApp";
}

QMetaObject *KlustersApp::metaObj = 0;
static QMetaObjectCleanUp cleanUp_KlustersApp( "KlustersApp", &KlustersApp::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString KlustersApp::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KlustersApp", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString KlustersApp::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KlustersApp", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* KlustersApp::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = KDockMainWindow::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_0 = {"queryClose", 1, param_slot_0 };
    static const QUMethod slot_1 = {"slotUpdateParameterBar", 0, 0 };
    static const QUMethod slot_2 = {"executePreferencesDlg", 0, 0 };
    static const QUMethod slot_3 = {"applyPreferences", 0, 0 };
    static const QUMethod slot_4 = {"initializePreferences", 0, 0 };
    static const QUMethod slot_5 = {"slotFileOpen", 0, 0 };
    static const QUMethod slot_6 = {"slotFileImport", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ "url", &static_QUType_ptr, "KURL", QUParameter::In }
    };
    static const QUMethod slot_7 = {"slotFileOpenRecent", 1, param_slot_7 };
    static const QUMethod slot_8 = {"slotFileSave", 0, 0 };
    static const QUMethod slot_9 = {"slotFileRenumberAndSave", 0, 0 };
    static const QUMethod slot_10 = {"slotFileSaveAs", 0, 0 };
    static const QUMethod slot_11 = {"slotFileClose", 0, 0 };
    static const QUMethod slot_12 = {"slotFilePrint", 0, 0 };
    static const QUMethod slot_13 = {"slotFileQuit", 0, 0 };
    static const QUMethod slot_14 = {"slotUndo", 0, 0 };
    static const QUMethod slot_15 = {"slotRedo", 0, 0 };
    static const QUMethod slot_16 = {"slotKeyBindings", 0, 0 };
    static const QUMethod slot_17 = {"slotViewMainToolBar", 0, 0 };
    static const QUMethod slot_18 = {"slotViewStatusBar", 0, 0 };
    static const QUMethod slot_19 = {"slotViewActionBar", 0, 0 };
    static const QUMethod slot_20 = {"slotViewToolBar", 0, 0 };
    static const QUMethod slot_21 = {"slotViewParameterBar", 0, 0 };
    static const QUMethod slot_22 = {"slotViewClusterInfo", 0, 0 };
    static const QUMethod slot_23 = {"slotWindowNewClusterDisplay", 0, 0 };
    static const QUMethod slot_24 = {"slotWindowNewWaveformDisplay", 0, 0 };
    static const QUMethod slot_25 = {"slotWindowNewCrosscorrelationDisplay", 0, 0 };
    static const QUMethod slot_26 = {"slotWindowNewOverViewDisplay", 0, 0 };
    static const QUMethod slot_27 = {"slotWindowNewGroupingAssistantDisplay", 0, 0 };
    static const QUMethod slot_28 = {"slotNewTraceDisplay", 0, 0 };
    static const QUParameter param_slot_29[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_29 = {"slotStatusMsg", 1, param_slot_29 };
    static const QUMethod slot_30 = {"viewMenuAboutToShow", 0, 0 };
    static const QUParameter param_slot_31[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_31 = {"viewMenuActivated", 1, param_slot_31 };
    static const QUMethod slot_32 = {"slotSingleNew", 0, 0 };
    static const QUMethod slot_33 = {"slotMultipleNew", 0, 0 };
    static const QUMethod slot_34 = {"slotDeleteNoise", 0, 0 };
    static const QUMethod slot_35 = {"slotDeleteArtefact", 0, 0 };
    static const QUMethod slot_36 = {"slotZoom", 0, 0 };
    static const QUMethod slot_37 = {"slotSelectTime", 0, 0 };
    static const QUParameter param_slot_38[] = {
	{ "clusterId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_38 = {"slotSingleColorUpdate", 1, param_slot_38 };
    static const QUParameter param_slot_39[] = {
	{ "selectedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_39 = {"slotUpdateShownClusters", 1, param_slot_39 };
    static const QUParameter param_slot_40[] = {
	{ "selectedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_40 = {"slotGroupClusters", 1, param_slot_40 };
    static const QUParameter param_slot_41[] = {
	{ "selectedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_41 = {"slotMoveClustersToNoise", 1, param_slot_41 };
    static const QUParameter param_slot_42[] = {
	{ "selectedClusters", &static_QUType_ptr, "QValueList<int>", QUParameter::In }
    };
    static const QUMethod slot_42 = {"slotMoveClustersToArtefact", 1, param_slot_42 };
    static const QUMethod slot_43 = {"slotImmediateSelection", 0, 0 };
    static const QUMethod slot_44 = {"slotDelaySelection", 0, 0 };
    static const QUParameter param_slot_45[] = {
	{ "widget", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_45 = {"slotTabChange", 1, param_slot_45 };
    static const QUParameter param_slot_46[] = {
	{ "dimensionX", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_46 = {"slotUpdateDimensionX", 1, param_slot_46 };
    static const QUParameter param_slot_47[] = {
	{ "dimensionYs", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_47 = {"slotUpdateDimensionY", 1, param_slot_47 };
    static const QUMethod slot_48 = {"slotDisplayClose", 0, 0 };
    static const QUParameter param_slot_49[] = {
	{ "undoNb", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_49 = {"slotUpdateUndoNb", 1, param_slot_49 };
    static const QUParameter param_slot_50[] = {
	{ "redoNb", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_50 = {"slotUpdateRedoNb", 1, param_slot_50 };
    static const QUParameter param_slot_51[] = {
	{ "start", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_51 = {"slotUpdateStartTime", 1, param_slot_51 };
    static const QUMethod slot_52 = {"slotUpdateDuration", 0, 0 };
    static const QUMethod slot_53 = {"slotTimeFrameMode", 0, 0 };
    static const QUMethod slot_54 = {"setOverLayPresentation", 0, 0 };
    static const QUMethod slot_55 = {"slotMeanPresentation", 0, 0 };
    static const QUMethod slot_56 = {"slotIncreaseAmplitude", 0, 0 };
    static const QUMethod slot_57 = {"slotDecreaseAmplitude", 0, 0 };
    static const QUParameter param_slot_58[] = {
	{ "nbSpikes", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_58 = {"slotSpikesTodisplay", 1, param_slot_58 };
    static const QUMethod slot_59 = {"slotUpdateCorrelogramsHalfDuration", 0, 0 };
    static const QUMethod slot_60 = {"slotUpdateBinSize", 0, 0 };
    static const QUMethod slot_61 = {"slotIncreaseCorrelogramsAmplitude", 0, 0 };
    static const QUMethod slot_62 = {"slotDecreaseCorrelogramsAmplitude", 0, 0 };
    static const QUMethod slot_63 = {"slotNoScale", 0, 0 };
    static const QUMethod slot_64 = {"slotScaleByMax", 0, 0 };
    static const QUMethod slot_65 = {"slotScaleByShouler", 0, 0 };
    static const QUMethod slot_66 = {"slotShoulderLine", 0, 0 };
    static const QUMethod slot_67 = {"slotUpdateErrorMatrix", 0, 0 };
    static const QUMethod slot_68 = {"slotSelectAll", 0, 0 };
    static const QUMethod slot_69 = {"slotSelectAllWO01", 0, 0 };
    static const QUMethod slot_70 = {"slotRecluster", 0, 0 };
    static const QUMethod slot_71 = {"slotStopRecluster", 0, 0 };
    static const QUParameter param_slot_72[] = {
	{ "process", &static_QUType_ptr, "KProcess", QUParameter::In }
    };
    static const QUMethod slot_72 = {"slotProcessExited", 1, param_slot_72 };
    static const QUMethod slot_73 = {"slotOutputTreatmentOver", 0, 0 };
    static const QUMethod slot_74 = {"renameActiveDisplay", 0, 0 };
    static const QUMethod slot_75 = {"slotIncreaseAllChannelsAmplitude", 0, 0 };
    static const QUMethod slot_76 = {"slotDecreaseAllChannelsAmplitude", 0, 0 };
    static const QUMethod slot_77 = {"slotShowLabels", 0, 0 };
    static const QUMethod slot_78 = {"slotShowNextCluster", 0, 0 };
    static const QUMethod slot_79 = {"slotShowPreviousCluster", 0, 0 };
    static const QUMethod slot_80 = {"slotSpikesDeleted", 0, 0 };
    static const QUMethod slot_81 = {"slotClusterInformationModified", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "queryClose()", &slot_0, QMetaData::Public },
	{ "slotUpdateParameterBar()", &slot_1, QMetaData::Public },
	{ "executePreferencesDlg()", &slot_2, QMetaData::Public },
	{ "applyPreferences()", &slot_3, QMetaData::Public },
	{ "initializePreferences()", &slot_4, QMetaData::Public },
	{ "slotFileOpen()", &slot_5, QMetaData::Private },
	{ "slotFileImport()", &slot_6, QMetaData::Private },
	{ "slotFileOpenRecent(const KURL&)", &slot_7, QMetaData::Private },
	{ "slotFileSave()", &slot_8, QMetaData::Private },
	{ "slotFileRenumberAndSave()", &slot_9, QMetaData::Private },
	{ "slotFileSaveAs()", &slot_10, QMetaData::Private },
	{ "slotFileClose()", &slot_11, QMetaData::Private },
	{ "slotFilePrint()", &slot_12, QMetaData::Private },
	{ "slotFileQuit()", &slot_13, QMetaData::Private },
	{ "slotUndo()", &slot_14, QMetaData::Private },
	{ "slotRedo()", &slot_15, QMetaData::Private },
	{ "slotKeyBindings()", &slot_16, QMetaData::Private },
	{ "slotViewMainToolBar()", &slot_17, QMetaData::Private },
	{ "slotViewStatusBar()", &slot_18, QMetaData::Private },
	{ "slotViewActionBar()", &slot_19, QMetaData::Private },
	{ "slotViewToolBar()", &slot_20, QMetaData::Private },
	{ "slotViewParameterBar()", &slot_21, QMetaData::Private },
	{ "slotViewClusterInfo()", &slot_22, QMetaData::Private },
	{ "slotWindowNewClusterDisplay()", &slot_23, QMetaData::Private },
	{ "slotWindowNewWaveformDisplay()", &slot_24, QMetaData::Private },
	{ "slotWindowNewCrosscorrelationDisplay()", &slot_25, QMetaData::Private },
	{ "slotWindowNewOverViewDisplay()", &slot_26, QMetaData::Private },
	{ "slotWindowNewGroupingAssistantDisplay()", &slot_27, QMetaData::Private },
	{ "slotNewTraceDisplay()", &slot_28, QMetaData::Private },
	{ "slotStatusMsg(const QString&)", &slot_29, QMetaData::Private },
	{ "viewMenuAboutToShow()", &slot_30, QMetaData::Private },
	{ "viewMenuActivated(int)", &slot_31, QMetaData::Private },
	{ "slotSingleNew()", &slot_32, QMetaData::Private },
	{ "slotMultipleNew()", &slot_33, QMetaData::Private },
	{ "slotDeleteNoise()", &slot_34, QMetaData::Private },
	{ "slotDeleteArtefact()", &slot_35, QMetaData::Private },
	{ "slotZoom()", &slot_36, QMetaData::Private },
	{ "slotSelectTime()", &slot_37, QMetaData::Private },
	{ "slotSingleColorUpdate(int)", &slot_38, QMetaData::Private },
	{ "slotUpdateShownClusters(QValueList<int>)", &slot_39, QMetaData::Private },
	{ "slotGroupClusters(QValueList<int>)", &slot_40, QMetaData::Private },
	{ "slotMoveClustersToNoise(QValueList<int>)", &slot_41, QMetaData::Private },
	{ "slotMoveClustersToArtefact(QValueList<int>)", &slot_42, QMetaData::Private },
	{ "slotImmediateSelection()", &slot_43, QMetaData::Private },
	{ "slotDelaySelection()", &slot_44, QMetaData::Private },
	{ "slotTabChange(QWidget*)", &slot_45, QMetaData::Private },
	{ "slotUpdateDimensionX(int)", &slot_46, QMetaData::Private },
	{ "slotUpdateDimensionY(int)", &slot_47, QMetaData::Private },
	{ "slotDisplayClose()", &slot_48, QMetaData::Private },
	{ "slotUpdateUndoNb(int)", &slot_49, QMetaData::Private },
	{ "slotUpdateRedoNb(int)", &slot_50, QMetaData::Private },
	{ "slotUpdateStartTime(int)", &slot_51, QMetaData::Private },
	{ "slotUpdateDuration()", &slot_52, QMetaData::Private },
	{ "slotTimeFrameMode()", &slot_53, QMetaData::Private },
	{ "setOverLayPresentation()", &slot_54, QMetaData::Private },
	{ "slotMeanPresentation()", &slot_55, QMetaData::Private },
	{ "slotIncreaseAmplitude()", &slot_56, QMetaData::Private },
	{ "slotDecreaseAmplitude()", &slot_57, QMetaData::Private },
	{ "slotSpikesTodisplay(int)", &slot_58, QMetaData::Private },
	{ "slotUpdateCorrelogramsHalfDuration()", &slot_59, QMetaData::Private },
	{ "slotUpdateBinSize()", &slot_60, QMetaData::Private },
	{ "slotIncreaseCorrelogramsAmplitude()", &slot_61, QMetaData::Private },
	{ "slotDecreaseCorrelogramsAmplitude()", &slot_62, QMetaData::Private },
	{ "slotNoScale()", &slot_63, QMetaData::Private },
	{ "slotScaleByMax()", &slot_64, QMetaData::Private },
	{ "slotScaleByShouler()", &slot_65, QMetaData::Private },
	{ "slotShoulderLine()", &slot_66, QMetaData::Private },
	{ "slotUpdateErrorMatrix()", &slot_67, QMetaData::Private },
	{ "slotSelectAll()", &slot_68, QMetaData::Private },
	{ "slotSelectAllWO01()", &slot_69, QMetaData::Private },
	{ "slotRecluster()", &slot_70, QMetaData::Private },
	{ "slotStopRecluster()", &slot_71, QMetaData::Private },
	{ "slotProcessExited(KProcess*)", &slot_72, QMetaData::Private },
	{ "slotOutputTreatmentOver()", &slot_73, QMetaData::Private },
	{ "renameActiveDisplay()", &slot_74, QMetaData::Private },
	{ "slotIncreaseAllChannelsAmplitude()", &slot_75, QMetaData::Private },
	{ "slotDecreaseAllChannelsAmplitude()", &slot_76, QMetaData::Private },
	{ "slotShowLabels()", &slot_77, QMetaData::Private },
	{ "slotShowNextCluster()", &slot_78, QMetaData::Private },
	{ "slotShowPreviousCluster()", &slot_79, QMetaData::Private },
	{ "slotSpikesDeleted()", &slot_80, QMetaData::Private },
	{ "slotClusterInformationModified()", &slot_81, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"KlustersApp", parentObject,
	slot_tbl, 82,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_KlustersApp.setMetaObject( metaObj );
    return metaObj;
}

void* KlustersApp::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "KlustersApp" ) )
	return this;
    return KDockMainWindow::qt_cast( clname );
}

bool KlustersApp::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: static_QUType_bool.set(_o,queryClose()); break;
    case 1: slotUpdateParameterBar(); break;
    case 2: executePreferencesDlg(); break;
    case 3: applyPreferences(); break;
    case 4: initializePreferences(); break;
    case 5: slotFileOpen(); break;
    case 6: slotFileImport(); break;
    case 7: slotFileOpenRecent((const KURL&)*((const KURL*)static_QUType_ptr.get(_o+1))); break;
    case 8: slotFileSave(); break;
    case 9: slotFileRenumberAndSave(); break;
    case 10: slotFileSaveAs(); break;
    case 11: slotFileClose(); break;
    case 12: slotFilePrint(); break;
    case 13: slotFileQuit(); break;
    case 14: slotUndo(); break;
    case 15: slotRedo(); break;
    case 16: slotKeyBindings(); break;
    case 17: slotViewMainToolBar(); break;
    case 18: slotViewStatusBar(); break;
    case 19: slotViewActionBar(); break;
    case 20: slotViewToolBar(); break;
    case 21: slotViewParameterBar(); break;
    case 22: slotViewClusterInfo(); break;
    case 23: slotWindowNewClusterDisplay(); break;
    case 24: slotWindowNewWaveformDisplay(); break;
    case 25: slotWindowNewCrosscorrelationDisplay(); break;
    case 26: slotWindowNewOverViewDisplay(); break;
    case 27: slotWindowNewGroupingAssistantDisplay(); break;
    case 28: slotNewTraceDisplay(); break;
    case 29: slotStatusMsg((const QString&)static_QUType_QString.get(_o+1)); break;
    case 30: viewMenuAboutToShow(); break;
    case 31: viewMenuActivated((int)static_QUType_int.get(_o+1)); break;
    case 32: slotSingleNew(); break;
    case 33: slotMultipleNew(); break;
    case 34: slotDeleteNoise(); break;
    case 35: slotDeleteArtefact(); break;
    case 36: slotZoom(); break;
    case 37: slotSelectTime(); break;
    case 38: slotSingleColorUpdate((int)static_QUType_int.get(_o+1)); break;
    case 39: slotUpdateShownClusters((QValueList<int>)(*((QValueList<int>*)static_QUType_ptr.get(_o+1)))); break;
    case 40: slotGroupClusters((QValueList<int>)(*((QValueList<int>*)static_QUType_ptr.get(_o+1)))); break;
    case 41: slotMoveClustersToNoise((QValueList<int>)(*((QValueList<int>*)static_QUType_ptr.get(_o+1)))); break;
    case 42: slotMoveClustersToArtefact((QValueList<int>)(*((QValueList<int>*)static_QUType_ptr.get(_o+1)))); break;
    case 43: slotImmediateSelection(); break;
    case 44: slotDelaySelection(); break;
    case 45: slotTabChange((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 46: slotUpdateDimensionX((int)static_QUType_int.get(_o+1)); break;
    case 47: slotUpdateDimensionY((int)static_QUType_int.get(_o+1)); break;
    case 48: slotDisplayClose(); break;
    case 49: slotUpdateUndoNb((int)static_QUType_int.get(_o+1)); break;
    case 50: slotUpdateRedoNb((int)static_QUType_int.get(_o+1)); break;
    case 51: slotUpdateStartTime((int)static_QUType_int.get(_o+1)); break;
    case 52: slotUpdateDuration(); break;
    case 53: slotTimeFrameMode(); break;
    case 54: setOverLayPresentation(); break;
    case 55: slotMeanPresentation(); break;
    case 56: slotIncreaseAmplitude(); break;
    case 57: slotDecreaseAmplitude(); break;
    case 58: slotSpikesTodisplay((int)static_QUType_int.get(_o+1)); break;
    case 59: slotUpdateCorrelogramsHalfDuration(); break;
    case 60: slotUpdateBinSize(); break;
    case 61: slotIncreaseCorrelogramsAmplitude(); break;
    case 62: slotDecreaseCorrelogramsAmplitude(); break;
    case 63: slotNoScale(); break;
    case 64: slotScaleByMax(); break;
    case 65: slotScaleByShouler(); break;
    case 66: slotShoulderLine(); break;
    case 67: slotUpdateErrorMatrix(); break;
    case 68: slotSelectAll(); break;
    case 69: slotSelectAllWO01(); break;
    case 70: slotRecluster(); break;
    case 71: slotStopRecluster(); break;
    case 72: slotProcessExited((KProcess*)static_QUType_ptr.get(_o+1)); break;
    case 73: slotOutputTreatmentOver(); break;
    case 74: renameActiveDisplay(); break;
    case 75: slotIncreaseAllChannelsAmplitude(); break;
    case 76: slotDecreaseAllChannelsAmplitude(); break;
    case 77: slotShowLabels(); break;
    case 78: slotShowNextCluster(); break;
    case 79: slotShowPreviousCluster(); break;
    case 80: slotSpikesDeleted(); break;
    case 81: slotClusterInformationModified(); break;
    default:
	return KDockMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool KlustersApp::qt_emit( int _id, QUObject* _o )
{
    return KDockMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool KlustersApp::qt_property( int id, int f, QVariant* v)
{
    return KDockMainWindow::qt_property( id, f, v);
}

bool KlustersApp::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
