//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCBasePlayer : NSObject
{
    _Bool _isPlaying;
    _Bool _isPause;
    _Bool _isMute;
}

+ (void)enableCorePlayVolumeLevelCal:(_Bool)arg1;
+ (unsigned int)getCorePlayVolumeLevel;
+ (void)setAudioCorePlayDelegate:(id)arg1;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(readonly, nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (id)queryData:(int)arg1;
- (long long)stopPlay;
- (long long)resetPlay;
- (long long)resumePlay;
- (long long)pausePlay;
- (long long)playAudio:(id)arg1;
- (long long)startPlay;

@end

