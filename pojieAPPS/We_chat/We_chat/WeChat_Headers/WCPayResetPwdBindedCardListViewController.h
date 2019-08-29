//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"

@class MMTipsViewController, NSMutableArray, NSString, RichTextView, UIButton, WCPayBindCardInfo;
@protocol WCPayResetPwdBindedCardListViewControllerDelegate;

@interface WCPayResetPwdBindedCardListViewController : WCPayBaseViewController <MMTipsViewControllerDelegate, ILinkEventExt>
{
    UIButton *m_footerButton;
    NSMutableArray *m_cellInfoArray;
    WCPayBindCardInfo *selectedPayCardInfo;
    id <WCPayResetPwdBindedCardListViewControllerDelegate> m_delegate;
    _Bool bSelectedNewCardToResetPwd;
    RichTextView *richTextView;
    _Bool bPoped;
    UIButton *_qaButton;
    MMTipsViewController *_errorTipsViewController;
}

@property(retain, nonatomic) MMTipsViewController *errorTipsViewController; // @synthesize errorTipsViewController=_errorTipsViewController;
@property(retain, nonatomic) UIButton *qaButton; // @synthesize qaButton=_qaButton;
- (void).cxx_destruct;
- (void)onQAButtonClick;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNext;
- (void)OnSelectNewCard;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)OnSelectInvalidCard:(struct WCTableViewNormalCellManager *)arg1;
- (void)OnSelectCard:(struct WCTableViewNormalCellManager *)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadCardListView;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)OnResetPwdBindedCardListBack;
- (void)viewDidBePoped:(_Bool)arg1;
- (_Bool)checkBankCanShow:(id)arg1;
- (id)checkBankAvailable:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

