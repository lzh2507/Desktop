//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface BrandServiceDataItem : NSObject <PBCoding>
{
    _Bool hasSetLocation;
    unsigned int receiveSwitchOffTime;
}

+ (void)initialize;
@property(nonatomic) unsigned int receiveSwitchOffTime; // @synthesize receiveSwitchOffTime;
@property(nonatomic) _Bool hasSetLocation; // @synthesize hasSetLocation;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

