//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

@class NSDictionary, UIColor;

@interface UINavigationBar (IMYCustomNavigationBar)
+ (void)imy_hideWhiteStyleNavigationBar;
+ (void)imy_showWhiteStyleNavigationBar;
+ (id)imy_currentNavigationBar;
+ (void)load;
@property(retain, nonatomic) UIColor *imy_customNavigationBarBackgroundColor;
@property(retain, nonatomic) UIColor *imy_customNavigationBarTitleColor;
@property(retain, nonatomic) UIColor *imy_customNavigationBarTintColor;
- (id)imy_tmpNavigationBarBackgroundView;
@property(retain, nonatomic) UIColor *imy_originalNavigationBarTintColor;
@property(retain, nonatomic) NSDictionary *imy_originalNavigationBarTitleTextAttributes;
@property(nonatomic) _Bool imy_hideCustomNavBarBottomLine;
@property(nonatomic) _Bool imy_isNavigationBarCustomStyle;
- (void)imy_hideCustomNavigationBarWithPercent:(double)arg1;
- (void)imy_showCustomNavigationBarWithPercent:(double)arg1;
- (void)imy_restStyle;
- (void)imy_saveStyle;
- (void)imy_hideWhiteStyleNavigationBar;
- (void)imy_setNavigationBarTextColor:(id)arg1;
- (void)imy_showWhiteStyleNavigationBar;
- (void)setupCustomView;
- (_Bool)enable;
- (void)imycn_layoutSubviews;
@end

