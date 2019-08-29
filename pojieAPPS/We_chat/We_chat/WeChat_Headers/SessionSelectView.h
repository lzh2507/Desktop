//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ContactsDataLogicDelegate-Protocol.h"
#import "IFTSContactMgrExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCDataSearchDelegate-Protocol.h"
#import "WCSearchDelegate-Protocol.h"

@class FTSContactMgr, MMTableView, NSMutableArray, NSMutableDictionary, NSString, WCDataSearcher;
@protocol SessionSelectViewDelegate;

@interface SessionSelectView : UIView <IFTSContactMgrExt, UITableViewDelegate, UITableViewDataSource, WCSearchDelegate, WCDataSearchDelegate, ContactsDataLogicDelegate>
{
    long long m_iSessionType;
    id <SessionSelectViewDelegate> m_delegate;
    MMTableView *m_tableView;
    NSMutableArray *m_arrContacts;
    NSMutableDictionary *m_dicMultiSelect;
    int m_commonSearchScene;
    FTSContactMgr *_ftsContactMgr;
    NSString *nsCurrentSearchText;
    NSMutableArray *arrSearchResultOfContacts;
    NSMutableArray *arrSearchResultOfGroup;
    NSMutableArray *arrSearchResultOfTopHit;
    NSMutableDictionary *dicSearchResult;
    NSMutableArray *arrSectionKey;
    NSMutableArray *m_specialCellList;
    unsigned int _expandBitSet;
    _Bool _chatRoomOnly;
    _Bool m_bShowEnterpriseChat;
    _Bool m_bShowNewSession;
    _Bool m_bShowSelectFromContactList;
    _Bool m_bFilterMyContact;
    _Bool m_bMultiSelect;
    _Bool _m_bIgnoreOpenIM;
    WCDataSearcher *_searcher;
}

@property(retain, nonatomic) WCDataSearcher *searcher; // @synthesize searcher=_searcher;
@property(nonatomic) _Bool m_bIgnoreOpenIM; // @synthesize m_bIgnoreOpenIM=_m_bIgnoreOpenIM;
@property(nonatomic) int m_commonSearchScene; // @synthesize m_commonSearchScene;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect;
@property(nonatomic) _Bool m_bFilterMyContact; // @synthesize m_bFilterMyContact;
@property(nonatomic) _Bool m_bShowSelectFromContactList; // @synthesize m_bShowSelectFromContactList;
@property(nonatomic) _Bool m_bShowNewSession; // @synthesize m_bShowNewSession;
@property(nonatomic) _Bool m_bShowEnterpriseChat; // @synthesize m_bShowEnterpriseChat;
- (void).cxx_destruct;
- (_Bool)isRecentChatSection:(unsigned long long)arg1;
- (_Bool)isBizChatSection:(unsigned long long)arg1;
- (id)getContactInBizChatSessionAtRow:(unsigned long long)arg1;
- (long long)countOfRowForBizChatSession;
- (id)getTitleForBizChatSession;
- (_Bool)hasBizChatSession;
- (void)FilterSearchResultOfNormalContacts:(id)arg1;
- (void)onFTSContactSearchResultChanged:(_Bool)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)isChatRoomEntryCellAtSection:(long long)arg1;
- (_Bool)isMoreCellAtIndexPath:(id)arg1;
- (_Bool)shouldCollaseOrExpandSearchResultAtIndex:(long long)arg1;
- (void)cancelSearch;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)setSearchBarBecomeActive;
- (void)SearchBarBecomeActive;
- (id)viewForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (id)getGroupDispName:(id)arg1;
- (void)onSelect:(id)arg1;
- (void)handleSelectFromContact;
- (void)handleSelectNewSession;
- (void)handleSelectEnterpriseChat:(id)arg1;
- (void)switchSelect:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)updateMultiSelect:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (void)updateMultiSelectView;
- (void)makeChatRoomEntryCell:(id)arg1;
- (void)makeMoreCell:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 HightlightedTop:(_Bool)arg3 showMatchTip:(_Bool)arg4;
- (void)makeCell:(id)arg1 contact:(id)arg2 HightlightedTop:(_Bool)arg3;
- (id)getCellImage:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)makeSpecialCell:(id)arg1 Title:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)idkeyWithResultClick:(_Bool)arg1 withCollapse:(_Bool)arg2;
- (void)chatRoomEntryConvertionKVReport:(_Bool)arg1;
- (id)parseSeperatedKeyword:(id)arg1;
- (_Bool)shouldDisplayChatRoomEntry;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)initView;
- (void)initSearchBar;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)initData;
- (void)multiSelectWithSearchResult:(id)arg1;
- (id)getMatchTipForUsername:(id)arg1;
- (void)cleartSearchQueryTest;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

