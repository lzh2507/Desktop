//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GXDyncSdkConfig : NSObject
{
}

+ (void)emptySyncConfigForLBS;
+ (void)emptySyncConfigForEXT;
+ (void)emptySyncConfigForGBD;
+ (void)emptySyncConfigForMain;
+ (int)getMacPingCount;
+ (int)getMacReportcount;
+ (int)getMacScanInterval;
+ (_Bool)getMacScanEnable;
+ (_Bool)getReportEnable_AppBgSet;
+ (int)getCacheReportNumber;
+ (_Bool)getCacheReportEnable;
+ (_Bool)getCrashCatchEnable;
+ (id)getLogFulApiUrl;
+ (_Bool)getLogfulEnable;
+ (int)getBackgroundType;
+ (_Bool)getJsEnable;
+ (id)getDiagnosticToolsKey;
+ (_Bool)getDiagnosticToolsEnable;
+ (id)getStringForUDKey:(id)arg1 andDefaultValue:(id)arg2;
+ (int)getIntForUDKey:(id)arg1 andDefaultValue:(int)arg2;
+ (_Bool)getBoolForUDKey:(id)arg1 andDefaultValue:(_Bool)arg2;

@end

