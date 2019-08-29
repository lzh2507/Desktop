//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, CTTelephonyNetworkInfo, NSArray, NSData, NSString;

@interface GXGBDData : NSObject
{
    NSString *clientId_;
    NSString *appId_;
    NSString *appKey_;
    CLLocation *location_;
    NSString *wifiInfo_ssid_;
    NSString *wifiInfo_bssid_;
    NSString *wifiInfo_level_;
    CTTelephonyNetworkInfo *telephoneInfo_;
    NSArray *beaconArray_;
    _Bool wifiStatus_;
    int buletooleState_;
    _Bool isType11ReportSuccess_;
    NSString *rrid_;
    NSData *gpdBodyData_;
}

@property(retain, nonatomic) NSData *gpdBodyData; // @synthesize gpdBodyData=gpdBodyData_;
@property(retain, nonatomic) NSString *rrid; // @synthesize rrid=rrid_;
@property(nonatomic) _Bool isType11ReportSuccess; // @synthesize isType11ReportSuccess=isType11ReportSuccess_;
- (void).cxx_destruct;
- (void)sendType11RquestToRemote:(id)arg1;
- (void)reportgbdData;
- (id)buildPostBody;
- (id)buildLbsInfo;
- (id)formatRequestUrl;
- (id)initWithClientId:(id)arg1 andAppId:(id)arg2 andAppKey:(id)arg3 andLocation:(id)arg4 andWifi:(id)arg5 andBeaconArray:(id)arg6 andWifiStatus:(_Bool)arg7 andbuletooleStatus:(int)arg8;

@end

