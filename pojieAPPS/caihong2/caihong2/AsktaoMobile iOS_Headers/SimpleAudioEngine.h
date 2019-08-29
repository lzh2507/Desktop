//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CDAudioInterruptProtocol-Protocol.h"

@class NSString;

@interface SimpleAudioEngine : NSObject <CDAudioInterruptProtocol>
{
    _Bool mute_;
    _Bool enabled_;
}

+ (void)end;
+ (id)alloc;
+ (id)sharedEngine;
- (void)setEffectVolume:(unsigned int)arg1 volume:(float)arg2;
@property(readonly) float backgourndMusicDuration;
@property(readonly) float backgroundMusicPosition;
- (id)soundSourceForFile:(id)arg1;
@property float effectsVolume;
@property float backgroundMusicVolume;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)enabled;
- (void)setMute:(_Bool)arg1;
- (_Bool)mute;
- (void)unloadEffect:(id)arg1;
- (void)preloadEffect:(id)arg1;
- (void)stopAllEffects;
- (void)resumeAllEffects;
- (void)resumeEffect:(unsigned int)arg1;
- (void)pauseAllEffects;
- (void)pauseEffect:(unsigned int)arg1;
- (void)stopEffect:(unsigned int)arg1;
- (unsigned int)playEffect:(id)arg1 loop:(_Bool)arg2 pitch:(float)arg3 pan:(float)arg4 gain:(float)arg5;
- (unsigned int)playEffect:(id)arg1 loop:(_Bool)arg2;
@property(readonly) _Bool willPlayBackgroundMusic;
- (_Bool)isBackgroundMusicPlaying;
- (void)seekBackgroundMusic:(float)arg1;
- (void)rewindBackgroundMusic;
- (void)resumeBackgroundMusic;
- (void)pauseBackgroundMusic;
- (void)stopBackgroundMusic;
- (void)playBackgroundMusic:(id)arg1 loop:(_Bool)arg2;
- (void)playBackgroundMusic:(id)arg1;
- (void)preloadBackgroundMusic:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

