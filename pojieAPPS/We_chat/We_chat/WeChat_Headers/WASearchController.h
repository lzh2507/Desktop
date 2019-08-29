//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IWSViewControllerLifeCycleExt-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WAAppCanvasWrapperViewDelegate-Protocol.h"
#import "WASearchActionDelegate-Protocol.h"
#import "WAWidgetJSEventHandlerDelegate-Protocol.h"

@class MMSearchBar, MMUIViewController, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UIView, WASearchResultLogic;
@protocol WASearchControllerDelegate, YYWebViewInterface;

@interface WASearchController : MMObject <MMSearchBarDelegate, WASearchActionDelegate, UIScrollViewDelegate, WAAppCanvasWrapperViewDelegate, IWSViewControllerLifeCycleExt, WAWidgetJSEventHandlerDelegate>
{
    _Bool _isContainerInteractivePopEnabled;
    int _searchScene;
    NSString *_lastShouldChangedFormatQuery;
    _Bool _webViewDidRegisterScrollNotify;
    _Bool _isDetailSearch;
    _Bool _isMoving;
    _Bool _searchOKFlag;
    MMSearchBar *_searchBar;
    id <WASearchControllerDelegate> _delegate;
    unsigned long long _pageType;
    WASearchResultLogic *_searchResultLogic;
    UIView<YYWebViewInterface> *_resultView;
    UIView<YYWebViewInterface> *_detailView;
    UIButton *_detailBackButton;
    MMUIViewController *_containerController;
    double _webViewScrollNotifyDiffHeight;
    double _lastOffsetY;
    unsigned long long _detailSearchType;
    NSString *_searchID;
    double _moveStartOffset;
    double _moveCurOffset;
    UIImageView *_bottomViewShadow;
    NSMutableDictionary *_widgetViewCache;
    NSMutableArray *_eventHandlerList;
    NSString *_resultPageQuery;
}

@property(nonatomic) _Bool searchOKFlag; // @synthesize searchOKFlag=_searchOKFlag;
@property(copy, nonatomic) NSString *resultPageQuery; // @synthesize resultPageQuery=_resultPageQuery;
@property(retain, nonatomic) NSMutableArray *eventHandlerList; // @synthesize eventHandlerList=_eventHandlerList;
@property(retain, nonatomic) NSMutableDictionary *widgetViewCache; // @synthesize widgetViewCache=_widgetViewCache;
@property(retain, nonatomic) UIImageView *bottomViewShadow; // @synthesize bottomViewShadow=_bottomViewShadow;
@property(nonatomic) double moveCurOffset; // @synthesize moveCurOffset=_moveCurOffset;
@property(nonatomic) double moveStartOffset; // @synthesize moveStartOffset=_moveStartOffset;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) unsigned long long detailSearchType; // @synthesize detailSearchType=_detailSearchType;
@property(nonatomic) _Bool isDetailSearch; // @synthesize isDetailSearch=_isDetailSearch;
@property(nonatomic) double lastOffsetY; // @synthesize lastOffsetY=_lastOffsetY;
@property(nonatomic) double webViewScrollNotifyDiffHeight; // @synthesize webViewScrollNotifyDiffHeight=_webViewScrollNotifyDiffHeight;
@property(nonatomic) _Bool webViewDidRegisterScrollNotify; // @synthesize webViewDidRegisterScrollNotify=_webViewDidRegisterScrollNotify;
@property(nonatomic) __weak MMUIViewController *containerController; // @synthesize containerController=_containerController;
@property(retain, nonatomic) UIButton *detailBackButton; // @synthesize detailBackButton=_detailBackButton;
@property(retain, nonatomic) UIView<YYWebViewInterface> *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIView<YYWebViewInterface> *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) WASearchResultLogic *searchResultLogic; // @synthesize searchResultLogic=_searchResultLogic;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) __weak id <WASearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (id)findSearchTextField;
- (void)onOpenNearByPage:(id)arg1;
- (void)onTap;
- (void)getNearWeappLink:(CDUnknownBlockType)arg1;
- (void)reportSearchOKFlagIfNeeded;
- (void)onRemoveDetailView;
- (void)moveDetailViewToRight;
- (void)updateMovingDetailView;
- (void)cancelMoveDetailView;
- (void)onClickDetailBack:(id)arg1;
- (void)handlePanGestureForDetailView:(id)arg1;
- (id)urlParamsForDetailPage:(id)arg1 params:(id)arg2;
- (void)loadLocalHtmlForDetailPage:(id)arg1 params:(id)arg2;
- (id)makeNewDetailView:(id)arg1;
- (void)onWAWidgetJSEventHandler:(id)arg1 wrapperView:(id)arg2 endWithResult:(id)arg3;
- (void)onWrapperView:(id)arg1 showDatePickerView:(id)arg2;
- (void)onWrapperView:(id)arg1 showPickerView:(id)arg2;
- (void)onWrapperView:(id)arg1 dataUpdated:(id)arg2;
- (void)onWrapperView:(id)arg1 viewStateChanged:(unsigned long long)arg2;
- (void)onWrapperView:(id)arg1 authorizeSuccess:(id)arg2;
- (void)onWrapperView:(id)arg1 openApp:(id)arg2;
- (void)onWrapperView:(id)arg1 updateHeight:(double)arg2;
- (void)onWidgetClearCrashProtectCount:(id)arg1;
- (void)onTapWAWidgetWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onUpdateWAWidgetWithParams:(id)arg1;
- (void)onRemoveWAWidgetWithParams:(id)arg1;
- (id)onInsertWAWidgetWithParams:(id)arg1;
- (id)onGetWidgetCaptureImgUrl:(id)arg1;
- (void)onReceiveKeySearchJsapi:(id)arg1;
- (void)onLaunchBrandProfile:(id)arg1;
- (void)onLaunchWebView:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onRegisterWebViewDidScroll:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)onReportWeAppSearchRealTime:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tryHideSearchInternalBlackView;
- (void)hideKeyboardForSearchBar;
- (void)hideSearchBarResultView;
- (void)handlePanGestureForWebview:(id)arg1;
- (void)setSearchDisplayBackgroundVisible:(_Bool)arg1;
- (void)hideResultViewWithOffset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showResultViewWithOffset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearDetailView;
- (void)clearDetailViewAndBackBtn;
- (void)releaseResultView;
- (void)clearResultView;
- (void)resetResultView;
- (void)relayoutResultView;
- (void)setupResultView;
- (void)restoreInteractivePop;
- (void)forbidInteractivePop;
- (void)mmSearchBarDidEnd;
- (_Bool)mmsearchBarShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)mmsearchBarTextDidBeginEditing:(id)arg1;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)mmSearchDisplayControllerDidEndSearch;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)webSearchVC:(id)arg1 willDisappear:(_Bool)arg2;
- (void)webSearchVC:(id)arg1 willAppear:(_Bool)arg2;
- (void)onClearSearchText;
- (void)resetStatusBarFontColor;
- (void)onExitSearch;
- (void)animateSearchBarCancelButton;
- (void)initResultLogic;
- (void)initSearchBarInVC:(id)arg1;
- (void)notifyInputChanged:(id)arg1;
- (void)fixSearchBarMaskBug;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 searchScene:(int)arg2;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

