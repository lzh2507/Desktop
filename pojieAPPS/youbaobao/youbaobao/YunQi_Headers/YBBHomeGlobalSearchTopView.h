//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UITextField;

@interface YBBHomeGlobalSearchTopView : UIView
{
    _Bool _willShowBackButton;
    UIImageView *_imageBg;
    UIView *_textFieldBg;
    UIImageView *_searchIcon;
    UITextField *_textField;
    UIButton *_backButton;
    UIButton *_cancelButton;
}

@property(nonatomic) _Bool willShowBackButton; // @synthesize willShowBackButton=_willShowBackButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak UIImageView *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(nonatomic) __weak UIView *textFieldBg; // @synthesize textFieldBg=_textFieldBg;
@property(nonatomic) __weak UIImageView *imageBg; // @synthesize imageBg=_imageBg;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hideBackButton;
- (void)showBackButton;
- (void)awakeFromNib;

@end
