//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class BrandProfileMessageBaseViewModel, CAGradientLayer, CALayer, MMUILabel, MMWebImageView, RichTextView;
@protocol BrandProfileMessageBaseCellDelegate;

@interface BrandProfileMessageBaseCell : MMTableViewCell
{
    RichTextView *m_titleLabel;
    RichTextView *m_digestLabel;
    MMWebImageView *m_coverImageView;
    MMUILabel *m_dateLabel;
    MMUILabel *m_friendReadLabel;
    CALayer *m_itemHighlightLayer;
    CALayer *m_separateLayer;
    CAGradientLayer *m_maskLayer;
    _Bool m_bIsForceHighlight;
    id <BrandProfileMessageBaseCellDelegate> _delegate;
    BrandProfileMessageBaseViewModel *_viewModel;
}

@property(readonly, nonatomic) BrandProfileMessageBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <BrandProfileMessageBaseCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
- (void)addCornerToContentView:(unsigned long long)arg1;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (void)initSeparateLayer;
- (void)initCoverMaskLayer;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initItemHighlightLayer;
- (void)initFriendsReadLabel;
- (void)initTitleLabel;
@property(readonly, nonatomic) MMWebImageView *coverImageView;
- (void)initCoverImageView;
- (void)initDigestLabel;
- (void)initNormalReaderItem;
- (void)initTopReaderItem;
- (void)updateViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end

