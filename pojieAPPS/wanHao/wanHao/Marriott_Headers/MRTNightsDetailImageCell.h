//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTNightsDetailCell.h"

@class UIImageView, UILabel;

@interface MRTNightsDetailImageCell : MRTNightsDetailCell
{
    UIImageView *_arcImageView;
    UILabel *_headerLabel;
    UILabel *_valueLabel;
}

@property(nonatomic) __weak UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak UIImageView *arcImageView; // @synthesize arcImageView=_arcImageView;
- (void).cxx_destruct;
- (void)inject:(id)arg1;
- (void)awakeFromNib;

@end

