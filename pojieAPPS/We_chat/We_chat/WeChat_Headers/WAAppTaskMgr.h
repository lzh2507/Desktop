//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMinimizeTaskDelegateInterface-Protocol.h"
#import "MMService-Protocol.h"
#import "WAAppTaskDelegate-Protocol.h"
#import "WAGameTaskMgrExt-Protocol.h"

@class MMTimer, NSMutableArray, NSMutableDictionary, NSObject, NSString, WAMemoryPressureRecord, WATopSessionTaskInfoStorage;
@protocol OS_dispatch_source;

@interface WAAppTaskMgr : MMService <IMinimizeTaskDelegateInterface, WAAppTaskDelegate, WAGameTaskMgrExt, MMService>
{
    NSMutableArray *_arrJumpList;
    MMTimer *_timerCheckBackgroundTask;
    NSString *_curBackToChatAppID;
    NSString *_curBackToChatDefaultName;
    WATopSessionTaskInfoStorage *_topSessionTaskInfoStorage;
    NSString *_curRemoteDebugAppID;
    NSString *_curRemoteDebugQrCodeID;
    _Bool _shouldShowMemAlertWhenProtectSimulatedWeApp;
    NSMutableArray *_tmpWebviewForMemTest;
    NSObject<OS_dispatch_source> *_memoryWarningLevelSource;
    NSMutableDictionary *_dicAppID2Task;
    unsigned long long _lastMemoryWaringTimeStamp;
    unsigned long long _lastMemoryWarningPressureFlag;
    unsigned long long _currentMemoryWarningPressureFlag;
    WAMemoryPressureRecord *_memoryPressureRecord;
}

+ (id)genTitleTailWithDebugMode:(unsigned int)arg1;
+ (id)minimizeTaskDataFromWeAppTask:(id)arg1 isManually:(_Bool)arg2;
+ (id)minimizationTaskKeyWithAppID:(id)arg1 debbugMode:(unsigned int)arg2;
@property(retain, nonatomic) WAMemoryPressureRecord *memoryPressureRecord; // @synthesize memoryPressureRecord=_memoryPressureRecord;
@property(nonatomic) unsigned long long currentMemoryWarningPressureFlag; // @synthesize currentMemoryWarningPressureFlag=_currentMemoryWarningPressureFlag;
@property(nonatomic) unsigned long long lastMemoryWarningPressureFlag; // @synthesize lastMemoryWarningPressureFlag=_lastMemoryWarningPressureFlag;
@property(nonatomic) unsigned long long lastMemoryWaringTimeStamp; // @synthesize lastMemoryWaringTimeStamp=_lastMemoryWaringTimeStamp;
@property(retain, nonatomic) NSMutableDictionary *dicAppID2Task; // @synthesize dicAppID2Task=_dicAppID2Task;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningLevelSource; // @synthesize memoryWarningLevelSource=_memoryWarningLevelSource;
- (void).cxx_destruct;
- (void)genWebviewForMemWarning;
- (_Bool)shouldShowMemAlert;
- (void)switchMemAlert;
- (void)updateCurrentRemoteDebugQrCodeID:(id)arg1;
- (id)getCurrentRemoteDebugQrCodeID;
- (void)updateCurrentRemoteDebugAppID:(id)arg1;
- (id)getCurrentRemoteDebugAppID;
- (void)resumeAllGame:(_Bool)arg1;
- (void)pauseAllGame;
- (id)allGameViewController;
- (_Bool)isWeAppStatusBarHidden;
- (_Bool)isWeAppScreenOn;
- (void)removeCurBackToChatState;
- (_Bool)isAppTaskBackingToChat:(id)arg1;
- (id)getCurrentBackToChatAppTaskBannerLogoUrl;
- (id)getCurrentBackToChatAppTaskBannerText;
- (id)getCurrentBackToChatAppTask;
- (unsigned long long)getCurrentBackToChatDebugType;
- (id)getCurrentBackToChatStackPaths;
- (id)getCurrentBackToChatRelativePath;
- (id)getCurrentBackToChatAppId;
- (void)updateCurrentBannerText:(id)arg1;
- (void)updateCurrentBackToChatState;
- (void)markBackToChatWithAppID:(id)arg1 usrName:(id)arg2 relativePath:(id)arg3 debugModeType:(unsigned long long)arg4;
- (unsigned int)maxGameTaskRunningCount;
- (unsigned int)maxSharedResourceBackgroundTaskRunningCount;
- (unsigned int)maxTaskRunningCount;
- (void)onTimerCheckBackgroundTask:(id)arg1;
- (void)invadateCheckBackgroundTaskTimer;
- (void)startCheckBackgroundTaskTimer;
- (void)taskEnterBackgroundWithAppID:(id)arg1 andRelativePath:(id)arg2;
- (void)taskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)taskDidClose:(id)arg1;
- (void)taskDidOpen:(id)arg1;
- (void)checkAndCloseExceedMaxConcurrentCountTask;
- (_Bool)isGameBackgroundTaskAllowToClose:(id)arg1;
- (void)checkGameAppBackgroundTask:(id)arg1;
- (void)closeAllWebViewInNavigatorTask;
- (void)closeTimeoutBackgoundTask;
- (void)closeBackgroundTask:(_Bool)arg1 inScene:(unsigned long long)arg2;
- (void)closeAllTaskUseTips:(_Bool)arg1 tipTitle:(id)arg2 tipContent:(id)arg3 includeForeSimulatedNative:(_Bool)arg4 reason:(unsigned long long)arg5;
- (void)onAppTaskClose:(id)arg1;
- (void)closeGameTaskOnNavigationController:(id)arg1;
- (void)closeTask:(id)arg1 reason:(unsigned long long)arg2;
- (void)closeTask:(id)arg1;
- (void)deleteTask:(id)arg1;
- (void)callOnTerminateAppID:(id)arg1;
- (void)endRemoteDebugIfNeededForAppid:(id)arg1;
- (id)allTaskArray;
- (_Bool)isNeedCloseAppTaskToOpenPagePath:(id)arg1 appID:(id)arg2 appType:(unsigned int)arg3;
- (_Bool)isNeedNewTask:(id)arg1 pagePath:(id)arg2 appType:(unsigned int)arg3;
- (id)getTaskWithAppID:(id)arg1;
- (id)getAndNewTaskIfNotExistWithAppID:(id)arg1 relativeURL:(id)arg2 taskExtInfo:(id)arg3 debugModeType:(unsigned int)arg4 isNewTask:(_Bool *)arg5 isJumpFromWeApp:(_Bool)arg6;
- (_Bool)isReachMaxSharedResourceBackgroundAppCount;
- (unsigned int)currentSharedResourceBackgroundAppCount;
- (_Bool)isExistVideoForegroundPlaying;
- (_Bool)isExistAppLivePlaying;
- (_Bool)isExistAppLiveForegroundPlaying;
- (_Bool)isExistAppLivePushing;
- (_Bool)isExistAppInnerAudioPlaying;
- (_Bool)isExistAppRecording;
- (_Bool)hasGameTaskOnNavigationController:(id)arg1;
- (id)firstAppIdFromRootViewController:(id)arg1;
- (id)getForegroundAppID;
- (unsigned long long)getAppTaskCount;
- (_Bool)getWeAppTaskInfo:(id)arg1;
- (void)sendJSEventToTaskAllWebView:(id)arg1 withAppID:(id)arg2 param:(id)arg3 toWebviews:(id)arg4;
- (void)closeTaskWithAppID:(id)arg1 reason:(unsigned long long)arg2;
- (void)closeTaskWithAppID:(id)arg1;
- (_Bool)isReachMaxWebViewDepthWithAppID:(id)arg1;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopAllParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openAppTaskWithContact:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3 handlerWrapper:(id)arg4;
- (void)onServiceEnterBackground;
- (void)reportForegroundForceCloseForTask:(id)arg1 forceType:(unsigned long long)arg2;
- (void)reportAllAppForceCloseDoneWithForceType:(unsigned long long)arg1;
- (void)reportAllAppForceCloseWithForceType:(unsigned long long)arg1;
- (void)onDispatchSourceDidReceiveMemoryPressure:(unsigned long long)arg1;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)fireMemoryWarningEventToActiveTasks;
- (void)unregisterMemoryWarningLevelListener;
- (void)registerMemoryWarningLevelListener;
- (void)unregisterMemoryPressureRecord;
- (void)registerMemoryPressureRecord;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)removeTopSesionTaskInfo;
- (void)saveTopSessionTaskInfo:(id)arg1;
- (void)loadTopSessionTaskInfo;
- (void)dealloc;
- (id)init;
- (_Bool)isFormJumpWeAppRingWithFromAppId:(id)arg1 toAppId:(id)arg2;
- (unsigned long long)getJumpRoleWithAppId:(id)arg1;
- (void)addJumpWeAppRelationWithFromAppId:(id)arg1 toAppId:(id)arg2 jumpScene:(unsigned long long)arg3;
- (void)generateJumpWeAppOperation:(id *)arg1 withAppId:(id)arg2 extInfo:(id)arg3;
- (id)lastAppIDWithViewController:(id)arg1;
- (void)addNativeJumpWeAppRefererInfoIfHave:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3;
- (void)clearJumpList;
- (void)removeJumpWeAppLastInfo;
- (id)getAppIdListFromJumpWeAppList;
- (void)getJumpWeAppLastInfo:(id *)arg1 fromInfo:(id *)arg2 withAppId:(id)arg3;
- (void)addJumpWeAppRelationIfHave:(id)arg1;
- (void)processJumpWeAppBeforeOpenTaskWithAppId:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3 getOperation:(id *)arg4;
- (void)jumpWeAppCateGoryOnServiceClearData;
- (void)jumpWeAppCategoryOnServiceReloadData;
- (void)jumpWeAppCategoryOnServiceInit;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)stopActivityWithStateList:(id)arg1 AppTask:(id)arg2;
- (void)onPositiveTaskCloseBtnClick:(id)arg1 CloseFromState:(_Bool)arg2;
- (void)onLeaveTaskDoneAndWillEnterAnother:(id)arg1;
- (void)onRemoveTask:(id)arg1;
- (void)onEnterTask:(id)arg1 FromFloatingView:(id)arg2 EnterTaskScene:(int)arg3;
- (id)getAppTaskWithMinimizationTaskKey:(id)arg1;
- (_Bool)maximizeAppTask:(id)arg1;
- (void)unminimizeAppTask:(id)arg1;
- (_Bool)updateMinimizedTask:(id)arg1 manually:(_Bool)arg2;
- (_Bool)minimizeAppTask:(id)arg1 manually:(_Bool)arg2;
- (_Bool)isAppTaskManuallyMinimized:(id)arg1;
- (_Bool)isAppTaskMinimized:(id)arg1;
- (_Bool)canMinimizeAppTaskOrShowTips:(id)arg1;
- (_Bool)isAppTaskSupportMinimization:(id)arg1;
- (void)taskDidResignBackgroundLocating:(id)arg1;
- (void)taskDidTriggerBackgroundLocating:(id)arg1;
- (unsigned int)backgroundLocatingAppCount;
- (id)backgroundLocatingAppList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

