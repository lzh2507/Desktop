//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILinkEventExt-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"
#import "WCPayAreaItemDelegate-Protocol.h"
#import "WCPayCountryCodeItemDelegate-Protocol.h"
#import "WCPayGetProfessionItemDelegate-Protocol.h"

@class NSMutableArray, NSString, RealNameNewWordingSection, TPIDKeyboardView, UIButton, UILabel, WCBaseTextFieldItem, WCPayAreaItem, WCPayCountryCodeItem, WCPayCredTypeItem, WCPayGetProfessionItem, WCPayRealnameViewData, WCPaySelectCountItem, WCPaySelectDateItem;
@protocol WCPayRealnameInfoViewV2Delegate;

@interface WCPayRealnameInfoViewV2 : UIView <WCPayCountryCodeItemDelegate, ILinkEventExt, WCPayAreaItemDelegate, WCPayGetProfessionItemDelegate, WCBaseInfoItemDelegate>
{
    UIView *_baseGrowView;
    UIView *_growView;
    UIView *_headerView;
    UILabel *_titleView;
    WCBaseTextFieldItem *_nameView;
    WCPayCredTypeItem *_holderIDTypeView;
    WCBaseTextFieldItem *_holderIdView;
    WCPayAreaItem *_areaView;
    WCPayGetProfessionItem *_professionView;
    WCPaySelectDateItem *_birthView;
    WCPaySelectDateItem *_expireView;
    WCPaySelectCountItem *_renewView;
    WCPayCountryCodeItem *_nationView;
    UIView *_footerView;
    UIButton *_nextButton;
    double _minHeight;
    NSString *_name;
    id <WCPayRealnameInfoViewV2Delegate> _m_delegate;
    WCPayRealnameViewData *_viewData;
    RealNameNewWordingSection *_currentSession;
    NSMutableArray *_itemArray;
    TPIDKeyboardView *_keyboard;
}

@property(retain) TPIDKeyboardView *keyboard; // @synthesize keyboard=_keyboard;
@property(retain) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain) RealNameNewWordingSection *currentSession; // @synthesize currentSession=_currentSession;
@property(retain) WCPayRealnameViewData *viewData; // @synthesize viewData=_viewData;
@property __weak id <WCPayRealnameInfoViewV2Delegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain) NSString *name; // @synthesize name=_name;
@property double minHeight; // @synthesize minHeight=_minHeight;
@property(retain) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) WCPayCountryCodeItem *nationView; // @synthesize nationView=_nationView;
@property(retain) WCPaySelectCountItem *renewView; // @synthesize renewView=_renewView;
@property(retain) WCPaySelectDateItem *expireView; // @synthesize expireView=_expireView;
@property(retain) WCPaySelectDateItem *birthView; // @synthesize birthView=_birthView;
@property(retain) WCPayGetProfessionItem *professionView; // @synthesize professionView=_professionView;
@property(retain) WCPayAreaItem *areaView; // @synthesize areaView=_areaView;
@property(retain) WCBaseTextFieldItem *holderIdView; // @synthesize holderIdView=_holderIdView;
@property(retain) WCPayCredTypeItem *holderIDTypeView; // @synthesize holderIDTypeView=_holderIDTypeView;
@property(retain) WCBaseTextFieldItem *nameView; // @synthesize nameView=_nameView;
@property(retain) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *growView; // @synthesize growView=_growView;
@property(retain) UIView *baseGrowView; // @synthesize baseGrowView=_baseGrowView;
- (void).cxx_destruct;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(_Bool)arg2;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (_Bool)buttonEnabled;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)getViewController;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)resignExcept:(id)arg1;
- (void)resignItem;
- (void)onClickAreaView:(id)arg1;
- (void)onClickProfessionView:(id)arg1;
- (void)onClickHolderIDType:(id)arg1;
- (void)onClickNation:(id)arg1;
- (void)onClickNextButton;
- (void)updateNextButton;
- (void)configureBaseView:(id)arg1 option:(CDUnknownBlockType)arg2;
- (void)updateFooterView;
- (void)updateNationView;
- (void)updateRenewView;
- (void)updateExpireView;
- (void)updateAreaView;
- (void)updateBirthView;
- (long long)nowYear;
- (void)updateProfessionView;
- (void)updateHolderIdView;
- (void)updateHolderIdTypeView;
- (void)updateNameView;
- (void)updateTitleView;
- (void)updateHeaderView;
- (void)addLine:(id)arg1 option:(CDUnknownBlockType)arg2;
- (void)addRightImage:(id)arg1 baseView:(id)arg2;
- (void)addTitle:(id)arg1 baseView:(id)arg2;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithName:(id)arg1 viewData:(id)arg2 minHeight:(double)arg3 delegate:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

