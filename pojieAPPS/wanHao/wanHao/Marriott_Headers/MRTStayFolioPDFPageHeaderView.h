//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MRTRemoteImageView, UILabel;

@interface MRTStayFolioPDFPageHeaderView : UIView
{
    UILabel *_pageLabel;
    UILabel *_summaryOfChargesLabel;
    UILabel *_hotelNameLabel;
    MRTRemoteImageView *_logoImageView;
    UILabel *_hotelAddressLine1Label;
    UILabel *_hotelAddressLine2Label;
    UILabel *_hotelPhoneLabel;
}

@property(retain, nonatomic) UILabel *hotelPhoneLabel; // @synthesize hotelPhoneLabel=_hotelPhoneLabel;
@property(retain, nonatomic) UILabel *hotelAddressLine2Label; // @synthesize hotelAddressLine2Label=_hotelAddressLine2Label;
@property(retain, nonatomic) UILabel *hotelAddressLine1Label; // @synthesize hotelAddressLine1Label=_hotelAddressLine1Label;
@property(retain, nonatomic) MRTRemoteImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UILabel *hotelNameLabel; // @synthesize hotelNameLabel=_hotelNameLabel;
@property(retain, nonatomic) UILabel *summaryOfChargesLabel; // @synthesize summaryOfChargesLabel=_summaryOfChargesLabel;
@property(retain, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
- (void).cxx_destruct;

@end
