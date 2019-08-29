//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "FullScreenGestureDelegate-Protocol.h"
#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class MMImageScrollViewHelper, MMLoadingView, MMProgressViewEx, MMUIButton, NSArray, NSString, ScanQRCodeLogicController, UIImage, UIImageView, UIView, WCActionSheetWithScanWXCode, WCMediaItem, WCMediaItemWrap, WXFullScreenGestureRecognizer;
@protocol WCImageFullScreenViewContainerDelegate;

@interface WCImageFullScreenViewContainer : MMUIScrollView <WCActionSheetDelegate, BaseScanLogicDelegate, FullScreenGestureDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate, WCFacadeExt>
{
    WCMediaItem *m_mediaData;
    WCMediaItemWrap *m_mediaDataWrap;
    struct CGRect m_originImageRectInScreen;
    struct CGSize m_initalContentSize;
    UIImage *m_image;
    _Bool m_isAnimating;
    _Bool m_isShowing;
    _Bool m_bIsLongPressHandled;
    _Bool m_isImageReady;
    _Bool m_isComeFromDownload;
    _Bool m_isDownloadFail;
    UIImageView *m_container;
    MMLoadingView *m_loadingView;
    MMProgressViewEx *m_processView;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WCActionSheetWithScanWXCode *m_actionSheet;
    id <WCImageFullScreenViewContainerDelegate> m_delegate;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WXFullScreenGestureRecognizer *m_gesture;
    UIView *m_gestureView;
    MMUIButton *m_gameButton;
    _Bool _bNeedEditWhenLoad;
    double _startLoadingTime;
}

@property(nonatomic) double startLoadingTime; // @synthesize startLoadingTime=_startLoadingTime;
@property(nonatomic) _Bool bNeedEditWhenLoad; // @synthesize bNeedEditWhenLoad=_bNeedEditWhenLoad;
@property(readonly, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView;
@property(nonatomic) __weak id <WCImageFullScreenViewContainerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct CGSize m_initalContentSize; // @synthesize m_initalContentSize;
@property(nonatomic) struct CGRect m_originImageRectInScreen; // @synthesize m_originImageRectInScreen;
@property(retain, nonatomic) WCMediaItemWrap *m_mediaDataWrap; // @synthesize m_mediaDataWrap;
@property(retain, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
- (void).cxx_destruct;
- (void)onStopLoading;
- (void)onScanEnds;
- (void)checkNeedToEditImageWhenLoaded;
- (void)startEditImage:(_Bool)arg1;
- (void)onTranslateWordInImage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)detectWordInImage:(id)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (_Bool)shouldPreventDragDownCloseGesture;
- (void)onSingleTap:(id)arg1;
- (void)initGestureView;
- (void)animationRotateDidStop;
- (void)contentNeedRotateWithOrientation:(long long)arg1;
- (void)onDeviceRotate:(_Bool)arg1;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)hideWithoutAnimation;
- (void)animationHideDidStop;
- (void)animationHideWithRotate;
- (void)tryDownloadImage;
- (void)animationShowWithMediaItem:(id)arg1;
- (void)animationShowStep2;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowDidStop;
- (void)onGameButtonClick:(id)arg1;
- (void)addGameButton;
- (void)animationShowView;
- (void)setContentOffsetAndSize;
- (void)clearStatus;
- (void)showProcessView;
- (void)reloadView:(id)arg1;
- (void)initScrollViewHelper;
- (id)viewForZooming;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)stopLoading;
- (void)startLoadingNonBlock;
- (void)startLoadingBlocked;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setZoomScale:(float)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGRect frame;
- (void)dealloc;
- (void)stopAllAnimation;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

