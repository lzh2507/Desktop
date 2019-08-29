//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIControl.h"

#import "IUiUtilExt-Protocol.h"
#import "SightViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "WCAdFullScreenVideoViewControllerDelegate-Protocol.h"
#import "WCCanvasPageViewControllerDelegate-Protocol.h"
#import "WCCanvasPageViewControllerExt-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCNetworkMediaPlayerDelegate-Protocol.h"
#import "WCPlayerDownloaderExt-Protocol.h"
#import "WCSightFullPlayViewControllerDelegate-Protocol.h"

@class MMUIWindow, NSString, SightView, UIImageView, UIView, WCDataItem, WCMediaItem, WCPlayerInfo, WCPlayerView, WCSNSADPlayerControlView, WCSightFullPlayViewController;
@protocol WCSightViewDelegate;

@interface WCSightView : MMUIControl <SightViewDelegate, WCNetworkMediaPlayerDelegate, IUiUtilExt, WCCanvasPageViewControllerDelegate, WCPlayerDownloaderExt, WCCanvasPageViewControllerExt, WCAdFullScreenVideoViewControllerDelegate, WCFacadeExt, UIActionSheetDelegate, WCSightFullPlayViewControllerDelegate>
{
    _Bool m_bIsLongPressHandled;
    WCDataItem *m_dataItem;
    MMUIWindow *m_fullScreenWindow;
    UIView *m_fullScreenContent;
    UIView *m_fullScreenTips;
    UIImageView *_thumbImageView;
    SightView *_sightView;
    struct CGRect sightRectInTimeLine;
    WCSightFullPlayViewController *m_attachFullPlayViewController;
    _Bool m_fullScreenPlaying;
    _Bool m_waitFullScreenPlaying;
    _Bool m_isLoading;
    _Bool m_bfullScreenPlayAttachVideo;
    _Bool m_bHasAlreadyDownLoadVideo;
    _Bool m_bCachedRealDownloadProgress;
    _Bool m_bTimelineScene;
    int m_currentPage;
    struct CGSize m_initPlayerSize;
    _Bool m_bHasPlayedOnceForTips;
    _Bool m_closeForViewDetail;
    NSString *_nsFromVCName;
    _Bool m_isImageReady;
    _Bool m_isSightReady;
    _Bool _isDownloadSnsVideoByCustomProtocol;
    _Bool _isWCPlayerStartPlay;
    WCMediaItem *m_mediaData;
    id <WCSightViewDelegate> m_delegate;
    NSString *m_SightPath;
    NSString *_m_cpKey;
    WCSNSADPlayerControlView *_controlView;
    WCPlayerView *_wcPlayerView;
    WCPlayerInfo *_playerInfo;
}

@property(nonatomic) _Bool isWCPlayerStartPlay; // @synthesize isWCPlayerStartPlay=_isWCPlayerStartPlay;
@property(nonatomic) _Bool isDownloadSnsVideoByCustomProtocol; // @synthesize isDownloadSnsVideoByCustomProtocol=_isDownloadSnsVideoByCustomProtocol;
@property(retain, nonatomic) WCPlayerInfo *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCPlayerView *wcPlayerView; // @synthesize wcPlayerView=_wcPlayerView;
@property(retain, nonatomic) WCSNSADPlayerControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) NSString *m_cpKey; // @synthesize m_cpKey=_m_cpKey;
@property(nonatomic) _Bool m_bTimelineScene; // @synthesize m_bTimelineScene;
@property(readonly, nonatomic) _Bool m_isSightReady; // @synthesize m_isSightReady;
@property(readonly, nonatomic) _Bool m_isImageReady; // @synthesize m_isImageReady;
@property(retain, nonatomic) NSString *m_SightPath; // @synthesize m_SightPath;
@property(nonatomic) __weak id <WCSightViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
- (void).cxx_destruct;
- (void)attachWCPlayer;
- (void)attachStreamVideoPlayer;
- (void)onAdVideoPlayerRotation:(_Bool)arg1;
- (void)onCloseAdPlayerForDetailView:(id)arg1;
- (void)onCancelShareAdVideoToFriend;
- (void)onShareAdVideoToTimeline:(_Bool)arg1;
- (void)onShareAdVideoToFriends:(id)arg1;
- (void)onFavAdVideoClicked;
- (void)onAdPlayerStateChange:(int)arg1;
- (void)onCanvasViewDidBePushed;
- (void)onCanvasViewDidBePoped;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)downLoadThumbIfNeeded;
- (void)exitVideoPlay;
- (void)pauseWCPlayer;
- (_Bool)isWCPlayerLocalAndNotPlaying;
- (_Bool)isWCPlayerSlientPlaying;
- (void)startWCPlayer;
- (void)setupWCPlayerView;
- (void)sightViewDidHide:(_Bool)arg1;
- (void)sightViewWillShow:(_Bool)arg1;
- (_Bool)isTurnedAdSightView;
- (void)endViewStreamVideo;
- (void)tryRotateOrientation;
- (void)tryResetAdAttachVideoEndPlayTime;
- (void)tryAddAdAttachVideoPlayCount;
- (void)tryLogAdAttachVideoStartPlayTime;
- (void)tryResetAdShortVideoEndPlayTime;
- (void)tryAddAdShortVideoPlayCount;
- (void)tryLogAdShortVideoStartPlayTime;
- (void)exitFullScreenPlay;
- (_Bool)shouldAutoPlay;
- (id)getRootView:(id)arg1;
- (void)longPressFullScreenWindow:(id)arg1;
- (void)clickFullScreenWindow;
- (void)stopAndCloseFullScreenWindow;
- (void)playLongVideoAdInFullScreen;
- (void)playInFullScreen;
- (void)playAttachVideoInFullScreen;
- (_Bool)processClickToPlayAttachVideoInFullScreenMode;
- (void)onClickPlayAttachVideoBtn:(id)arg1;
- (void)initFullPlayWindow;
- (void)clearShortVideo;
- (void)restartShortVideo;
- (void)stopPlayShortVideo;
- (void)playShortVideo;
- (void)willAnimateRotation:(_Bool)arg1;
- (void)onPausePlayer;
- (void)onStartPlayer;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onCancelShareVideoToFriend;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClosePlayer;
- (void)stopPlayAttachVideo;
- (void)endViewVideo;
- (void)clearAttachVideoResource;
- (void)onFullSightPlayEnd:(_Bool)arg1;
- (void)onLongPressFullPlayView;
- (id)getDetailButtonTitle;
- (_Bool)shouldShowDetailButton;
- (void)onClickDetailButton;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onClickFullPlayView;
- (void)onResumeSightView:(id)arg1;
- (void)onResume;
- (void)reStartStateMachine;
- (void)onStartToPlayVideo;
- (void)onSightViewPlayItemCleared:(id)arg1;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)sightViewProgressDidReachEnd:(id)arg1;
- (void)onOrientationChanged;
- (_Bool)isFullScreenPlaying;
- (void)tryPlayVideoInFullScreen;
- (void)onClick;
- (void)LongPressEvents:(id)arg1;
- (void)animationShow:(_Bool)arg1;
- (void)showDownloadTooSlow;
- (void)makeFakeProgress;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onBeginDownload:(id)arg1 downloadType:(int)arg2;
- (void)onTimeLineVcWillAppear;
- (void)onTimeLineVcWillPop;
- (void)onServiceEnterForeground:(id)arg1;
- (void)onServiceEnterBackground:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)onDoubleClickWCSight:(id)arg1;
- (void)onClickWCSight:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)cacheFakeProgressValue;
- (double)calSightViedoCenterY;
- (double)calSightVideoMaxHeight;
- (double)calTransformScale:(double)arg1 videoHeight:(double)arg2 frameWidth:(double)arg3 frameHeight:(double)arg4;
- (struct CGSize)calNewSizeForSightPlayer:(double)arg1 videoHeight:(double)arg2 frameWidth:(double)arg3 frameHeight:(double)arg4;
- (_Bool)isAutoPlayVideo;
- (_Bool)isAutoDownLoadVideo;
- (void)reloadSightPreviewImage;
- (id)getImage;
- (void)onReadyForSight;
- (void)reloadSight;
- (_Bool)isSightVideoExist;
- (void)onMainWindowFrameChanged;
- (void)dealloc;
- (id)initWithMediaData:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)initWithMediaData:(id)arg1;
- (void)initData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

