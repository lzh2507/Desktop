//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface MRTRateDetailsHeaderCell : UITableViewCell
{
    UILabel *_propertyNameLabel;
    UILabel *_rateDetailsLabel;
    UILabel *_rateDescriptionLabel;
}

@property(nonatomic) __weak UILabel *rateDescriptionLabel; // @synthesize rateDescriptionLabel=_rateDescriptionLabel;
@property(nonatomic) __weak UILabel *rateDetailsLabel; // @synthesize rateDetailsLabel=_rateDetailsLabel;
@property(nonatomic) __weak UILabel *propertyNameLabel; // @synthesize propertyNameLabel=_propertyNameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

