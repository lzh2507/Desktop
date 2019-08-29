//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCCardEntryTips : MMObject <PBCoding>
{
    _Bool bShowNew;
    _Bool bShowRedDot;
    _Bool bNeedCheck;
    _Bool bShowEntryNew;
    _Bool bShowEntryRedDot;
    _Bool bShowMeRedDot;
    NSString *nsRedDotBuff;
    NSString *nsTipWording;
    NSString *nsTipIconUrl;
    NSString *nsCardId;
}

+ (void)initialize;
@property(nonatomic) _Bool bShowMeRedDot; // @synthesize bShowMeRedDot;
@property(nonatomic) _Bool bShowEntryRedDot; // @synthesize bShowEntryRedDot;
@property(nonatomic) _Bool bShowEntryNew; // @synthesize bShowEntryNew;
@property(nonatomic) _Bool bNeedCheck; // @synthesize bNeedCheck;
@property(retain, nonatomic) NSString *nsCardId; // @synthesize nsCardId;
@property(retain, nonatomic) NSString *nsTipIconUrl; // @synthesize nsTipIconUrl;
@property(retain, nonatomic) NSString *nsTipWording; // @synthesize nsTipWording;
@property(retain, nonatomic) NSString *nsRedDotBuff; // @synthesize nsRedDotBuff;
@property(nonatomic) _Bool bShowRedDot; // @synthesize bShowRedDot;
@property(nonatomic) _Bool bShowNew; // @synthesize bShowNew;
- (void).cxx_destruct;
- (id)pathForCache;
- (void)loadFromCache;
- (void)saveToCache;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

