//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCSearchControllBaseViewController.h"

#import "InviteFriendLogicDelegate-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CrossfadeAnimationController, FindContactSearchViewCellInfo, InviteFriendLogic, MMTableViewInfo, MoreQRCodeViewController, NSString, UIButton, UILabel, UIView;

@interface AddFriendEntryViewController : WCSearchControllBaseViewController <MMWebViewDelegate, UIAlertViewDelegate, MMTableViewInfoDelegate, InviteFriendLogicDelegate>
{
    FindContactSearchViewCellInfo *m_headerSearchView;
    UIView *m_searchFooterView;
    UIButton *m_myQRCodeBtn;
    UILabel *m_myNameLabel;
    MoreQRCodeViewController *m_myQRCodeCard;
    NSString *m_nsUserNameToFind;
    MMTableViewInfo *m_tableViewInfo;
    CrossfadeAnimationController *m_transitionInstance;
    InviteFriendLogic *m_inviteLogic;
    _Bool _m_bShowInvite;
    unsigned int _searchScene;
    unsigned int _inviteScene;
}

@property(nonatomic) unsigned int inviteScene; // @synthesize inviteScene=_inviteScene;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
@property(nonatomic) _Bool m_bShowInvite; // @synthesize m_bShowInvite=_m_bShowInvite;
@property(retain, nonatomic) NSString *m_nsUserNameToFind; // @synthesize m_nsUserNameToFind;
- (void).cxx_destruct;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onMainWindowFrameChanged;
- (void)initDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)onRadarSearchCreateViewShow;
- (void)onRadarSearchViewShow;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)onCancel:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initLeftButton;
- (void)initView;
- (void)initTitle;
- (void)initTableView;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSelectCell:(struct WCTableViewNormalCellManager *)arg1;
- (void)dealloc;
- (id)init;
- (void)reloadData;
- (void)initSearchFooterView;
- (void)layoutSearchFooterView;
- (void)onShowInviteList:(struct WCTableViewNormalCellManager *)arg1;
- (void)onShowMyQrCode;
- (void)pluginsChanged:(id)arg1;
- (unsigned int)getBottleUnreadCountAtTarbar;
- (unsigned int)getBottleUnreadCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

