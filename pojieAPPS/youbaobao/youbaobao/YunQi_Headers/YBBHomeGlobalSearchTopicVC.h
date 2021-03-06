//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBBHomeHideNavigationViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IMYCaptionView, NSString, UITableView, YBBHomeGlobalSearchAssociateContainerVC, YBBHomeGlobalSearchTTQAskResultVM, YBBHomeGlobalSearchTopView;

@interface YBBHomeGlobalSearchTopicVC : YBBHomeHideNavigationViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    _Bool _isReqBIData;
    NSString *_searchKey;
    UITableView *_tableView;
    YBBHomeGlobalSearchTopView *_searchView;
    YBBHomeGlobalSearchAssociateContainerVC *_associateContainerVC;
    YBBHomeGlobalSearchTTQAskResultVM *_viewModel;
    IMYCaptionView *_captionView;
    unsigned long long _searchFromType;
    unsigned long long _indexOfSearchFromType;
    unsigned long long _idOfSearchFromType;
}

@property(nonatomic) _Bool isReqBIData; // @synthesize isReqBIData=_isReqBIData;
@property(nonatomic) unsigned long long idOfSearchFromType; // @synthesize idOfSearchFromType=_idOfSearchFromType;
@property(nonatomic) unsigned long long indexOfSearchFromType; // @synthesize indexOfSearchFromType=_indexOfSearchFromType;
@property(nonatomic) unsigned long long searchFromType; // @synthesize searchFromType=_searchFromType;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) YBBHomeGlobalSearchTTQAskResultVM *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) YBBHomeGlobalSearchAssociateContainerVC *associateContainerVC; // @synthesize associateContainerVC=_associateContainerVC;
@property(retain, nonatomic) YBBHomeGlobalSearchTopView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
- (void).cxx_destruct;
- (void)trackClickRow:(long long)arg1 idOfContetnType:(id)arg2 subTypeOfContentType:(unsigned long long)arg3;
- (void)trackSearchResult;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sourceStringOfString:(id)arg1;
- (void)configCell:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldTextChange:(id)arg1;
- (void)showAssociateViewWithKeyWord:(id)arg1;
- (void)requestWithKeyword:(id)arg1;
- (void)cancelSearchForbid;
- (void)backAction;
- (void)setupSearchBar;
- (void)setupTableView;
- (void)viewDidLayoutSubviews;
- (void)footerRefresh;
- (void)headerRefresh;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

