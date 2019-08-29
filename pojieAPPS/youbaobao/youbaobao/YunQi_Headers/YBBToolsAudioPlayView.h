//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSString, UIButton, UIImageView, UILabel;

@interface YBBToolsAudioPlayView : UIView
{
    CDUnknownBlockType _playCB;
    UIImageView *_animateImageView;
    UILabel *_titleLabel;
    UIImageView *_bgImgView;
    UIImageView *_frontImageView;
    CALayer *_gradientLayer;
    UIImageView *_statusImageView;
    UIButton *_playButton;
    UIImageView *_loadingImageView;
    unsigned long long _status;
    NSString *_urlString;
    NSString *_identifier;
}

+ (struct CGSize)viewSize;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *frontImageView; // @synthesize frontImageView=_frontImageView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *animateImageView; // @synthesize animateImageView=_animateImageView;
@property(copy, nonatomic) CDUnknownBlockType playCB; // @synthesize playCB=_playCB;
- (void).cxx_destruct;
- (id)maskLayer:(double)arg1;
- (void)setupUI;
- (void)playButtonClick:(id)arg1;
- (void)updateUrl:(id)arg1 identifier:(id)arg2;
- (void)updateStatus:(unsigned long long)arg1;
- (void)updateAudioLength:(long long)arg1;
- (void)updatePlayPercent:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
