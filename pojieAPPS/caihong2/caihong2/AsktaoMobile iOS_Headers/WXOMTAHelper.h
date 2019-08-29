//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WXOMTAEnv, WXOMTAUser;

@interface WXOMTAHelper : NSObject
{
    WXOMTAEnv *env;
    WXOMTAUser *user;
    _Bool _MTAEnableFlag;
    _Bool _reportNewCrashReport;
    NSString *_speedTestStr;
}

+ (unsigned long long)getBootTime;
+ (_Bool)isJB;
+ (id)getInstance;
+ (void)getCTTelephonyNetworkInfo:(CDUnknownBlockType)arg1;
+ (id)md5encrypt:(id)arg1;
+ (int)GUnzip:(id)arg1 Out:(id *)arg2;
+ (int)GZip:(id)arg1 Out:(id *)arg2;
+ (void)ChiperRC4:(id)arg1;
@property(retain, nonatomic) NSString *speedTestStr; // @synthesize speedTestStr=_speedTestStr;
@property _Bool reportNewCrashReport; // @synthesize reportNewCrashReport=_reportNewCrashReport;
@property _Bool MTAEnableFlag; // @synthesize MTAEnableFlag=_MTAEnableFlag;
- (void).cxx_destruct;
- (id)getNetworkType;
- (id)getJson:(id)arg1;
- (_Bool)checkMTAEnable;
- (id)fetchSSIDInfo;
- (id)init;
- (id)getUser;
- (id)getEnv;

@end
