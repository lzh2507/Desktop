//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTBaseView.h"

@class UIButton, UIImageView, UILabel;
@protocol LeitingCallBackDelegate;

@interface HomeView : LTBaseView
{
    id <LeitingCallBackDelegate> _delegateCallback;
    UIButton *_closeButton;
    UIButton *_registerBtn;
    UIButton *_loginBtn;
    UIButton *_visitorBtn;
    UILabel *_lable;
    UIImageView *_logoImgView;
}

@property(retain, nonatomic) UIImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(retain, nonatomic) UILabel *lable; // @synthesize lable=_lable;
@property(retain, nonatomic) UIButton *visitorBtn; // @synthesize visitorBtn=_visitorBtn;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) UIButton *registerBtn; // @synthesize registerBtn=_registerBtn;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) id <LeitingCallBackDelegate> delegateCallback; // @synthesize delegateCallback=_delegateCallback;
- (void).cxx_destruct;
- (void)visitorV2BtnClick;
- (void)visitorBtnClick;
- (void)loginBtnClick;
- (void)registerBtnClick;
- (void)interfacePortraitLandscape;
- (void)interfacePortraitUpsideDown;
- (void)createViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

