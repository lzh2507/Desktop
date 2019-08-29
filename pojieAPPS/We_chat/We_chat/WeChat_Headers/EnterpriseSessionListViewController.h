//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EnterpriseBrandContactHelperDelegate-Protocol.h"
#import "EnterpriseSessionSearchControllerDelegate-Protocol.h"
#import "IEnterpriseBrandContactMgrExt-Protocol.h"
#import "IEnterpriseGroupMgrExt-Protocol.h"
#import "IEnterpriseSessionMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CContact, EnterpriseBrandContactHelper, EnterpriseSessionSearchController, MMSearchBar, MMTableView, MMTitleView, NSString, UIButton, UIView;

@interface EnterpriseSessionListViewController : MMUIViewController <IEnterpriseBrandContactMgrExt, EnterpriseSessionSearchControllerDelegate, EnterpriseBrandContactHelperDelegate, MMWebViewDelegate, UITableViewDelegate, UITableViewDataSource, IEnterpriseSessionMgrExt, IEnterpriseGroupMgrExt, IMMNewSessionMgrExt>
{
    unsigned int _scene;
    unsigned int _fromScene;
    MMTableView *_tableView;
    MMTitleView *_titleView;
    MMSearchBar *_searchBar;
    EnterpriseSessionSearchController *_searchController;
    UIView *_footerView;
    UIView *_footerViewBackground;
    UIView *_emptyView;
    UIButton *_weworkButton;
    _Bool _isEntering;
    unsigned int _wwEntryType;
    EnterpriseBrandContactHelper *_helper;
    CContact *brandContact;
}

@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact;
- (void).cxx_destruct;
- (void)onWebViewWillClose:(id)arg1;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onQuitEnterpriseGroup:(id)arg1 errorCode:(int)arg2;
- (void)onEnterpriseSessionChanged;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (id)makeCell:(id)arg1;
- (_Bool)reloadWeworkEntryData:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getViewController;
- (id)getMMSearchBar;
- (void)reloadTable;
- (void)enterChat:(id)arg1;
- (void)updateMemberToLocal:(id)arg1;
- (void)createChatroom:(id)arg1;
- (void)createSingleChat:(id)arg1;
- (void)openWework:(id)arg1;
- (void)openFavSessionListView:(id)arg1;
- (void)openCreateChat:(id)arg1;
- (void)openChatBrandInfo:(id)arg1;
- (void)menuItemClick:(id)arg1;
- (void)showRightTopMenuBtn:(id)arg1;
- (void)report;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)willDisappear;
- (void)willAppear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateTitleView;
- (void)updateLeftBarItem;
- (void)initWeworkEntry;
- (void)initFooterView;
- (void)hideSearchBar;
- (void)initSearchBar;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (void)setScene:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithBrand:(id)arg1 fromScene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

