//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface DBContactOpenIM : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int customInfoVisible;
    NSString *customInfo;
    NSString *openIMDescId;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(struct NSObject *)arg1;
+ (void)initialize;
@property(nonatomic) unsigned int customInfoVisible; // @synthesize customInfoVisible;
@property(retain, nonatomic) NSString *openIMDescId; // @synthesize openIMDescId;
@property(retain, nonatomic) NSString *customInfo; // @synthesize customInfo;
- (void).cxx_destruct;
- (struct NSObject *)archivedWCTValue;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

