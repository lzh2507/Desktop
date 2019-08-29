//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt-Protocol.h"
#import "MMPackageDownloadMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSDictionary, NSString;

@interface DeviceModelConfigMgr : MMService <MMKernelExt, MMService, MMPackageDownloadMgrExt>
{
    int _m_oldVersion;
    NSDictionary *m_dicFromModelJson;
}

+ (id)getDeveceModelConfinPath;
+ (id)getDeviceModelConfigRootDir;
+ (id)getValueFromInfo:(id)arg1 Key:(id)arg2 attrKey:(id)arg3;
+ (unsigned int)parseVersionFromString:(id)arg1;
+ (id)matchCurrentWechatVersion:(id)arg1 WxVersion:(unsigned int)arg2;
+ (id)matchWxVersion:(unsigned int)arg1 platform:(id)arg2 iosVersion:(id)arg3 fromArray:(id)arg4;
@property(nonatomic) int m_oldVersion; // @synthesize m_oldVersion=_m_oldVersion;
@property(retain, nonatomic) NSDictionary *m_dicFromModelJson; // @synthesize m_dicFromModelJson;
- (void).cxx_destruct;
- (_Bool)save:(id)arg1;
- (long long)valueForDeviceModelForKey:(id)arg1 attrKey:(id)arg2 valueDefalut:(long long)arg3;
- (id)getAllVersionArray;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)loadLocalInfo;
- (void)dealloc;
- (void)onServiceInit;
- (void)updateConfig;
- (void)onAuthOK;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

