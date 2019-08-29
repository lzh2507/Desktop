//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"
#import "WCTaskUploaderDelegate-Protocol.h"

@class FIFOFileQueue, NSDate, NSMutableArray, NSString, WCTaskUploader;
@protocol WCUploadMgrDelegate;

@interface WCUploadMgr : MMObject <WCTaskUploaderDelegate, INetworkStatusMgrExt, ICdnComMgrExt>
{
    FIFOFileQueue *m_taskQueue;
    NSMutableArray *m_failedQueue;
    NSMutableArray *m_succeedItems;
    id <WCUploadMgrDelegate> m_delegate;
    _Bool m_taskRunning;
    WCTaskUploader *m_taskUploader;
    NSDate *m_dateLastNotifySentFail;
}

@property(nonatomic) __weak id <WCUploadMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)OnCdnInit;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (void)restartAllFailUploadFromLocalNotification;
- (void)onUploadFailNotify:(id)arg1;
- (void)onUploadFinished:(id)arg1;
- (void)onMediaUploadFinished:(id)arg1 task:(id)arg2;
- (void)saveCurrentTask;
- (void)notifyUploadFailStatusChanged:(id)arg1;
- (void)notifyUploadRestart:(id)arg1;
- (void)notifyUploadFailed:(id)arg1;
- (void)notifyUploadFinished:(id)arg1;
- (void)addUploadTask:(id)arg1;
- (void)deleteUploadTaskWithDataIem:(id)arg1;
- (void)restartUploadTaskWithDataIem:(id)arg1;
- (void)TryStartTask;
- (void)setTaskFail:(id)arg1;
- (_Bool)cleanFailDataItemForSpam:(id)arg1;
- (void)deleteHomepageSucceedUploads:(id)arg1;
- (void)deleteTimelineSucceedUploads:(id)arg1;
- (void)doDeleteSucceedUploads:(id)arg1 from:(id)arg2;
- (id)getHomepageSucceedUploads;
- (id)getTimelineSucceedUploads;
- (void)addSucceedUpload:(id)arg1;
- (id)getFailedUploads;
- (id)getInQueueUploads;
- (void)cleanUpForTask:(id)arg1;
- (void)setClientIDForMedia:(id)arg1;
- (_Bool)saveSucceedItems;
- (_Bool)loadSucceedItems;
- (_Bool)saveFailedQueue;
- (_Bool)loadFailedQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

