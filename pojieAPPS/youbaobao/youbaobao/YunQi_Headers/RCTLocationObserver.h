//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSDictionary, NSMutableArray, NSString;

@interface RCTLocationObserver : RCTEventEmitter <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSDictionary *_lastLocationEvent;
    NSMutableArray *_pendingRequests;
    _Bool _observingLocation;
    _Bool _usingSignificantChanges;
    struct {
        _Bool skipPermissionRequests;
    } _locationConfiguration;
    CDStruct_6dd8fab3 _observerOptions;
}

+ (const struct RCTMethodInfo *)__rct_export__2555;
+ (const struct RCTMethodInfo *)__rct_export__2404;
+ (const struct RCTMethodInfo *)__rct_export__2242;
+ (const struct RCTMethodInfo *)__rct_export__1991;
+ (const struct RCTMethodInfo *)__rct_export__1940;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)getCurrentPosition:(CDStruct_6dd8fab3)arg1 withSuccessCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (void)stopObserving;
- (void)startObserving:(CDStruct_6dd8fab3)arg1;
- (void)requestAuthorization;
- (void)setConfiguration:(CDStruct_b31ca263)arg1;
- (void)timeout:(id)arg1;
- (void)beginLocationUpdatesWithDesiredAccuracy:(double)arg1 distanceFilter:(double)arg2 useSignificantChanges:(_Bool)arg3;
- (id)supportedEvents;
- (id)methodQueue;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
