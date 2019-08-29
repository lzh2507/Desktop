//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MatrixPluginListenerDelegate-Protocol.h"
#import "WCCrashBlockMonitorPluginReportDelegate-Protocol.h"

@class Matrix, NSMutableDictionary, NSString;
@protocol MatrixManagerDelegate, MatrixManagerReportDelegate, OS_dispatch_queue;

@interface MatrixManager : NSObject <MatrixPluginListenerDelegate, WCCrashBlockMonitorPluginReportDelegate>
{
    id <MatrixManagerDelegate> _delegate;
    id <MatrixManagerReportDelegate> _matrixReportDelegate;
    unsigned long long _strategyUin;
    NSObject<OS_dispatch_queue> *_reporterQueue;
    NSMutableDictionary *_reportIssueDict;
    Matrix *_matrix;
}

+ (id)sharedInstance;
+ (id)getLagReportStrategyTag;
+ (id)getCrashReportStrategyTag;
+ (unsigned long long)strategyReportEnvForTag:(id)arg1;
+ (void)strategyUpdateUploadCnt:(int)arg1 forTag:(id)arg2;
+ (_Bool)startegyIsMaxUploadCntForTag:(id)arg1;
+ (_Bool)strategyIsAutoReportForTag:(id)arg1;
+ (void)updateStrategy:(id)arg1 forTag:(id)arg2;
+ (void)setUinForStrategy:(unsigned long long)arg1;
@property(retain, nonatomic) Matrix *matrix; // @synthesize matrix=_matrix;
@property(retain, nonatomic) NSMutableDictionary *reportIssueDict; // @synthesize reportIssueDict=_reportIssueDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reporterQueue; // @synthesize reporterQueue=_reporterQueue;
@property(nonatomic) unsigned long long strategyUin; // @synthesize strategyUin=_strategyUin;
@property(nonatomic) __weak id <MatrixManagerReportDelegate> matrixReportDelegate; // @synthesize matrixReportDelegate=_matrixReportDelegate;
@property(nonatomic) __weak id <MatrixManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_callCustomIssueDelegate:(id)arg1 success:(_Bool)arg2;
- (void)p_callUploadCustomIssueDelegate:(id)arg1;
- (void)p_callMemoryStatIssueDelegate:(id)arg1 success:(_Bool)arg2;
- (void)p_callUploadMemStatIssueDelegate:(id)arg1;
- (void)p_callLagIssueDelegate:(id)arg1 success:(_Bool)arg2;
- (void)p_callUploadLagIssueDelegate:(id)arg1;
- (void)p_callCrashIssueDelegate:(id)arg1 success:(_Bool)arg2;
- (void)p_callUploadCrashIssueDelegate:(id)arg1;
- (_Bool)isNetworkAllowAutoReportLag:(id)arg1;
- (_Bool)isCanAutoReportLag:(id)arg1;
- (_Bool)isReportLagLimit:(id)arg1;
- (_Bool)isReportCrashLimit:(id)arg1;
- (void)notifyAppWillSuspend;
- (void)notifyAppBackgroundFetch;
- (void)uploadCustomIssue:(id)arg1;
- (int)getIssueTypeOfMatrixIssue:(id)arg1;
- (_Bool)uploadMatrixIssue:(id)arg1;
- (void)uploadMatrixIssueCompleted:(_Bool)arg1 withIssueID:(id)arg2;
- (void)onReportIssue:(id)arg1;
- (void)onDestroy:(id)arg1;
- (void)onStop:(id)arg1;
- (void)onStart:(id)arg1;
- (void)onInit:(id)arg1;
- (unsigned long long)lastRebootType;
- (id)getMemoryStatPlugin;
- (id)getCrashBlockPlugin;
- (void)installWithBuilder:(id)arg1;
- (id)init;
- (_Bool)isLagReportUploadCountLimit;
- (void)incrementLagReportUploadCount:(int)arg1;
- (_Bool)isCurrentNetworkAllowLagReport;
- (_Bool)canAutoLagReport;
- (void)updateVipLagReportStartegyWithSampleRatio:(float)arg1 withReportLimitCount:(unsigned long long)arg2 withNetworkEnv:(unsigned long long)arg3 withTimeout:(unsigned long long)arg4;
- (void)updateLagReportStartegyWithSampleRatio:(float)arg1 withReportLimitCount:(unsigned long long)arg2 withNetworkEnv:(unsigned long long)arg3;
- (_Bool)isCrashReportUploadCountLimit;
- (void)incrementCrashReportUploadCount:(int)arg1;
- (void)updateCrashReportStrategyWithReportLimitCount:(unsigned long long)arg1;
- (id)getReportCachePath;
- (id)getReportURL;
- (id)getReportHost;
- (id)getReportUserName;
- (unsigned int)getReportAppVersion;
- (unsigned int)getReportUin;
- (id)getReportCryptKeyWithVersion:(unsigned int)arg1 withDataSize:(unsigned int)arg2;
- (unsigned int)getReportProductID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

