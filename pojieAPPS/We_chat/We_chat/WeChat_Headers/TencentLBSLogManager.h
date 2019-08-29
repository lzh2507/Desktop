//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TencentLBSLogManager : NSObject
{
    NSString *_appleDataPath;
    NSString *_tencentDataPath;
    NSString *_badDataPath;
    NSString *_calmanPath;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *calmanPath; // @synthesize calmanPath=_calmanPath;
@property(copy, nonatomic) NSString *badDataPath; // @synthesize badDataPath=_badDataPath;
@property(copy, nonatomic) NSString *tencentDataPath; // @synthesize tencentDataPath=_tencentDataPath;
@property(copy, nonatomic) NSString *appleDataPath; // @synthesize appleDataPath=_appleDataPath;
- (void).cxx_destruct;
- (void)upLoadLogData;
- (void)upLoadLogData:(id)arg1;
- (void)writeCalmanDataToFile:(id)arg1;
- (void)writeBadLocationToFile:(id)arg1 wifiMac:(id)arg2 wifiName:(id)arg3;
- (void)writeAppleToFile:(id)arg1 wifiMac:(id)arg2 wifiName:(id)arg3;
- (void)writeLogToFile:(id)arg1 wifiMac:(id)arg2 wifiName:(id)arg3;
- (void)newFile;
- (id)getAllLocationData;
- (id)readFileToData:(id)arg1;
- (void)writeDataToFile:(id)arg1 filePath:(id)arg2;
- (void)deleteFileAtPath:(id)arg1;
- (void)createFileAtPath:(id)arg1;
- (id)init;

@end

