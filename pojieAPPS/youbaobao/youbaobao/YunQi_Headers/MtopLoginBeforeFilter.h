//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MtopBeforeFilter-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MtopLoginBeforeFilter : NSObject <MtopBeforeFilter>
{
    int _defaultSessionExpiredOption;
    NSMutableDictionary *_noLoginStatusAPIDict;
}

+ (id)shareInstance;
@property(nonatomic) int defaultSessionExpiredOption; // @synthesize defaultSessionExpiredOption=_defaultSessionExpiredOption;
@property(readonly, nonatomic) NSMutableDictionary *noLoginStatusAPIDict; // @synthesize noLoginStatusAPIDict=_noLoginStatusAPIDict;
- (void).cxx_destruct;
- (_Bool)isNeedLoginStatusAPI:(id)arg1;
- (void)handleBeforeFilter:(id)arg1;
- (id)getFilterName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
