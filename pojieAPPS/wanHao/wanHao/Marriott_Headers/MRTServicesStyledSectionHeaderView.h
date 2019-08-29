//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MRTStyledLabel, NSString, UIColor;

@interface MRTServicesStyledSectionHeaderView : UITableViewHeaderFooterView
{
    NSString *_headerTitle;
    NSString *_subtitle;
    UIColor *_headerTitleColor;
    MRTStyledLabel *_headerLabel;
    MRTStyledLabel *_subtitleLabel;
}

@property(retain, nonatomic) MRTStyledLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MRTStyledLabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIColor *headerTitleColor; // @synthesize headerTitleColor=_headerTitleColor;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
