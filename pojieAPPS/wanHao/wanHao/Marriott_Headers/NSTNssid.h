//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSTNssid : NSObject
{
    NSString *_interface;
    NSString *_BSSID;
    NSString *_SSID;
    NSString *_SSIDData;
}

+ (id)supportedInterfaces;
+ (id)SSID_infoForInterface:(id)arg1;
@property(retain) NSString *SSIDData; // @synthesize SSIDData=_SSIDData;
@property(retain) NSString *SSID; // @synthesize SSID=_SSID;
@property(retain) NSString *BSSID; // @synthesize BSSID=_BSSID;
@property(retain) NSString *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;

@end

