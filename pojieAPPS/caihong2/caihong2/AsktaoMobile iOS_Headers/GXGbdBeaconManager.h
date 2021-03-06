//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CBCentralManager, CLLocationManager, NSMutableDictionary, NSString;

@interface GXGbdBeaconManager : NSObject <CLLocationManagerDelegate>
{
    CBCentralManager *myCentralManager_;
    int rangingType_;
    CLLocationManager *localManager_;
    NSMutableDictionary *beaconsDictionary_;
    double lastUploadTime_;
}

- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (_Bool)updateTimeInSeconds:(double)arg1;
- (id)retriveCurBeaconArray;
- (int)getRangingType;
- (void)cancelScanBeacon;
- (void)stopScanBeacon;
- (void)startScanBeacon;
- (void)startScanBeaconForSeconds:(double)arg1;
- (int)getBuletooleState;
- (void)shutDown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

