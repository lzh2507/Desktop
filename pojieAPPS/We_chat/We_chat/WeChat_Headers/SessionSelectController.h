//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCSearchControllBaseViewController.h"

#import "ContactPickerViewDelegate-Protocol.h"
#import "CreateChatLogicDelegate-Protocol.h"
#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "NewContactsSearchPanelViewDelegate-Protocol.h"
#import "SelectTagContactsViewControllerDelegate-Protocol.h"
#import "SessionSelectViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CContact, CreateChatLogic, FavClickStreamHelper, NSMutableArray, NSObject, NSString, NewContactsSearchPanelView, SessionSelectView, UIAlertController;
@protocol SessionSelectControllerDelegate;

@interface SessionSelectController : WCSearchControllBaseViewController <SessionSelectViewDelegate, NewContactsSearchPanelViewDelegate, SelectTagContactsViewControllerDelegate, MultiSelectContactsViewControllerDelegate, ContactPickerViewDelegate, CreateChatLogicDelegate, UIAlertViewDelegate>
{
    long long m_iSessionType;
    id <SessionSelectControllerDelegate> m_delegate;
    NSMutableArray *m_selectedContacts;
    int m_confirmType;
    int m_barTitleType;
    CreateChatLogic *m_createChatLogic;
    NSObject *_userData;
    UIAlertController *selectAlertController;
    SessionSelectView *m_selectView;
    int m_commonSearchScene;
    NewContactsSearchPanelView *m_panelView;
    _Bool m_bMultiSelect;
    struct UIEdgeInsets m_UIEdgeInsets;
    CContact *m_fastCreatedGroupContact;
    FavClickStreamHelper *m_clickHelper;
    _Bool m_bShowEnterpriseChat;
    _Bool m_bShowNewSession;
    _Bool m_bFilterMyContact;
    _Bool _m_bKeepCurViewAfterSelect;
    _Bool _m_bShowMultiSelectRightBtn;
    _Bool _m_onlyChatRoom;
    _Bool _m_bContainOpenIM;
    _Bool _shouldInSearchStatus;
    NSString *_m_directSearchText;
}

@property(retain, nonatomic) NSString *m_directSearchText; // @synthesize m_directSearchText=_m_directSearchText;
@property(nonatomic) _Bool shouldInSearchStatus; // @synthesize shouldInSearchStatus=_shouldInSearchStatus;
@property(retain, nonatomic) NSObject *userData; // @synthesize userData=_userData;
@property(nonatomic) _Bool m_bContainOpenIM; // @synthesize m_bContainOpenIM=_m_bContainOpenIM;
@property(nonatomic) _Bool m_onlyChatRoom; // @synthesize m_onlyChatRoom=_m_onlyChatRoom;
@property(nonatomic) _Bool m_bShowMultiSelectRightBtn; // @synthesize m_bShowMultiSelectRightBtn=_m_bShowMultiSelectRightBtn;
@property(nonatomic) _Bool m_bKeepCurViewAfterSelect; // @synthesize m_bKeepCurViewAfterSelect=_m_bKeepCurViewAfterSelect;
@property(nonatomic) int m_commonSearchScene; // @synthesize m_commonSearchScene;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
@property(nonatomic) int barTitleType; // @synthesize barTitleType=m_barTitleType;
@property(nonatomic) int confirmType; // @synthesize confirmType=m_confirmType;
@property(nonatomic) __weak id <SessionSelectControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_bFilterMyContact; // @synthesize m_bFilterMyContact;
@property(nonatomic) _Bool m_bShowNewSession; // @synthesize m_bShowNewSession;
@property(nonatomic) _Bool m_bShowEnterpriseChat; // @synthesize m_bShowEnterpriseChat;
- (void).cxx_destruct;
- (void)onSelectCancel;
- (void)onCreateChatRoom:(id)arg1;
- (void)onSelectChatRoomWithArrKeywords:(id)arg1;
- (void)onMultiCancel:(id)arg1;
- (void)onSelectDoneWithContacts:(id)arg1;
- (void)contactInBizChatSessionViewDidSelect:(id)arg1;
- (id)contactInBizChatSessionViewAtRow:(unsigned long long)arg1;
- (long long)numberOfRowInBizChatSessionView;
- (id)sectionTitleForBizChatSessionView;
- (_Bool)showChatRoomOnly;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)OnSelectFromContactSelectView:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (id)onSessionSelectGetSearchString;
- (void)onSessionSelectSearchSessions:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (void)onSessionSelectSearch:(id)arg1;
- (id)viewForPanelResultFooterInSection:(long long)arg1;
- (double)heightForPanelResultFooterInSection:(long long)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)doTagSearch:(id)arg1 arrContacts:(id)arg2;
- (id)makeFiterContactToTagSearchView:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)searchTextFieldDidBeginEditing;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)onMultiDone;
- (void)updatePanelBtn;
- (void)updatePanelView:(id)arg1;
- (_Bool)checkAndAllowNewSelect:(id)arg1;
- (void)selectViewWillBeginDragging:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)HideSelectAlert;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)OnSelectCreateRoomSelectView:(id)arg1;
- (void)OnSelectSession:(id)arg1 SelectView:(id)arg2;
- (void)showDirectSearchText;
- (void)chatRoomEntryOperateKVReport:(_Bool)arg1;
- (void)confirmForword;
- (void)cancelForwording;
- (id)getGroupDispName:(id)arg1;
- (void)onSelect:(id)arg1;
- (void)performCallback;
- (void)callbackDelegate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)animateUpdateView;
- (void)updateView;
- (void)initTitle;
- (void)initBarItem;
- (void)onShowMultiSelect:(id)arg1;
- (void)respondsToOnSelectSessionCancel;
- (void)onCancel:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

