//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JVERIFICATIONService : NSObject
{
}

+ (void)customUIWithConfig:(id)arg1 customViews:(CDUnknownBlockType)arg2;
+ (void)customUIWithConfig:(id)arg1;
+ (id)carrierNameArrFromCMSDK;
+ (_Bool)checkVerifyEnable;
+ (_Bool)isSetupClient;
+ (void)setLogOFF;
+ (void)setDebugMode;
+ (void)setDebug:(_Bool)arg1;
+ (void)verifyNumber:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)getToken:(double)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getToken:(CDUnknownBlockType)arg1;
+ (void)dismissLoginController;
+ (void)getAuthorizationWithController:(id)arg1 hide:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getAuthorizationWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)preLogin:(double)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setupWithConfig:(id)arg1;

@end

