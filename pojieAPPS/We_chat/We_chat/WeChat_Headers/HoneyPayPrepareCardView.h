//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField, WCPayWebImageView;
@protocol HoneyPayPrepareCardViewDelegate;

@interface HoneyPayPrepareCardView : UIView <UITextFieldDelegate>
{
    id <HoneyPayPrepareCardViewDelegate> _delegate;
    NSString *_title;
    NSString *_cardAmount;
    NSString *_iconUrl;
    unsigned long long _type;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_unitLabel;
    UITextField *_textField;
    WCPayWebImageView *_icon;
}

@property(retain, nonatomic) WCPayWebImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *cardAmount; // @synthesize cardAmount=_cardAmount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <HoneyPayPrepareCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

