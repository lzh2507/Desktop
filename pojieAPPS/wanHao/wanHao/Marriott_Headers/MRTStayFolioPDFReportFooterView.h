//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSURL, UILabel;

@interface MRTStayFolioPDFReportFooterView : UIView
{
    UILabel *_importantInformationTitleLabel;
    UILabel *_authenticityTitleLabel;
    UILabel *_authenticityTextLabel;
    UILabel *_privacyTitleLabel;
    UILabel *_privacyTextLabel;
    UILabel *_privacyURLTextLabel;
    NSURL *_privacyURL;
    UILabel *_creditOfPointsTitleLabel;
    UILabel *_creditOfPointsTextLabel;
}

@property(retain, nonatomic) UILabel *creditOfPointsTextLabel; // @synthesize creditOfPointsTextLabel=_creditOfPointsTextLabel;
@property(retain, nonatomic) UILabel *creditOfPointsTitleLabel; // @synthesize creditOfPointsTitleLabel=_creditOfPointsTitleLabel;
@property(retain, nonatomic) NSURL *privacyURL; // @synthesize privacyURL=_privacyURL;
@property(retain, nonatomic) UILabel *privacyURLTextLabel; // @synthesize privacyURLTextLabel=_privacyURLTextLabel;
@property(retain, nonatomic) UILabel *privacyTextLabel; // @synthesize privacyTextLabel=_privacyTextLabel;
@property(retain, nonatomic) UILabel *privacyTitleLabel; // @synthesize privacyTitleLabel=_privacyTitleLabel;
@property(retain, nonatomic) UILabel *authenticityTextLabel; // @synthesize authenticityTextLabel=_authenticityTextLabel;
@property(retain, nonatomic) UILabel *authenticityTitleLabel; // @synthesize authenticityTitleLabel=_authenticityTitleLabel;
@property(retain, nonatomic) UILabel *importantInformationTitleLabel; // @synthesize importantInformationTitleLabel=_importantInformationTitleLabel;
- (void).cxx_destruct;

@end

