//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCDataPathConfigModel : MMObject <PBCoding>
{
    unsigned int action;
    NSString *className;
    NSString *dataPath;
    NSString *expect;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *expect; // @synthesize expect;
@property(nonatomic) unsigned int action; // @synthesize action;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath;
@property(retain, nonatomic) NSString *className; // @synthesize className;
- (void).cxx_destruct;
- (id)toString;
- (id)initWithClassName:(id)arg1 withDataPath:(id)arg2 withAction:(unsigned int)arg3;
- (id)initWithDataPath:(id)arg1 withExpect:(id)arg2;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

