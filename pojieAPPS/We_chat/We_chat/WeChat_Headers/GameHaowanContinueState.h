//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSObject, NSString;
@protocol PBCoding;

@interface GameHaowanContinueState : MMObject <PBCoding>
{
    unsigned int createTime;
    unsigned int retryCount;
    NSObject<PBCoding> *subState;
}

+ (void)initialize;
@property(retain, nonatomic) NSObject<PBCoding> *subState; // @synthesize subState;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

