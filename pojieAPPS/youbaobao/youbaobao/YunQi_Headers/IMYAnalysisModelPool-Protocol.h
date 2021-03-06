//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IMYAnalysisModelPool <NSObject>
@property(nonatomic) double maxCacheTimeInterval;
@property(nonatomic) long long maxCacheCount;
- (void)postAnalysisModels;
- (void)reactiveModels;
- (void)saveAllModels;
- (void)stopTimer;
- (void)startTimer;
- (void)addModel:(NSDictionary *)arg1 realTime:(_Bool)arg2;
- (id)initAnalysisModelPool:(void (^)(NSArray *))arg1 localFileName:(NSString *)arg2 maxCacheCount:(long long)arg3 maxCacheTimeInterval:(double)arg4;
@end

