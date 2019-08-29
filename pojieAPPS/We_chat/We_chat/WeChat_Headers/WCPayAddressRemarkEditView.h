//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel, UITextField, WCPayAddressInfo;
@protocol WCPayAddressRemarkEditViewDelegate;

@interface WCPayAddressRemarkEditView : UIView
{
    unsigned int _remarkMaxLength;
    NSString *_remark;
    WCPayAddressInfo *_address;
    NSString *_remarkHolder;
    NSString *_addressHolder;
    id <WCPayAddressRemarkEditViewDelegate> _m_delegate;
    UIView *_m_paddingBackgroundView;
    UITextField *_m_remarkTextField;
    UIView *_m_lineView;
    UIView *_m_addressBackgroundView;
    UIImageView *_m_addAddressIcon;
    UILabel *_m_addAddressLabel;
    UIButton *_m_addAddressButton;
    UILabel *_m_editAddressLabel;
    UIButton *_m_removeButton;
    UIButton *_m_editButton;
    UIView *_m_addressLineView;
    UILabel *_m_nameLabel;
    UILabel *_m_phoneLabel;
    UILabel *_m_addressLabel;
}

@property(retain) UILabel *m_addressLabel; // @synthesize m_addressLabel=_m_addressLabel;
@property(retain) UILabel *m_phoneLabel; // @synthesize m_phoneLabel=_m_phoneLabel;
@property(retain) UILabel *m_nameLabel; // @synthesize m_nameLabel=_m_nameLabel;
@property(retain) UIView *m_addressLineView; // @synthesize m_addressLineView=_m_addressLineView;
@property(retain) UIButton *m_editButton; // @synthesize m_editButton=_m_editButton;
@property(retain) UIButton *m_removeButton; // @synthesize m_removeButton=_m_removeButton;
@property(retain) UILabel *m_editAddressLabel; // @synthesize m_editAddressLabel=_m_editAddressLabel;
@property(retain) UIButton *m_addAddressButton; // @synthesize m_addAddressButton=_m_addAddressButton;
@property(retain) UILabel *m_addAddressLabel; // @synthesize m_addAddressLabel=_m_addAddressLabel;
@property(retain) UIImageView *m_addAddressIcon; // @synthesize m_addAddressIcon=_m_addAddressIcon;
@property(retain) UIView *m_addressBackgroundView; // @synthesize m_addressBackgroundView=_m_addressBackgroundView;
@property(retain) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain) UITextField *m_remarkTextField; // @synthesize m_remarkTextField=_m_remarkTextField;
@property(retain) UIView *m_paddingBackgroundView; // @synthesize m_paddingBackgroundView=_m_paddingBackgroundView;
@property __weak id <WCPayAddressRemarkEditViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property unsigned int remarkMaxLength; // @synthesize remarkMaxLength=_remarkMaxLength;
@property(retain) NSString *addressHolder; // @synthesize addressHolder=_addressHolder;
@property(retain) NSString *remarkHolder; // @synthesize remarkHolder=_remarkHolder;
@property(retain) WCPayAddressInfo *address; // @synthesize address=_address;
@property(retain) NSString *remark; // @synthesize remark=_remark;
- (void).cxx_destruct;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onEditButtonClick;
- (void)onRemoveButtonClick;
- (void)onAddButtonClick;
- (void)textFieldDidChange:(id)arg1;
- (void)onTextFieldDidEndOnExit;
- (void)updateAddressLabel;
- (void)updatePhoneLabel;
- (void)updateNameLabel;
- (void)updateEditButton;
- (void)updateRemoveButton;
- (void)updateEditAddressLabel;
- (void)updateAddAddressButton;
- (void)updateAddAddressLabel;
- (void)updateAddAddressIcon;
- (void)updateAddressBackgroundView;
- (void)updateLineView;
- (void)updateRemarkTextField;
- (void)updatePaddingBackgroundView;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithRemark:(id)arg1 address:(id)arg2 remarkHolder:(id)arg3 addressHolder:(id)arg4 remarkMaxLength:(unsigned int)arg5;
- (void)dealloc;

@end

