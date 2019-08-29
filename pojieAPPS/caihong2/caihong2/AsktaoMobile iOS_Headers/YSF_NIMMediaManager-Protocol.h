//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YSF_NIMAudioToTextOption;
@protocol YSF_NIMMediaManagerDelgate;

@protocol YSF_NIMMediaManager <NSObject>
@property(nonatomic) _Bool needProximityMonitor;
@property(nonatomic) double recordProgressUpdateTimeInterval;
- (void)setDeactivateAudioSessionAfterComplete:(_Bool)arg1;
- (void)transAudioToText:(YSF_NIMAudioToTextOption *)arg1 result:(void (^)(NSError *, NSString *))arg2;
- (float)recordAveragePower;
- (float)recordPeakPower;
- (void)cancelRecord;
- (void)stopRecord;
- (void)recordAudioForDuration:(double)arg1 withDelegate:(id <YSF_NIMMediaManagerDelgate>)arg2;
- (_Bool)isRecording;
- (void)stopPlay;
- (void)playAudio:(NSString *)arg1 withDelegate:(id <YSF_NIMMediaManagerDelgate>)arg2;
- (_Bool)isPlaying;
- (_Bool)switchAudioOutputDevice:(long long)arg1;
@end

