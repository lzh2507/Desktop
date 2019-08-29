//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol YSF_NIMAudioPlayerDelegate;

@interface YSF_NIMAudioPlayer : NSObject
{
    struct AQPlayer *_aqPlayer;
    _Bool _isCanceled;
    _Bool _isNeedProximityMonitor;
    _Bool _autoDeactivateAudioSession;
    id <YSF_NIMAudioPlayerDelegate> _delegate;
    NSString *_filepath;
    NSString *_playFilepath;
}

@property(retain, nonatomic) NSString *playFilepath; // @synthesize playFilepath=_playFilepath;
@property(nonatomic) _Bool autoDeactivateAudioSession; // @synthesize autoDeactivateAudioSession=_autoDeactivateAudioSession;
@property(nonatomic) _Bool isNeedProximityMonitor; // @synthesize isNeedProximityMonitor=_isNeedProximityMonitor;
@property(retain, nonatomic) NSString *filepath; // @synthesize filepath=_filepath;
@property(nonatomic) __weak id <YSF_NIMAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)currentTime;
@property(readonly, nonatomic) float peakPower;
@property(readonly, nonatomic) float averagePower;
- (_Bool)isPlaying;
- (void)performDelegateSelector:(SEL)arg1;
- (void)onAudioRouteChange:(id)arg1;
- (void)onPlayerEnd:(id)arg1;
- (void)onPlayerInterruptEnd:(id)arg1;
- (void)onPlayerInterruptBegin:(id)arg1;
- (void)onPlayerError:(id)arg1;
- (void)onSensorStateChange:(id)arg1;
- (void)stop;
- (_Bool)play:(id)arg1;
- (void)resetAudioSessionBeforePlaying;
- (void)resetAudioSessionAfterPlaying;
- (void)cancelPreviousPlayer;
- (void)removeListenEvents;
- (void)addListenEvents;
- (void)dealloc;
- (id)init;

@end
