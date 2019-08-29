//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString, WAPageFlowAppInfo, WAPageFlowObject, WAPageFlowSessionInfo;

@interface WAPageFlowReportMgr : MMService <MMService>
{
    WAPageFlowObject *m_currentPage;
    unsigned int m_EntranceWebviewID;
    unsigned int m_lastClickTime;
    unsigned long long m_lastClickTimeInMs;
    NSMutableDictionary *m_preSceneMap;
    NSMutableDictionary *m_preSceneInfoMap;
    NSString *m_weappUsername;
    unsigned long long m_weappFromScene;
    unsigned long long m_weappRealStartUpTimeInMs;
    WAPageFlowAppInfo *_currentAppInfo;
    WAPageFlowSessionInfo *_currentSessionInfo;
}

@property(retain, nonatomic) WAPageFlowSessionInfo *currentSessionInfo; // @synthesize currentSessionInfo=_currentSessionInfo;
@property(retain, nonatomic) WAPageFlowAppInfo *currentAppInfo; // @synthesize currentAppInfo=_currentAppInfo;
- (void).cxx_destruct;
- (id)webviewReportPluginInWebview:(id)arg1;
- (id)genQuery:(id)arg1;
- (id)genBasePath:(id)arg1;
- (id)preSceneNoteForUrlIfExist:(id)arg1;
- (unsigned long long)preSceneForUrlIfExist:(id)arg1;
- (void)rigisterPreScene:(unsigned long long)arg1 preSourceInfo:(id)arg2 forUrl:(id)arg3;
- (id)genDefaultPagePVItem;
- (void)onUserOperate;
- (void)onAppExit:(unsigned int)arg1 onPage:(id)arg2;
- (void)onBackFromNative:(id)arg1;
- (void)onBackOnPage:(id)arg1 toPage:(id)arg2;
- (void)onTargetToWebPage:(id)arg1;
- (void)onTargetToNativaPage:(id)arg1;
- (void)onTargetToWeApp:(id)arg1 appid:(id)arg2;
- (void)onTargetToPage:(id)arg1 toWebviewIfExist:(id)arg2;
- (void)onWebViewIndexFinished;
- (void)onBackFromLauchWeApp;
- (void)onFirstPageInit:(id)arg1 query:(id)arg2 homeWebview:(id)arg3;
- (void)onWeAppBecomeActive:(id)arg1 appInfo:(id)arg2 openFromWeApp:(_Bool)arg3;
- (void)onWeAppStartUpProcessTerminate:(unsigned int)arg1;
- (void)onWeAppProcessTriggerDownload;
- (void)onWeAppProcessRelaunchHomeInSessionInfo:(id)arg1;
- (void)onWeAppProcessBegin:(id)arg1;
- (unsigned int)lastClickTimeStamp;
- (id)currentPage;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

