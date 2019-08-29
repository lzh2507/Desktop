//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableArray, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface WCLanDeviceMgr : MMService <MMService>
{
    long long m_taskId;
    NSMutableArray *m_tasks;
    NSRecursiveLock *m_lock;
    int m_libInitCount;
    NSObject<OS_dispatch_queue> *m_myQueue;
}

- (void).cxx_destruct;
- (void)sendAsync:(long long)arg1 DeviceType:(id)arg2 DeviceID:(id)arg3 MSG:(id)arg4;
- (id)getDictionaryFromJson:(id)arg1;
- (id)getTaskForSubTaskId:(int)arg1;
- (void)deleteTask:(long long)arg1;
- (id)getTaskForTaskId:(long long)arg1;
- (void)safeAddTask:(id)arg1;
- (_Bool)genSendFileRequestInfo:(id)arg1 FileName:(id)arg2 AndBuffer:(struct AutoBuffer *)arg3;
- (_Bool)genDeviceInfo:(id)arg1 DeviceId:(id)arg2 AndBuffer:(struct AutoBuffer *)arg3;
- (void)c2objc_onWCLanReceiveNotify:(id)arg1 Data:(id)arg2;
- (void)c2objc_onWCLanFileTransferUpdate:(int)arg1 Data:(id)arg2;
- (void)c2objc_onWCLanDeviceConnectStateNotify:(id)arg1 StateCode:(int)arg2;
- (void)c2objc_onWCLanReceiveResponse:(int)arg1 Data:(id)arg2;
- (void)c2objc_onWCLanDeviceUdpError:(int)arg1;
- (void)c2objc_onReceiveWCLanDeviceProfile:(id)arg1;
- (void)c2objc_onReceiveWCLanDeviceDiscPackage:(id)arg1;
- (long long)sendFileToWCLanDevice:(id)arg1 DeviceId:(id)arg2 JsonMsg:(id)arg3 Paht:(id)arg4;
- (long long)sendDataToWCLanDevice:(id)arg1 DeviceId:(id)arg2 JsonMsg:(id)arg3;
- (long long)disconnectToWCLanDevice:(id)arg1 DeviceId:(id)arg2;
- (long long)connectToWCLanDevice:(id)arg1 DeviceId:(id)arg2 willRetryConnect:(_Bool)arg3;
- (long long)cancelWCLanDeviceTask:(long long)arg1;
- (long long)stopScanWCLanDevice;
- (long long)startScanWCLanDevice;
- (long long)releaseWCLanDeviceLib;
- (long long)initWCLanDeviceLib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

