//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableArray, NSObject, NSString, VideoEncodeTask;

@interface VideoEncodeMgr : MMService <MMService>
{
    VideoEncodeTask *_currentTask;
    NSMutableArray *_normalTaskQueue;
    NSMutableArray *_highPriorityTaskQueue;
    NSObject *_queueLockObject;
}

@property(retain, nonatomic) NSObject *queueLockObject; // @synthesize queueLockObject=_queueLockObject;
@property(retain, nonatomic) NSMutableArray *highPriorityTaskQueue; // @synthesize highPriorityTaskQueue=_highPriorityTaskQueue;
@property(retain, nonatomic) NSMutableArray *normalTaskQueue; // @synthesize normalTaskQueue=_normalTaskQueue;
@property(readonly, nonatomic) VideoEncodeTask *currentTask; // @synthesize currentTask=_currentTask;
- (void).cxx_destruct;
- (id)getParamsForNearbyAlbumVideoSize:(struct CGSize)arg1 duration:(double)arg2 fps:(float)arg3 videoBitrate:(float)arg4 audioSampleRate:(float)arg5 audioChannel:(unsigned int)arg6 audioBitrate:(float)arg7;
- (id)getParamsForNearbyVideoRecord;
- (id)getParamsForNearbyAlbumVideo:(id)arg1;
- (id)getParamsForNearbyAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (unsigned int)heightForStory:(unsigned int)arg1;
- (id)getAudioSettingWithParams:(id)arg1;
- (id)getVideoSettingWithParams:(id)arg1;
- (void)checkQueue;
- (void)addLowPriorityTask:(id)arg1;
- (void)addHighPriorityTask:(id)arg1;
- (id)getTaskWithVideoAsset:(id)arg1 inputPath:(id)arg2;
- (_Bool)makeTaskLowPriority:(id)arg1;
- (_Bool)makeTaskHighPriority:(id)arg1;
- (void)removeAllTasks;
- (void)removeTask:(id)arg1;
- (_Bool)isTaskInQueue:(id)arg1;
- (id)startNewTaskForAsset:(id)arg1 inputPath:(id)arg2 outputPath:(id)arg3 params:(id)arg4 isHighPriority:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)getVideoConfigForScene:(unsigned long long)arg1;
- (long long)getTimeMinuteCountFrom:(id)arg1;
- (void)setDefaultStepConfigs:(id)arg1;
- (id)getParamsForGameVideo:(id)arg1;
- (id)getParamsForStoryVideoRecord;
- (id)getParamsForStoryAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (id)getParamsForStoryAlbumVideo:(id)arg1;
- (id)getParamsForMomentVideoRecord;
- (id)getParamsForChatVideoRecord;
- (id)getParamsForChatAlbumVideoSize:(struct CGSize)arg1 duration:(double)arg2 fps:(float)arg3 videoBitrate:(float)arg4 audioSampleRate:(float)arg5 audioChannel:(unsigned int)arg6 audioBitrate:(float)arg7;
- (id)getParamsForStoryAlbumVideoSize:(struct CGSize)arg1 duration:(double)arg2 fps:(float)arg3 videoBitrate:(float)arg4 audioSampleRate:(float)arg5 audioChannel:(unsigned int)arg6 audioBitrate:(float)arg7;
- (id)getParamsForMomentAlbumVideoSize:(struct CGSize)arg1 duration:(double)arg2 fps:(float)arg3 videoBitrate:(float)arg4 audioSampleRate:(float)arg5 audioChannel:(unsigned int)arg6 audioBitrate:(float)arg7;
- (id)getParamsForMomentAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (id)getParamsForMomentAlbumVideo:(id)arg1;
- (id)getParamsForCompressChatAlbumVideo:(id)arg1;
- (id)getParamsForChatAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (id)getParamsForChatAlbumVideo:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

