//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSDate, NSString;

@interface MMDBMigrationInfo : NSObject <PBCoding>
{
    _Bool disable;
    NSDate *start;
    NSDate *end;
    long long size;
}

+ (void)initialize;
@property(nonatomic) _Bool disable; // @synthesize disable;
@property(nonatomic) long long size; // @synthesize size;
@property(retain, nonatomic) NSDate *end; // @synthesize end;
@property(retain, nonatomic) NSDate *start; // @synthesize start;
- (void).cxx_destruct;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

