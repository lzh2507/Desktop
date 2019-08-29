//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBaseContactInfoAssist.h"

#import "BrandProfileFuwuCellDelegate-Protocol.h"
#import "BrandProfileHeaderViewDelegate-Protocol.h"
#import "BrandProfileMessageBaseCellDelegate-Protocol.h"
#import "BrandProfileSettingViewControllerDelegate-Protocol.h"
#import "BrandProfileTipsCellDelegate-Protocol.h"
#import "IBrandAttrMgrExt-Protocol.h"
#import "IHDHeadImageViewExt-Protocol.h"
#import "IWCDeviceBrandMgrExt-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "MMWebSearchViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BizProfileV2Resp, BizServiceMenuButton, BrandProfileCgiContext, BrandProfileEnterInfo, BrandProfileHeaderView, BrandProfileReporter, MMHDHeadImageView, MMTableView, MMWebSearchController, NSMutableArray, NSMutableSet, NSString, WCADPageWrap, WCTimeLineFooterView, WOAPPrivacyConfirmLogic;
@protocol ContactInfoAssistDelegate;

@interface NewBrandUserContactInfoAssist : CBaseContactInfoAssist <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, MMWebSearchViewDelegate, IBrandAttrMgrExt, BrandProfileHeaderViewDelegate, BrandProfileFuwuCellDelegate, BrandProfileSettingViewControllerDelegate, IHDHeadImageViewExt, IWCDeviceBrandMgrExt, MMRefreshTableFooterDelegate, MMImageLoaderObserver, BrandProfileMessageBaseCellDelegate, BrandProfileTipsCellDelegate>
{
    _Bool _isFocusBeforeFetchFirstPkg;
    _Bool _isJustAddedContact;
    _Bool _isSearchAcitive;
    BrandProfileCgiContext *_cgiContext;
    BizProfileV2Resp *_cacheItem;
    NSMutableArray *_sectionDataList;
    NSMutableArray *_visibleViewModelList;
    BrandProfileReporter *_reporter;
    BizServiceMenuButton *_selectedFuwu;
    unsigned long long _selectedFuwuIdx;
    MMTableView *_tableView;
    BrandProfileHeaderView *_headerView;
    WCTimeLineFooterView *_footerView;
    MMHDHeadImageView *_hdAvatarView;
    WCADPageWrap *_profilePageWrap;
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
    MMWebSearchController *_websearchController;
    NSMutableSet *m_setFastLoadTemplateType;
    unsigned int _searchFromIndex;
    unsigned int _m_uiFromScene;
    NSString *_searchKeyword;
    NSString *_searchExtraParamsString;
    BrandProfileEnterInfo *_bpeInfo;
    id <ContactInfoAssistDelegate> _delegate;
}

@property(nonatomic) __weak id <ContactInfoAssistDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BrandProfileEnterInfo *bpeInfo; // @synthesize bpeInfo=_bpeInfo;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(retain, nonatomic) NSString *searchExtraParamsString; // @synthesize searchExtraParamsString=_searchExtraParamsString;
@property(nonatomic) unsigned int searchFromIndex; // @synthesize searchFromIndex=_searchFromIndex;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void).cxx_destruct;
- (void)onWebUrlClicked:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned int)transToReportScene;
- (void)onSearchButtonClick:(id)arg1;
- (void)onTapBlurEffectView;
- (void)onFinalBackButtonClick:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)willEndSearch:(id)arg1;
- (void)didBeginSearch:(id)arg1;
- (void)willBeginSearch:(id)arg1;
- (void)cancelWebSearchAnimated:(_Bool)arg1;
- (_Bool)isInteractivePopEnabled;
- (_Bool)isSeachActive;
- (void)onSearchClicked;
- (void)profileDestory;
- (void)recordProfilePageWrap;
- (void)deleteAllMessage;
- (_Bool)isInCustomAlertMode;
- (id)getAlertMessageForVerifyLogic:(id)arg1;
- (id)getAlertTitleForVerifyLogic:(id)arg1;
- (void)newMessageWithContact:(id)arg1;
- (void)handleAddedContact;
- (void)reportBizADTriggerAttention:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)onWCDeviceBindEnd:(id)arg1 Error:(id)arg2;
- (_Bool)isDeviceBound;
- (_Bool)hasDeviceUserData;
- (void)onFoldButtonClicked:(id)arg1;
- (void)onUnfocusButtonClicked:(id)arg1;
- (void)onEnterButtonClicked:(id)arg1;
- (void)modifyVerifyContactWrap:(id)arg1;
- (void)finallyAddToContacts;
- (void)onFocusButtonClicked:(id)arg1;
- (void)onBrandAvatarClicked:(struct CGRect)arg1;
- (void)realNoFocus;
- (void)showActionSheetForNoFocus;
- (void)openSettingView;
- (void)openSepcialWeappWithJsonString:(id)arg1;
- (void)openMaterialView;
- (void)opLogTopSession:(_Bool)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionSheetForRightButton;
- (void)updateNavigationBarRightButton;
- (void)handleExposuredViewModel:(id)arg1;
- (void)removeFromVisibleViewModelList:(id)arg1;
- (void)addToVisibleViewModelList:(id)arg1;
- (_Bool)isInVisibleViewModelList:(id)arg1;
- (void)handleVisibleViewModelList;
- (void)updateTemplateFile;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)onMsgSectionHeightChange:(id)arg1;
- (void)preDownloadCoverImageIfNeed:(id)arg1;
- (_Bool)isExistInSectionDataList:(id)arg1;
- (void)updateSectionWidthInSectionDataList;
- (unsigned int)getGroupMsgCount;
- (_Bool)appendGroupMsgList:(id)arg1;
- (id)getFooterWordingForResp:(id)arg1;
- (id)getTipsWordingForResp:(id)arg1;
- (void)handleNextPkgResp:(id)arg1;
- (void)handleFirstPkgResp:(id)arg1;
- (void)handleTipsWording;
- (void)onFetchBizProfile:(id)arg1 resp:(id)arg2 action:(int)arg3 userInfo:(id)arg4;
- (void)fetchProfileNextPkg;
- (void)fetchProfileFirstPkg;
- (id)genWebViewExtraInfoFromSourceMessage;
- (_Bool)openMPVideoWithBrandAppMsgDetailInfo:(id)arg1 cellView:(id)arg2;
- (void)openWebView:(id)arg1 extraInfo:(id)arg2 hasItemShowType:(_Bool)arg3 itemShowType:(unsigned int)arg4 dateTime:(unsigned int)arg5;
- (void)showActionSheetForSubFuwuList:(id)arg1;
- (id)extraInfoForFuwu;
- (void)onFuwuButtonClicked:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onContactUpdated;
- (void)reloadTableViewData;
- (void)reloadView;
- (void)initFooterView;
- (void)initHeaderView;
- (id)GetTableView;
- (void)initTableView;
- (_Bool)shouldAddShadowView;
- (void)initNavigationBarButton;
- (void)loadLocalCache;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

