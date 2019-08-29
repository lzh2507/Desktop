//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString, UIButton, UIScrollView, UISearchBar, UISearchDisplayController, UIView, WSStreamPlayerView;
@protocol YYWebViewInterface, YYWebViewInterface><WebSearchInterface;

@protocol MMWebSearchViewDelegate <NSObject>

@optional
- (void)onSearchButtonClick:(UISearchBar *)arg1;
- (void)onGotoEmoticonPad:(NSDictionary *)arg1;
- (void)onQuerySimilarPicSearch:(NSDictionary *)arg1;
- (void)onOpenWowColikeSetting:(NSDictionary *)arg1;
- (void)onOpenProfileWithOpenId:(NSDictionary *)arg1;
- (void)onHideNavBarShadow:(NSDictionary *)arg1;
- (void)onShowNavBarShadow:(NSDictionary *)arg1;
- (void)onQueryCommCgi:(NSDictionary *)arg1;
- (void)onFetchReddot:(NSDictionary *)arg1;
- (void)onUpdateNumReddot:(NSDictionary *)arg1;
- (void)onFetchNumReddot:(NSDictionary *)arg1;
- (void)onPostComments:(NSDictionary *)arg1;
- (void)onSetComments:(NSDictionary *)arg1;
- (void)onOpenProfilePage:(NSDictionary *)arg1;
- (void)onBackToClearKeywordState:(NSDictionary *)arg1;
- (void)onControllerWillBeginDetailSearch:(NSDictionary *)arg1;
- (void)onOpenWebRecommend:(NSDictionary *)arg1;
- (void)onWebPageActive:(NSDictionary *)arg1;
- (void)webviewScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(WSStreamPlayerView *)arg3;
- (void)onUpdateTitleViewWithTitle:(NSString *)arg1;
- (void)onRemoveDetailView:(UIView<YYWebViewInterface><WebSearchInterface> *)arg1;
- (void)onHideSearchBarWithParams:(NSDictionary *)arg1;
- (NSString *)getNativeHeight;
- (NSString *)getInputHeight;
- (NSString *)getInputMarginLeftRight;
- (NSString *)getInputMarginTop;
- (void)onSearchHotWord:(NSDictionary *)arg1;
- (void)onInjectPreJsFailWhenReloadWebview:(NSError *)arg1;
- (void)onWebViewTerminal:(UIView<YYWebViewInterface> *)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(UIView<YYWebViewInterface> *)arg1;
- (void)onJsbridgeReady:(id <YYWebViewInterface>)arg1;
- (void)didFinishLoadWebView:(UIView<YYWebViewInterface> *)arg1;
- (void)onUpdateNativeSuggestion;
- (void)onStartVerticalSearch:(unsigned long long)arg1;
- (void)onViewTypeChanged;
- (void)onSearchReset;
- (void)onSearchBackToPreviousView;
- (void)onSearchLaunchNextViewWithBizType:(unsigned long long)arg1;
- (void)onSearchInputSetPlaceHolder:(NSDictionary *)arg1;
- (void)onSearchInputSetText:(NSString *)arg1 tagInfo:(NSDictionary *)arg2;
- (double)webSearchViewPosY;
- (void)onPreSearch:(NSString *)arg1 bizType:(unsigned long long)arg2;
- (void)didEndSearch:(UISearchDisplayController *)arg1;
- (void)willEndSearch:(UISearchDisplayController *)arg1;
- (void)didBeginSearch:(UISearchDisplayController *)arg1;
- (void)willBeginSearch:(UISearchDisplayController *)arg1;
- (void)onTapBlurEffectView;
- (void)onFinalBackButtonClick:(UIButton *)arg1;
@end

