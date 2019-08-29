//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YSFSessionMessageContentView.h"

@class UIButton, UIImageView, UIView, YSFLoadProgressView;

@interface YSFSessionImageContentView : YSFSessionMessageContentView
{
    UIImageView *_imageView;
    UIView *_splitLine;
    UIButton *_action;
    YSFLoadProgressView *_progressView;
}

@property(retain, nonatomic) YSFLoadProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *action; // @synthesize action=_action;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)actionClick:(id)arg1;
- (void)updateProgress:(float)arg1;
- (void)onTouchUpInside:(id)arg1;
- (void)layoutSubviews;
- (void)refresh:(id)arg1;
- (id)initSessionMessageContentView;

@end

