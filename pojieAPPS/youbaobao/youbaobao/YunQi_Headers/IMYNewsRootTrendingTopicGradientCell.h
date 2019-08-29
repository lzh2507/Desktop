//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYNewsRootBaseCell.h"

@class CAGradientLayer, UIImageView, UILabel, UIView;

@interface IMYNewsRootTrendingTopicGradientCell : IMYNewsRootBaseCell
{
    UIImageView *_topicImageView;
    UILabel *_topicTitleLabel;
    UIView *_separateLine;
    UILabel *_topicDesLabel;
    UILabel *_replyCountLabel;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *replyCountLabel; // @synthesize replyCountLabel=_replyCountLabel;
@property(retain, nonatomic) UILabel *topicDesLabel; // @synthesize topicDesLabel=_topicDesLabel;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *topicTitleLabel; // @synthesize topicTitleLabel=_topicTitleLabel;
@property(retain, nonatomic) UIImageView *topicImageView; // @synthesize topicImageView=_topicImageView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCellModel:(id)arg1;
- (void)prepareUI;

@end
