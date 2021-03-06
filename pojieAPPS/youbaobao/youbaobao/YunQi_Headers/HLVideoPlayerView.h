//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYVPlayerView.h"

#import "CommonVScrubberDelegate-Protocol.h"

@class CommonVLoadingView, CommonVProgressView, HLBottomControl, HLPlayButton, HLReplayView, HLRetryView, HLTopControl, HLVTheme, IMYVCelluarHintView, NSMutableArray, NSString, UIButton, UIImageView;

@interface HLVideoPlayerView : IMYVPlayerView <CommonVScrubberDelegate>
{
    _Bool _isControlsHidden;
    _Bool _isPlayCountdownAnimating;
    _Bool _inhibitCellularHud;
    _Bool _didShowNetWorkDisable;
    _Bool _realLoading;
    HLVTheme *_theme;
    HLTopControl *_topControl;
    HLBottomControl *_bottomControl;
    CommonVLoadingView *_loadingView;
    HLPlayButton *_playButton;
    HLReplayView *_replayView;
    CommonVProgressView *_progressView;
    HLRetryView *_retryView;
    UIImageView *_coverImageView;
    long long _controlHideCountDown;
    long long _controlsAutoHideTime;
    NSMutableArray *_customControls;
    NSMutableArray *_portraitControls;
    NSMutableArray *_landscapeControls;
    NSMutableArray *_controls;
    long long _seekingState;
    UIButton *_cancelButton;
    IMYVCelluarHintView *_cellularHintView;
}

+ (id)shareSystemVolumeView;
+ (id)shareSystemVolumeViewSlider;
@property(nonatomic) _Bool realLoading; // @synthesize realLoading=_realLoading;
@property(nonatomic) _Bool didShowNetWorkDisable; // @synthesize didShowNetWorkDisable=_didShowNetWorkDisable;
@property(nonatomic) _Bool inhibitCellularHud; // @synthesize inhibitCellularHud=_inhibitCellularHud;
@property(retain, nonatomic) IMYVCelluarHintView *cellularHintView; // @synthesize cellularHintView=_cellularHintView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) long long seekingState; // @synthesize seekingState=_seekingState;
@property(retain, nonatomic) NSMutableArray *controls; // @synthesize controls=_controls;
@property(retain, nonatomic) NSMutableArray *landscapeControls; // @synthesize landscapeControls=_landscapeControls;
@property(retain, nonatomic) NSMutableArray *portraitControls; // @synthesize portraitControls=_portraitControls;
@property(retain, nonatomic) NSMutableArray *customControls; // @synthesize customControls=_customControls;
@property(nonatomic) _Bool isPlayCountdownAnimating; // @synthesize isPlayCountdownAnimating=_isPlayCountdownAnimating;
@property(nonatomic) long long controlsAutoHideTime; // @synthesize controlsAutoHideTime=_controlsAutoHideTime;
@property(nonatomic) _Bool isControlsHidden; // @synthesize isControlsHidden=_isControlsHidden;
@property(nonatomic) long long controlHideCountDown; // @synthesize controlHideCountDown=_controlHideCountDown;
@property(nonatomic) __weak UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak HLRetryView *retryView; // @synthesize retryView=_retryView;
@property(nonatomic) __weak CommonVProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak HLReplayView *replayView; // @synthesize replayView=_replayView;
@property(nonatomic) __weak HLPlayButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak CommonVLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak HLBottomControl *bottomControl; // @synthesize bottomControl=_bottomControl;
@property(nonatomic) __weak HLTopControl *topControl; // @synthesize topControl=_topControl;
@property(retain, nonatomic) HLVTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)showCelluarPlayHintHUD:(id)arg1;
- (void)handlePlayingInCelluarNetworking:(id)arg1;
- (void)sendControlEvent:(long long)arg1 toPlayerView:(id)arg2;
- (_Bool)shouldPlayerView:(id)arg1 changeStateTo:(long long)arg2;
- (_Bool)shouldPlayerViewStartVideo:(id)arg1;
- (void)playerViewReachabilityDidChange:(id)arg1;
- (void)playerViewAppDidBecomeActive:(id)arg1;
- (void)playerViewAppWillResignActive:(id)arg1;
- (void)playerView:(id)arg1 didChangeFromOrientation:(long long)arg2;
- (void)playerView:(id)arg1 willChangeToOrientation:(long long)arg2;
- (void)playerView:(id)arg1 readyForDisplay:(_Bool)arg2;
- (void)playerView:(id)arg1 playbackLikelyToKeepUp:(_Bool)arg2;
- (void)playerView:(id)arg1 playbackBufferEmpty:(_Bool)arg2;
- (void)playerView:(id)arg1 durationDidLoad:(id)arg2;
- (void)playerView:(id)arg1 didFailWithError:(id)arg2;
- (void)playerViewWillContinuePlaying:(id)arg1;
- (void)playerViewDidFinishPlaying:(id)arg1;
- (void)playerView:(id)arg1 loadedTimeRanges:(id)arg2;
- (void)playerView:(id)arg1 didPlayFrame:(double)arg2;
- (void)playerViewDidStartPlaying:(id)arg1;
- (void)playerViewWillStartPlaying:(id)arg1;
- (void)playerView:(id)arg1 didChangeStateFrom:(long long)arg2;
- (void)playerView:(id)arg1 willChangeStateTo:(long long)arg2;
- (void)playerView:(id)arg1 didControlByEvent:(long long)arg2;
- (void)stopPlayCountdownAnimation;
- (void)startPlayCountdownAnimation;
- (void)removeControlView:(id)arg1;
- (void)addSubviewForControl:(id)arg1 toView:(id)arg2 forOrientation:(unsigned long long)arg3;
- (void)addSubviewForControl:(id)arg1 toView:(id)arg2;
- (void)addSubviewForControl:(id)arg1 forOrientation:(unsigned long long)arg2;
- (void)addSubviewForControl:(id)arg1;
- (void)toggleControlsHidden;
- (void)hideControlsIfNecessary;
- (void)setControlsHidden:(_Bool)arg1;
- (void)fullScreenButtonTapped:(id)arg1;
- (void)toggleFullScreen;
- (void)topBackButtonTapped:(id)arg1;
- (void)retryButtonTapped:(id)arg1;
- (void)showSystemVolumeView:(float)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)replayButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)scrubbingEnd;
- (void)scrubbingBegin;
- (void)seekEndAtSecond:(float)arg1 userAction:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekBegin;
- (void)layoutForOrientation:(long long)arg1;
- (void)UICustomize;
- (void)createComponents;
- (void)setLoading:(_Bool)arg1;
- (void)updateReplayViewCover:(id)arg1;
- (void)prepareForReuse;
- (void)onInitialize:(id)arg1;
- (void)onPanChanged:(long long)arg1 withParams:(id)arg2;
- (void)onSingleTapped;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onVolumeChanged:(float)arg1;
- (id)initWithTheme:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

