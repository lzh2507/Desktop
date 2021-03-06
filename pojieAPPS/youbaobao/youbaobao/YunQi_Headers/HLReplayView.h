//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HLVBaseView.h"

@class IMYTouchEXButton, UIImageView, UILabel, UIView;

@interface HLReplayView : HLVBaseView
{
    UIImageView *_imageView;
    UIView *_shadowView;
    IMYTouchEXButton *_replayButton;
    UILabel *_replayLabel;
    IMYTouchEXButton *_shareButton;
    UILabel *_shareLabel;
}

@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic, getter=lazyGetShareButtonThenLayout) IMYTouchEXButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *replayLabel; // @synthesize replayLabel=_replayLabel;
@property(retain, nonatomic) IMYTouchEXButton *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutForOrientation:(long long)arg1;
- (void)UICustomize;
- (void)createComponents;
- (id)initWithTheme:(id)arg1;

@end

