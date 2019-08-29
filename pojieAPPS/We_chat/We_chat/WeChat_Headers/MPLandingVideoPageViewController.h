//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CNetworkStatusExt-Protocol.h"
#import "EnterpriseConnectorLogicDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMExposeViewControllerDelegate-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "MPCustomInteractiveHandlerDelegate-Protocol.h"
#import "MPDragDownGestureHandlerDelegate-Protocol.h"
#import "MPLandingCommonSharePageLogicDelegate-Protocol.h"
#import "MPLandingVideoPlayerViewDelegate-Protocol.h"
#import "MPLeftEdgeLeaveGestureHandlerDelegate-Protocol.h"
#import "MPScrollViewDragDownGestureHandlerDelegate-Protocol.h"
#import "MPVideoPushAnimatedTransitioningDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"

@class ForwardMessageLogicController, MMScrollActionSheet, MMUIButton, MMWebViewController, MPCustomInteractiveHandler, MPDragDownGestureHandler, MPLandingCommonSharePageLogic, MPLandingPageCgiHandler, MPLandingPageOpenParameter, MPLandingPageReportLogic, MPLandingPageRespInitParam, MPLandingVideoPageContext, MPLandingVideoPlayerView, MPLeftEdgeLeaveGestureHandler, MPScrollViewDragDownGestureHandler, NSString, UIView;

@interface MPLandingVideoPageViewController : MMUIViewController <MMScrollActionSheetDelegate, EnterpriseConnectorLogicDelegate, MMExposeViewControllerDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate, MPVideoPushAnimatedTransitioningDelegate, MPCustomInteractiveHandlerDelegate, MPDragDownGestureHandlerDelegate, MPLeftEdgeLeaveGestureHandlerDelegate, MPScrollViewDragDownGestureHandlerDelegate, MPLandingVideoPlayerViewDelegate, UIScrollViewDelegate, MPLandingCommonSharePageLogicDelegate, WCActionSheetDelegate, CNetworkStatusExt>
{
    _Bool _isPushTransitionFinished;
    _Bool _needResumeWhenAppear;
    _Bool _isScrollingToTop;
    _Bool _isWebviewLoading;
    _Bool _shouldKeepMoreBtnShow;
    _Bool _hasBeenRedirectedToUrl;
    _Bool _isGettingPageData;
    _Bool _isSwitchVideo;
    _Bool _isShareFromJSAPI;
    unsigned int _sessionId;
    unsigned int _enterId;
    MMUIButton *_closeBtn;
    MMUIButton *_moreBtn;
    MPLandingVideoPlayerView *_playerView;
    UIView *_playerPlaceholderView;
    MMWebViewController *_adWebViewController;
    MPLandingVideoPageContext *_videoPageContext;
    NSString *_commonShareForceUrl;
    MPLandingPageCgiHandler *_cgiHandler;
    ForwardMessageLogicController *_forwardMsgLogic;
    MMScrollActionSheet *_scrollActionSheet;
    MPCustomInteractiveHandler *_interactiveHandler;
    MPLeftEdgeLeaveGestureHandler *_leftEdgeLeaveGestureHandler;
    MPDragDownGestureHandler *_dragDownLeaveGestureHandler;
    MPScrollViewDragDownGestureHandler *_scrollViewDragDownGestureHandler;
    MPLandingCommonSharePageLogic *_commonSharePageLogic;
    MPLandingPageReportLogic *_reportLogic;
}

@property(retain, nonatomic) MPLandingPageReportLogic *reportLogic; // @synthesize reportLogic=_reportLogic;
@property(retain, nonatomic) MPLandingCommonSharePageLogic *commonSharePageLogic; // @synthesize commonSharePageLogic=_commonSharePageLogic;
@property(retain, nonatomic) MPScrollViewDragDownGestureHandler *scrollViewDragDownGestureHandler; // @synthesize scrollViewDragDownGestureHandler=_scrollViewDragDownGestureHandler;
@property(retain, nonatomic) MPDragDownGestureHandler *dragDownLeaveGestureHandler; // @synthesize dragDownLeaveGestureHandler=_dragDownLeaveGestureHandler;
@property(retain, nonatomic) MPLeftEdgeLeaveGestureHandler *leftEdgeLeaveGestureHandler; // @synthesize leftEdgeLeaveGestureHandler=_leftEdgeLeaveGestureHandler;
@property(retain, nonatomic) MPCustomInteractiveHandler *interactiveHandler; // @synthesize interactiveHandler=_interactiveHandler;
@property(nonatomic) _Bool isShareFromJSAPI; // @synthesize isShareFromJSAPI=_isShareFromJSAPI;
@property(retain, nonatomic) MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic; // @synthesize forwardMsgLogic=_forwardMsgLogic;
@property(retain, nonatomic) MPLandingPageCgiHandler *cgiHandler; // @synthesize cgiHandler=_cgiHandler;
@property(copy, nonatomic) NSString *commonShareForceUrl; // @synthesize commonShareForceUrl=_commonShareForceUrl;
@property(retain, nonatomic) MPLandingVideoPageContext *videoPageContext; // @synthesize videoPageContext=_videoPageContext;
@property(nonatomic) unsigned int enterId; // @synthesize enterId=_enterId;
@property(nonatomic) _Bool isSwitchVideo; // @synthesize isSwitchVideo=_isSwitchVideo;
@property(nonatomic) _Bool isGettingPageData; // @synthesize isGettingPageData=_isGettingPageData;
@property(nonatomic) _Bool hasBeenRedirectedToUrl; // @synthesize hasBeenRedirectedToUrl=_hasBeenRedirectedToUrl;
@property(nonatomic) _Bool shouldKeepMoreBtnShow; // @synthesize shouldKeepMoreBtnShow=_shouldKeepMoreBtnShow;
@property(nonatomic) _Bool isWebviewLoading; // @synthesize isWebviewLoading=_isWebviewLoading;
@property(nonatomic) _Bool isScrollingToTop; // @synthesize isScrollingToTop=_isScrollingToTop;
@property(nonatomic) _Bool needResumeWhenAppear; // @synthesize needResumeWhenAppear=_needResumeWhenAppear;
@property(nonatomic) _Bool isPushTransitionFinished; // @synthesize isPushTransitionFinished=_isPushTransitionFinished;
@property(retain, nonatomic) MMWebViewController *adWebViewController; // @synthesize adWebViewController=_adWebViewController;
@property(retain, nonatomic) UIView *playerPlaceholderView; // @synthesize playerPlaceholderView=_playerPlaceholderView;
@property(retain, nonatomic) MPLandingVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (_Bool)shouldShowOversizeTips;
- (void)checkShowOrHideOversizeTips;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)closeWowRecommendEditView;
- (void)closeCommentEditView;
- (_Bool)isForbidInteractiveClose;
- (void)resumeMusic;
- (void)onVideoClickIgnoreOverSize:(unsigned long long)arg1;
- (void)onVideoErrViewRetryBtnClicked;
- (void)onVideoControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)onVideoWillBeginExitFullScreen:(long long)arg1 video:(id)arg2;
- (void)onVideoWillBeginEnterFullScreen:(long long)arg1 video:(id)arg2;
- (void)onVideoPlayerOccurAction:(unsigned long long)arg1;
- (void)onVideoPlayFail:(int)arg1 LocalizedErrorDes:(id)arg2;
- (void)onVideoBeginSeek;
- (void)onVideoEndBuffering;
- (void)onVideoBeginBuffering;
- (void)onVideoFinishPlay;
- (void)onVideoBeginPlay;
- (void)onVideoStateChange:(long long)arg1;
- (void)updatePlayerViewSizeIfNeedWhenScroll;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollWebviewToTopByCustomIfNeed;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)showAdWebViewIfNeed;
- (void)removeAdWebview;
- (void)onAdViewNeedClose:(id)arg1;
- (void)onAdViewReady:(id)arg1;
- (void)onAdViewLoadFinish:(id)arg1;
- (void)onAdViewCreated:(id)arg1;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (_Bool)canAdViewCreated:(id)arg1 error:(id *)arg2;
- (struct CGRect)currentAdViewBounds;
- (void)resetPlayerViewWithOpenParam;
- (void)resetVCState;
- (void)switchVideoWithOpenParam:(id)arg1;
- (id)onSwitchVideo:(id)arg1 srcUserName:(id)arg2 srcDisplayName:(id)arg3 title:(id)arg4 digest:(id)arg5 cover:(id)arg6 vid:(id)arg7 pubTime:(unsigned int)arg8 duration:(unsigned int)arg9 videoWidth:(unsigned int)arg10 videoHeight:(unsigned int)arg11 scene:(unsigned int)arg12 subscene:(unsigned int)arg13;
- (id)MPPlayerVideoState;
- (id)onCommonSharePageGetShareFuncFlag;
- (void)onCommonSharePageRecievedForceUrl:(id)arg1;
- (void)onCommonSharePageLoadFail;
- (void)onCommonSharePageLoadFinish;
- (void)onCommonSharePageStartLoad;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCommonSharePageDoShareAction;
- (void)onCommonSharePageHaokanStateChanged;
- (id)commonSharePageWebviewBackgroundColor;
- (id)commonSharePageBackgroundColor;
- (void)initWebView;
- (void)initCommonSharePageLogic;
- (_Bool)isCommonShareFastLoad;
- (void)redirectToUrl:(id)arg1;
- (void)showGetPageInitParamFail:(id)arg1;
- (void)handlePageInitParam;
- (struct CGSize)getPlayerViewMinimalSize;
- (struct CGSize)getPlayerViewMaxSize;
- (void)resizePlayerViewToHeight:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pause;
- (void)resumePlay;
- (void)startPlay;
- (void)setPlayerViewHeight:(double)arg1;
- (void)initPlayerView;
- (void)onClose;
- (id)navigationBarBackgroundColor;
- (void)onShowCommonSharePageDebugInfo;
- (void)onLongPressNavBarButton:(id)arg1;
- (void)addLongPressGesOnRightBarItem;
- (void)setCustomNavItemHidden:(_Bool)arg1;
- (void)keepMoreBtnShowForSeconds;
- (void)initCustomNavigationBar;
- (id)commonShareWebScrollView;
- (_Bool)isPreviousViewControllerSearchActiveWhenWillDisAppear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)delayShowPlayerLoadingIfNeed;
- (void)handlePushAnimatedTransitionFinish;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resetIngoreOversizeInfo;
- (void)updateIgnoreOversizeInfo:(unsigned long long)arg1;
- (id)loadReqExtInfo;
@property(readonly, nonatomic) MPLandingPageRespInitParam *respInitParam;
@property(readonly, nonatomic) MPLandingPageOpenParameter *openParam;
- (void)reqPageData;
- (void)initViews;
- (void)initDataWithOpenParam:(id)arg1;
- (id)initWithOpenParam:(id)arg1;
- (void)reportEventWhenDealloc;
- (void)dealloc;
- (_Bool)shoudlDisableMenuItem:(id)arg1;
- (_Bool)isShowMenuItem:(id)arg1;
- (void)didSelecteMenuItem:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)setupRow1;
- (id)setupRow2;
- (id)setupIconActionSheetCells;
- (id)setupHalfIconActionSheet;
- (id)setupPreShowIconActionSheet;
- (void)onShowMenuAction;
- (void)reloadMenuActionSheetIfNeeded;
- (id)buildMenuItems;
- (void)addViewBrandContactButtonWithArrary:(id)arg1;
- (id)getBizContonct;
- (void)addExposeButtonWithArray:(id)arg1;
- (void)addFavouriteButtonWithArray:(id)arg1;
- (void)addCopyToPasteboardButtonWithArray:(id)arg1;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 disable:(_Bool)arg4 userInfo:(id)arg5;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 disable:(_Bool)arg4;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (void)exposeArticle;
- (void)copyToPasteBoard;
- (void)doShareWithAppMessage:(id)arg1 isFromJSAPI:(_Bool)arg2;
- (void)shareWithAppMessage:(id)arg1 isFromJSAPI:(_Bool)arg2;
- (void)cancelShareToGoodLook;
- (void)onMenuWowCommitBtnClickWithContent:(id)arg1;
- (void)presentShareToGoodLookDialogWithTitle:(id)arg1 thumbImage:(id)arg2 thumbImageURL:(id)arg3;
- (void)shareToGoodLook;
- (void)shareToTimeline:(_Bool)arg1;
- (void)addFavWithUrl:(id)arg1 title:(id)arg2 desc:(id)arg3 imageUrl:(id)arg4 extraDic:(id)arg5;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)getCurrentViewController;
- (void)shareTimelineWithUrl:(id)arg1 title:(id)arg2 desc:(id)arg3 thumbData:(id)arg4 size:(struct CGSize)arg5 isFromJSAPI:(_Bool)arg6 extraDic:(id)arg7;
- (void)OnForwardMessageSend:(id)arg1;
- (void)shareToFiendWithUrl:(id)arg1 title:(id)arg2 desc:(id)arg3 thumbUrl:(id)arg4 isFromJSAPI:(_Bool)arg5 extraDic:(id)arg6;
- (id)getFavAppMsgShareItem;
- (id)getWCAppMsgShareInfo;
- (id)getAppMsgShareItem;
- (id)getShareThumbUrl;
- (id)getShareDesc;
- (id)getShareTitle;
- (id)getShareUrl;
- (id)getCopyUrl;
- (_Bool)isAddedToGookLook;
- (_Bool)shouldShowGoodLookItem;
- (_Bool)isBlockJumpBizProfile;
- (_Bool)isBlockCopyLink;
- (_Bool)isBlockShareFavorites;
- (_Bool)isBlockShareToTimeline;
- (_Bool)isBlockShareToFriend;
- (id)pushAnimatedTransitionContentViewForFading;
- (double)pushAnimatedTransitionVideoAspectRatio;
- (struct CGRect)pushAnimatedTransitionTargetRect;
- (struct CGRect)pushAnimatedTransitionOriginRect;
- (id)pushAnimatedTransitionThumbImage;
- (void)onPushAnimatedTransitionFinish;
- (void)onPushAnimatedTransitionBegin;
- (_Bool)scrollViewDragDownGestureHandler:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)leftEdgeLeaveGestureHandler:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)dragDownGestureHandler:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onCustomInteractiveTransitioningEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onCustomInteractiveTransitioningBegin:(id)arg1;
- (void)setupLeaveGesture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

