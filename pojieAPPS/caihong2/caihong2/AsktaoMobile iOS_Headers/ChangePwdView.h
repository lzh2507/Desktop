//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTBaseView.h"

#import "UITextFieldDelegate-Protocol.h"

@class LTTextField, NSString, UIButton, UILabel;

@interface ChangePwdView : LTBaseView <UITextFieldDelegate>
{
    _Bool _isShowPwd1;
    _Bool _isShowPwd;
    _Bool _isShowPwd2;
    UILabel *_oldPwdLable;
    UILabel *_nPwdLable;
    UILabel *_nPwdSureLable;
    LTTextField *_keyText;
    LTTextField *_nPwdText;
    LTTextField *_nPwdSureText;
    UIButton *_submitBtn;
    UIButton *_showPwd1;
    UIButton *_showPwd;
    UIButton *_showPwd2;
    NSString *_bindname;
    NSString *_mode;
}

@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *bindname; // @synthesize bindname=_bindname;
@property(nonatomic) _Bool isShowPwd2; // @synthesize isShowPwd2=_isShowPwd2;
@property(retain, nonatomic) UIButton *showPwd2; // @synthesize showPwd2=_showPwd2;
@property(nonatomic) _Bool isShowPwd; // @synthesize isShowPwd=_isShowPwd;
@property(retain, nonatomic) UIButton *showPwd; // @synthesize showPwd=_showPwd;
@property(nonatomic) _Bool isShowPwd1; // @synthesize isShowPwd1=_isShowPwd1;
@property(retain, nonatomic) UIButton *showPwd1; // @synthesize showPwd1=_showPwd1;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) LTTextField *nPwdSureText; // @synthesize nPwdSureText=_nPwdSureText;
@property(retain, nonatomic) LTTextField *nPwdText; // @synthesize nPwdText=_nPwdText;
@property(retain, nonatomic) LTTextField *keyText; // @synthesize keyText=_keyText;
@property(retain, nonatomic) UILabel *nPwdSureLable; // @synthesize nPwdSureLable=_nPwdSureLable;
@property(retain, nonatomic) UILabel *nPwdLable; // @synthesize nPwdLable=_nPwdLable;
@property(retain, nonatomic) UILabel *oldPwdLable; // @synthesize oldPwdLable=_oldPwdLable;
- (void).cxx_destruct;
- (void)submitBtnClick;
- (void)showPwd1Click;
- (void)showPwdClick;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)interfacePortrait;
- (void)createViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

