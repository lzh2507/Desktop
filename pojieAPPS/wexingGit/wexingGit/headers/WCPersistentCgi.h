//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseCgi.h"

#import "PBCoding-Protocol.h"

@class NSDate, NSString;
@protocol WCPersistentCgiDelegate;

@interface WCPersistentCgi : WCBaseCgi <PBCoding>
{
    _Bool isfirstStart;
    unsigned long long persistentMode;
    long long maxRersistentRetryCount;
    double persistentRetryDuration;
    double persistentTimeOutDuration;
    NSDate *firstStartTime;
    NSDate *lastStartTime;
    NSString *uuid;
    NSString *customUUID;
    id <WCPersistentCgiDelegate> _persitentCgiDelegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <WCPersistentCgiDelegate> persitentCgiDelegate; // @synthesize persitentCgiDelegate=_persitentCgiDelegate;
@property(retain, nonatomic) NSString *customUUID; // @synthesize customUUID;
@property(nonatomic) _Bool isfirstStart; // @synthesize isfirstStart;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSDate *lastStartTime; // @synthesize lastStartTime;
@property(retain, nonatomic) NSDate *firstStartTime; // @synthesize firstStartTime;
@property(nonatomic) double persistentTimeOutDuration; // @synthesize persistentTimeOutDuration;
@property(nonatomic) double persistentRetryDuration; // @synthesize persistentRetryDuration;
@property(nonatomic) long long maxRersistentRetryCount; // @synthesize maxRersistentRetryCount;
@property(nonatomic) unsigned long long persistentMode; // @synthesize persistentMode;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1 reponse:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (void)persitentFail;
- (void)persistentCgiDidFailWithError:(id)arg1 reponse:(id)arg2;
- (void)persistentCgiDidGetResponse:(id)arg1;
- (_Bool)isPersistentAvailable;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoLifeCycle; // @dynamic isAutoLifeCycle;
@property(readonly) Class superclass;

@end

