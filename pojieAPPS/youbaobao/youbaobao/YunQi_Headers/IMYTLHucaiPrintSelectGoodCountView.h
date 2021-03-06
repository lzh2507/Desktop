//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLView.h"

@class IMYButton, IMYTLSteper, UIButton, UIImageView, UILabel, UIView;

@interface IMYTLHucaiPrintSelectGoodCountView : IMYTLView
{
    UIView *_bgView;
    UIView *_contentView;
    UIView *_infoView;
    UIView *_coutView;
    UILabel *_buyCountLabel;
    IMYButton *_buyButton;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UIButton *_cancelButton;
    IMYTLSteper *_steper;
    CDUnknownBlockType _buyBlock;
}

+ (void)showSelectGoodCountWithImageUrl:(id)arg1 title:(id)arg2 prePrice:(double)arg3 currentCount:(long long)arg4 maxCount:(long long)arg5 buyBlock:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) CDUnknownBlockType buyBlock; // @synthesize buyBlock=_buyBlock;
@property(retain, nonatomic) IMYTLSteper *steper; // @synthesize steper=_steper;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak IMYButton *buyButton; // @synthesize buyButton=_buyButton;
@property(nonatomic) __weak UILabel *buyCountLabel; // @synthesize buyCountLabel=_buyCountLabel;
@property(nonatomic) __weak UIView *coutView; // @synthesize coutView=_coutView;
@property(nonatomic) __weak UIView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)buyAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

