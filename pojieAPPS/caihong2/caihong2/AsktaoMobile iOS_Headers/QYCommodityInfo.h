//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSF_NIMCustomAttachment-Protocol.h"

@class NSArray, NSString, UIColor;

@interface QYCommodityInfo : NSObject <YSF_NIMCustomAttachment>
{
    _Bool _show;
    _Bool _isCustom;
    _Bool _sendByUser;
    _Bool _bAuto;
    NSString *_title;
    NSString *_desc;
    NSString *_pictureUrlString;
    NSString *_urlString;
    NSString *_note;
    NSArray *_tagsArray;
    NSString *_tagsString;
    NSString *_actionText;
    UIColor *_actionTextColor;
    NSString *_ext;
    NSString *_payMoney;
    NSString *_price;
    NSString *_orderCount;
    NSString *_orderSku;
    NSString *_orderStatus;
    NSString *_orderId;
    NSString *_orderTime;
    NSString *_activity;
    NSString *_activityHref;
}

+ (id)objectByDict:(id)arg1;
@property(nonatomic) _Bool bAuto; // @synthesize bAuto=_bAuto;
@property(copy, nonatomic) NSString *activityHref; // @synthesize activityHref=_activityHref;
@property(copy, nonatomic) NSString *activity; // @synthesize activity=_activity;
@property(copy, nonatomic) NSString *orderTime; // @synthesize orderTime=_orderTime;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *orderStatus; // @synthesize orderStatus=_orderStatus;
@property(copy, nonatomic) NSString *orderSku; // @synthesize orderSku=_orderSku;
@property(copy, nonatomic) NSString *orderCount; // @synthesize orderCount=_orderCount;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *payMoney; // @synthesize payMoney=_payMoney;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) UIColor *actionTextColor; // @synthesize actionTextColor=_actionTextColor;
@property(copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(nonatomic) _Bool sendByUser; // @synthesize sendByUser=_sendByUser;
@property(nonatomic) _Bool isCustom; // @synthesize isCustom=_isCustom;
@property(copy, nonatomic) NSString *tagsString; // @synthesize tagsString=_tagsString;
@property(copy, nonatomic) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *pictureUrlString; // @synthesize pictureUrlString=_pictureUrlString;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)encodeAttachment;
- (id)contentConfig;
- (id)thumbText;
- (_Bool)isEqual:(id)arg1;
- (void)checkCommodityInfoValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

