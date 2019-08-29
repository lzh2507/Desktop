//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSFIMCustomSystemMessageApiProtocol-Protocol.h"

@class NSString;

@interface YSFUserInfoReport : NSObject <YSFIMCustomSystemMessageApiProtocol>
{
    NSString *_appKey;
    NSString *_deviceId;
    NSString *_source;
    NSString *_imei;
    NSString *_mac;
    NSString *_idfa;
    NSString *_androidId;
    NSString *_brand;
    NSString *_model;
    NSString *_os;
    long long _timestamp;
}

@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(copy, nonatomic) NSString *androidId; // @synthesize androidId=_androidId;
@property(copy, nonatomic) NSString *idfa; // @synthesize idfa=_idfa;
@property(copy, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)toDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

