//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;
@protocol KSCrashReportFilter;

@interface KSCrash : NSObject
{
    _Bool _introspectMemory;
    _Bool _catchZombies;
    _Bool _addConsoleLogToReport;
    _Bool _printPreviousLog;
    int _deleteBehaviorAfterSendAll;
    int _monitoring;
    int _demangleLanguages;
    int _maxReportCount;
    id <KSCrashReportFilter> _sink;
    NSDictionary *_userInfo;
    double _deadlockWatchdogInterval;
    CDUnknownFunctionPointerType _onCrash;
    CDUnknownFunctionPointerType _onHandleSignalCallBack;
    CDUnknownFunctionPointerType _onWritePointThread;
    NSString *_bundleName;
    NSString *_basePath;
    NSArray *_doNotIntrospectClasses;
    CDUnknownFunctionPointerType _onInnerHandleSignalCallBack;
}

+ (void)setCustomFullVersion:(id)arg1 shortVersion:(id)arg2;
+ (id)sharedInstance;
@property(nonatomic) CDUnknownFunctionPointerType onInnerHandleSignalCallBack; // @synthesize onInnerHandleSignalCallBack=_onInnerHandleSignalCallBack;
@property(nonatomic) int maxReportCount; // @synthesize maxReportCount=_maxReportCount;
@property(nonatomic) _Bool printPreviousLog; // @synthesize printPreviousLog=_printPreviousLog;
@property(nonatomic) _Bool addConsoleLogToReport; // @synthesize addConsoleLogToReport=_addConsoleLogToReport;
@property(nonatomic) int demangleLanguages; // @synthesize demangleLanguages=_demangleLanguages;
@property(retain, nonatomic) NSArray *doNotIntrospectClasses; // @synthesize doNotIntrospectClasses=_doNotIntrospectClasses;
@property(nonatomic) _Bool catchZombies; // @synthesize catchZombies=_catchZombies;
@property(nonatomic) _Bool introspectMemory; // @synthesize introspectMemory=_introspectMemory;
@property(retain, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(retain, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(nonatomic) CDUnknownFunctionPointerType onWritePointThread; // @synthesize onWritePointThread=_onWritePointThread;
@property(nonatomic) CDUnknownFunctionPointerType onHandleSignalCallBack; // @synthesize onHandleSignalCallBack=_onHandleSignalCallBack;
@property(nonatomic) CDUnknownFunctionPointerType onCrash; // @synthesize onCrash=_onCrash;
@property(nonatomic) double deadlockWatchdogInterval; // @synthesize deadlockWatchdogInterval=_deadlockWatchdogInterval;
@property(nonatomic) int monitoring; // @synthesize monitoring=_monitoring;
@property(nonatomic) int deleteBehaviorAfterSendAll; // @synthesize deleteBehaviorAfterSendAll=_deleteBehaviorAfterSendAll;
@property(retain, nonatomic) id <KSCrashReportFilter> sink; // @synthesize sink=_sink;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (id)nullTerminated:(id)arg1;
- (void)deleteReportWithID:(id)arg1 withStorePath:(id)arg2;
- (void)deleteReportWithID:(id)arg1;
- (id)reportWithStringID:(id)arg1;
- (id)loadCrashReportJSONWithStringID:(id)arg1;
- (id)reportIDFromFilename:(id)arg1;
- (id)allReportIDWithPath:(id)arg1;
- (id)allReportID;
- (id)pathToCrashReportWithID:(id)arg1 withStorePath:(id)arg2;
- (id)pathToCrashReportWithID:(id)arg1;
- (id)crashReportFileNameWithID:(id)arg1;
- (id)allReports;
- (id)reportWithID:(long long)arg1;
- (void)doctorReport:(id)arg1;
- (id)loadCrashReportJSONWithID:(long long)arg1;
- (void)sendReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int reportCount;
@property(readonly, nonatomic) _Bool crashedLastLaunch;
@property(readonly, nonatomic) int sessionsSinceLaunch;
@property(readonly, nonatomic) double backgroundDurationSinceLaunch;
@property(readonly, nonatomic) double activeDurationSinceLaunch;
@property(readonly, nonatomic) int sessionsSinceLastCrash;
@property(readonly, nonatomic) int launchesSinceLastCrash;
@property(readonly, nonatomic) double backgroundDurationSinceLastCrash;
@property(readonly, nonatomic) double activeDurationSinceLastCrash;
- (void)reportUserException:(id)arg1 reason:(id)arg2 language:(id)arg3 lineOfCode:(id)arg4 stackTrace:(id)arg5 logAllThreads:(_Bool)arg6 terminateProgram:(_Bool)arg7 dumpFilePath:(id)arg8 dumpType:(int)arg9;
- (void)reportUserException:(id)arg1 reason:(id)arg2 language:(id)arg3 lineOfCode:(id)arg4 stackTrace:(id)arg5 logAllThreads:(_Bool)arg6 terminateProgram:(_Bool)arg7;
- (void)deleteAllReports;
- (void)sendAllReportsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)install;
@property(readonly, nonatomic) NSDictionary *systemInfo;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)init;

@end

