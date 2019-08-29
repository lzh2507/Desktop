//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NTESRedPacketConfig;

@interface NTESDemoConfig : NSObject
{
    NSString *_appKey;
    NSString *_apiURL;
    NSString *_apnsCername;
    NSString *_pkCername;
    NTESRedPacketConfig *_redPacketConfig;
}

+ (id)sharedConfig;
@property(retain, nonatomic) NTESRedPacketConfig *redPacketConfig; // @synthesize redPacketConfig=_redPacketConfig;
@property(copy, nonatomic) NSString *pkCername; // @synthesize pkCername=_pkCername;
@property(copy, nonatomic) NSString *apnsCername; // @synthesize apnsCername=_apnsCername;
@property(copy, nonatomic) NSString *apiURL; // @synthesize apiURL=_apiURL;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (void)registerConfig:(id)arg1;
- (id)init;

@end
