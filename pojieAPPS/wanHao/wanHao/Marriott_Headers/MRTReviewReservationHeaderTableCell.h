//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTReviewReservationTableCell.h"

@class MRTProperty, MRTRoomsSearchRequest, MRTStyledLabel, UIButton, UIImageView;

@interface MRTReviewReservationHeaderTableCell : MRTReviewReservationTableCell
{
    MRTStyledLabel *_reviewHeaderLabel;
    MRTStyledLabel *_propertyNameLabel;
    MRTStyledLabel *_propertyAddressLabel;
    UIButton *_propertyPhoneNumberButton;
    UIImageView *_brandImageView;
    UIImageView *_roomImageView;
    MRTProperty *_property;
    MRTRoomsSearchRequest *_request;
}

@property(retain, nonatomic) MRTRoomsSearchRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) MRTProperty *property; // @synthesize property=_property;
@property(retain, nonatomic) UIImageView *roomImageView; // @synthesize roomImageView=_roomImageView;
@property(retain, nonatomic) UIImageView *brandImageView; // @synthesize brandImageView=_brandImageView;
@property(retain, nonatomic) UIButton *propertyPhoneNumberButton; // @synthesize propertyPhoneNumberButton=_propertyPhoneNumberButton;
@property(retain, nonatomic) MRTStyledLabel *propertyAddressLabel; // @synthesize propertyAddressLabel=_propertyAddressLabel;
@property(retain, nonatomic) MRTStyledLabel *propertyNameLabel; // @synthesize propertyNameLabel=_propertyNameLabel;
@property(retain, nonatomic) MRTStyledLabel *reviewHeaderLabel; // @synthesize reviewHeaderLabel=_reviewHeaderLabel;
- (void).cxx_destruct;
- (id)parentViewController;
- (void)callButtonPressed:(id)arg1;
- (void)prepareWithRoom:(id)arg1 request:(id)arg2 bookingItem:(id)arg3;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end
