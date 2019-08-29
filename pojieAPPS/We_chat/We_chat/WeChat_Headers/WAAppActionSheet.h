//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UIView, UIVisualEffectView, WAContact;
@protocol WAAppActionSheetDelegate;

@interface WAAppActionSheet : MMObject
{
    WAContact *m_contact;
    unsigned long long m_appType;
    NSArray *m_btnTitles;
    NSArray *m_debugTitles;
    NSString *m_cancelTitle;
    NSString *m_destructiveTitle;
    UIImage *m_fakeViewImage;
    _Bool m_isLandScape;
    _Bool m_isDismissing;
    _Bool _isUseWeAppModule;
    _Bool _isHideAppInfoBtn;
    id <WAAppActionSheetDelegate> m_delegate;
    long long _menuPrivacyState;
    UIView *_interateView;
    UIView *_containerView;
    UIVisualEffectView *_blurView;
    NSMutableArray *_btnArray;
    UIButton *_destructiveBtn;
    UIButton *_cancelBtn;
    UIImageView *_maskView;
    UILabel *_headerTitleLabel;
    UIView *_parentView;
}

@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *destructiveBtn; // @synthesize destructiveBtn=_destructiveBtn;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *interateView; // @synthesize interateView=_interateView;
@property(nonatomic) _Bool isHideAppInfoBtn; // @synthesize isHideAppInfoBtn=_isHideAppInfoBtn;
@property(nonatomic) long long menuPrivacyState; // @synthesize menuPrivacyState=_menuPrivacyState;
@property(nonatomic) _Bool isUseWeAppModule; // @synthesize isUseWeAppModule=_isUseWeAppModule;
@property(nonatomic) __weak id <WAAppActionSheetDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)isSmallScreenLandscape;
- (id)setupAppInfoView:(double)arg1;
- (void)onLongPressHeaderButtonLabel:(id)arg1;
- (void)addLongPressGestureForHeaderButton:(id)arg1;
- (void)_releaseViews;
- (struct UIEdgeInsets)realSafeAreaInsets;
- (void)onCancelButtonClick:(id)arg1;
- (void)onDestructiveButtonClick:(id)arg1;
- (void)onHeaerButtonClicked:(id)arg1;
- (void)onStateViewClicked:(id)arg1;
- (void)onButtonClicked:(id)arg1;
- (id)genWeAppInfoBtnWithContact:(id)arg1 appType:(unsigned long long)arg2;
- (id)genDestructiveBtn;
- (id)genNormalBtn:(id)arg1;
- (id)genPrivacyStateView;
- (void)initMaskView;
- (_Bool)isSupportVisualEffect;
- (void)initInterateView;
- (id)setupButtonsView;
- (void)initContainerView;
- (void)setDebugTitles:(id)arg1;
- (_Bool)isVisible;
- (void)dismissWithAnimation;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)getViewHeight;
- (double)getViewWidth;
- (void)didRotate:(id)arg1;
- (double)getActionSheetWidth;
- (id)getHeaderButtonTitle:(id)arg1;
- (void)dealloc;
- (id)initWithUsrName:(id)arg1 appType:(unsigned long long)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 buttonTitleArray:(id)arg5 delegate:(id)arg6;

@end

