//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/BaseReq.h>

@class NSDictionary;

@interface WXOpenBusinessWebViewReq : BaseReq
{
    unsigned int _businessType;
    NSDictionary *_queryInfoDic;
}

@property(retain, nonatomic) NSDictionary *queryInfoDic; // @synthesize queryInfoDic=_queryInfoDic;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
- (void).cxx_destruct;

@end

