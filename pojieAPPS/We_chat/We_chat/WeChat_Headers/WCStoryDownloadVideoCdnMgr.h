//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WCStoryDownloadTaskInfo;

@interface WCStoryDownloadVideoCdnMgr : MMObject <ICdnComMgrExt, INetworkStatusMgrExt>
{
    unsigned int _lastPreloadChatRoomTime;
    NSMutableDictionary *_dicIplist;
    WCStoryDownloadTaskInfo *_curTaskInfo;
    NSMutableArray *_arrPreloadQueue;
    NSMutableDictionary *_dicPreloadingTask;
    NSArray *_arrBadNetworkPreload;
    NSArray *_arrSmoothNetworkPreload;
}

@property(nonatomic) unsigned int lastPreloadChatRoomTime; // @synthesize lastPreloadChatRoomTime=_lastPreloadChatRoomTime;
@property(retain, nonatomic) NSArray *arrSmoothNetworkPreload; // @synthesize arrSmoothNetworkPreload=_arrSmoothNetworkPreload;
@property(retain, nonatomic) NSArray *arrBadNetworkPreload; // @synthesize arrBadNetworkPreload=_arrBadNetworkPreload;
@property(retain, nonatomic) NSMutableDictionary *dicPreloadingTask; // @synthesize dicPreloadingTask=_dicPreloadingTask;
@property(retain, nonatomic) NSMutableArray *arrPreloadQueue; // @synthesize arrPreloadQueue=_arrPreloadQueue;
@property(retain, nonatomic) WCStoryDownloadTaskInfo *curTaskInfo; // @synthesize curTaskInfo=_curTaskInfo;
@property(retain, nonatomic) NSMutableDictionary *dicIplist; // @synthesize dicIplist=_dicIplist;
- (void).cxx_destruct;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 durationSec:(unsigned int)arg4;
- (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)OnCdnDownloadPartialData:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnVideoMoovReady:(id)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)OnCdnVideoPreloadEnd:(id)arg1;
- (void)videoSourceChange:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)report16664WithPreloadTaskInfo:(id)arg1;
- (void)realStartDownload:(id)arg1;
- (void)downloadTask:(id)arg1;
- (_Bool)IsStreamDownloadingWithMediaItem:(id)arg1;
- (struct C2CDownloadResult)StopDownloadTaskWithClientId:(id)arg1;
- (struct C2CDownloadResult)StopVideoDownloadWithMediaWrap:(id)arg1;
- (void)StartVideoStreamDownloadWithMediaWrap:(id)arg1;
- (void)CheckPreloadQueue;
- (void)StartPreloadSNSEntranceWithItems:(id)arg1;
- (void)StartPreloadChatRoomVideoWithMediaItem:(id)arg1;
- (void)StartVideoPreloadWithItems:(id)arg1;
- (void)DoDnsWithTaskInfo:(id)arg1;
- (void)cleanTaskForStreamTaksInfo:(id)arg1;
- (void)stopNotNeedPreloadTasks:(id)arg1;
- (_Bool)IsNetWorkSmooth;
- (_Bool)IsTaskNeedPreload:(id)arg1;
- (id)generateDownloadTaskInfoWith:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

