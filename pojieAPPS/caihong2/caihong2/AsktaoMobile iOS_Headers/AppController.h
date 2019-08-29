//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "GeTuiSdkDelegate-Protocol.h"
#import "UIAccelerometerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WatchSessionCallbackDelegate-Protocol.h"

@class NSString, RootViewController, UIWindow;

@interface AppController : NSObject <WatchSessionCallbackDelegate, UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate, UIApplicationDelegate, GeTuiSdkDelegate, CLLocationManagerDelegate>
{
    UIWindow *window;
    RootViewController *viewController;
    NSString *watchCfg;
}

+ (void)setWatch:(id)arg1;
+ (void)doTest;
+ (void)sendImageToWatch:(id)arg1;
+ (float)getAudioVolumn;
+ (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
+ (id)saveImageToGallery:(id)arg1;
+ (int)getOrientation;
+ (void)finishVolumnView;
+ (void)showCapture:(id)arg1;
+ (void)getTextFromClipboard:(id)arg1;
+ (void)copyTextToClipboard:(id)arg1;
+ (void)cancelVibrate;
+ (void)vibrate;
+ (float)getUsedMemory;
+ (float)getAvailMemory;
+ (void)removeNotification;
+ (BOOL)canOpenURL:(id)arg1;
+ (void)openUrl:(id)arg1;
+ (void)addLocalNotification:(id)arg1;
+ (_Bool)isWIFIEnabled;
+ (int)getNetWorkStatus;
+ (void)checkNetWorkStatus:(id)arg1;
+ (void)stopListenNetwork;
+ (void)startListenNetwork;
+ (void)checkBattery:(id)arg1;
+ (void)stopUpdateBatteryState;
+ (void)startUpdateBatteryState;
+ (void)postGpsLocationChanged:(id)arg1;
+ (void)stopLocationListener;
+ (id)startLocationListener:(id)arg1;
+ (id)requestLocationServiceAuthorization;
+ (double)getAccuracyByType:(int)arg1;
+ (id)genUUID;
+ (id)getDeviceString;
+ (float)getTotalMemory;
+ (id)getImei;
+ (id)getIDFA;
+ (id)getMac;
+ (id)getSysInfoByName:(const char *)arg1;
+ (id)getTermInfo;
+ (id)getOSVer;
+ (void)setItemAction:(int)arg1;
+ (void)repairClient;
+ (void)quickActionWithShortcutItem:(id)arg1;
+ (void)postQuickActionWithShortcutItem;
+ (_Bool)preQuickActionWithShortcutItem:(id)arg1;
@property(retain, nonatomic) NSString *watchCfg; // @synthesize watchCfg;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
- (void)sessionManager:(id)arg1 callback:(id)arg2 args:(id)arg3 error:(id)arg4;
- (void)dealloc;
- (void)GeTuiSdkDidSetPushMode:(_Bool)arg1 error:(id)arg2;
- (void)GeTuiSDkDidNotifySdkState:(int)arg1;
- (void)GeTuiSdkDidSendMessage:(id)arg1 result:(int)arg2;
- (void)GeTuiSdkDidReceivePayloadData:(id)arg1 andTaskId:(id)arg2 andMsgId:(id)arg3 andOffLine:(_Bool)arg4 fromGtAppId:(id)arg5;
- (void)GeTuiSdkDidOccurError:(id)arg1;
- (void)GeTuiSdkDidRegisterClient:(id)arg1;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)registerUserNotification;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)keyboardDidHide:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

