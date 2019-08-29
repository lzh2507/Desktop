//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/UAReachabilityDelegate-Protocol.h>
#import <OfferWallBase/UATimerDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, UAAPIManager, UAReachability, UASDKServerConfig, UATimer;

@interface UASDKLogin : NSObject <UAReachabilityDelegate, UATimerDelegate>
{
    UATimer *_timer;
    UAAPIManager *_apiManager;
    UAReachability *_reachability;
    UASDKServerConfig *_serverConfig;
    NSMutableDictionary *_sdkData;
}

+ (id)shareLogin;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSMutableDictionary *sdkData; // @synthesize sdkData=_sdkData;
@property(retain, nonatomic) UASDKServerConfig *serverConfig; // @synthesize serverConfig=_serverConfig;
@property(retain, nonatomic) UAReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) UAAPIManager *apiManager; // @synthesize apiManager=_apiManager;
@property(retain, nonatomic) UATimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)creatNavWithTargetVC:(id)arg1 customModel:(id)arg2 currentVC:(id)arg3;
- (void)creatSMSVCWithModel:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)creatAuthVCWithModel:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)printConsoleEnable:(_Bool)arg1;
@property(readonly, nonatomic) NSDictionary *networkInfo;
- (_Bool)delectScrip;
- (void)getTokenCompletion:(CDUnknownBlockType)arg1;
- (void)sdkLoginWithModel:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)mobileAuthCompletion:(CDUnknownBlockType)arg1;
- (void)getAuthorizationWithModel:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)validatePhoneScripCache;
- (void)getPhoneNumberCompletion:(CDUnknownBlockType)arg1;
- (_Bool)diagnoseSDKRunningStatusWithCompletion:(CDUnknownBlockType)arg1 methodName:(id)arg2;
- (void)setTimeoutInterval:(double)arg1;
- (void)prepareRequestData;
- (id)NOSupportUACarrierGetMobileAuthWithCarrierType:(long long)arg1;
- (id)NOSupportUACarrierGetNumberWithCarrierType:(long long)arg1;
- (id)diagnoseGettingPhonenumberCondition;
- (void)registerAppId:(id)arg1 AppKey:(id)arg2;
- (void)timerDidTimeout:(id)arg1;
- (void)reachabilityDidRecieveNetworkChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
