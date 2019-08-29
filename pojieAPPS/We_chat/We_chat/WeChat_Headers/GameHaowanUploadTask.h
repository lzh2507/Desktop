//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class GameHaowanContinueState, NSArray, NSDictionary;
@protocol GameHaowanUploadTaskDelegate;

@interface GameHaowanUploadTask : MMObject
{
    NSArray *_mediaList;
    GameHaowanContinueState *_continueState;
    _Bool _isStarted;
    unsigned int _currentRetryCount;
    id <GameHaowanUploadTaskDelegate> _delegate;
    NSDictionary *_trackEventProps;
}

@property(retain, nonatomic) NSDictionary *trackEventProps; // @synthesize trackEventProps=_trackEventProps;
@property(nonatomic) __weak id <GameHaowanUploadTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)reportObjWithAction:(int)arg1;
- (void)trackEventUploadAction:(int)arg1 block:(CDUnknownBlockType)arg2;
- (id)generateFileKey:(id)arg1;
- (_Bool)reachRetryLimit;
- (id)retryLimitMessage;
- (double)nextRetryDelay;
- (void)handleUploadContinueData;
- (void)onStop;
- (void)onStart:(id)arg1;
- (void)handleUploadContinueSubState:(id)arg1;
- (void)handleUploadProgress:(float)arg1;
- (void)handleUploadSucceed:(id)arg1;
- (void)handleUploadFailed:(int)arg1 message:(id)arg2;
- (void)scheduleRetry;
- (void)retryUpload;
- (void)startUpload;
- (void)stop;
- (void)start;
- (id)initWithMediaList:(id)arg1 andContinueData:(id)arg2;

@end

