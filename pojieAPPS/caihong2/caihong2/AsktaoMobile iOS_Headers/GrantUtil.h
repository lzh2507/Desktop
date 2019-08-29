//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

@interface GrantUtil : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
}

+ (int)checkPermission:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (_Bool)canRecord;
- (void)dealloc;
- (int)getPermissionKeyByString:(id)arg1;
- (int)checkAuthoriztion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

