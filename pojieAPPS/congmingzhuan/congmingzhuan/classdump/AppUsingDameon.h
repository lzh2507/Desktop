//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;

@interface AppUsingDameon : NSObject
{
    NSString *_bundleID;
    double _startTime;
    NSTimer *_timer;
}

+ (id)dameon;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (long long)appTryingLeftTime:(id)arg1 taskTryLimitTime:(long long)arg2 error:(id *)arg3;
- (void)stop;
- (double)startTimeOfBundleId:(id)arg1;
- (void)start:(id)arg1;

@end

