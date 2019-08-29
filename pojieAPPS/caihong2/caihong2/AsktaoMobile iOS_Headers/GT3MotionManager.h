//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, GT3MotionModel, NSArray, NSMutableArray;
@protocol GT3MotionManagerDelegate;

@interface GT3MotionManager : NSObject
{
    _Bool _isRunning;
    _Bool _appState;
    int _count;
    id <GT3MotionManagerDelegate> _delegate;
    double _timeInterval;
    GT3MotionModel *_currentModel;
    GT3MotionModel *_deltaModel;
    NSMutableArray *_motionCache;
    CMMotionManager *_manager;
    NSArray *_lastMotionElement;
    GT3MotionModel *_lastMotionModel;
    double _deviceMotionTimeInterval;
    NSMutableArray *_tempMotionCache;
}

+ (id)sharedMotionWithUpdateInterval:(double)arg1;
+ (id)sharedMotion;
@property(retain, nonatomic) NSMutableArray *tempMotionCache; // @synthesize tempMotionCache=_tempMotionCache;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) _Bool appState; // @synthesize appState=_appState;
@property(nonatomic) double deviceMotionTimeInterval; // @synthesize deviceMotionTimeInterval=_deviceMotionTimeInterval;
@property(retain, nonatomic) GT3MotionModel *lastMotionModel; // @synthesize lastMotionModel=_lastMotionModel;
@property(retain, nonatomic) NSArray *lastMotionElement; // @synthesize lastMotionElement=_lastMotionElement;
@property(retain, nonatomic) CMMotionManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSMutableArray *motionCache; // @synthesize motionCache=_motionCache;
@property(readonly, nonatomic) GT3MotionModel *deltaModel; // @synthesize deltaModel=_deltaModel;
@property(readonly, nonatomic) GT3MotionModel *currentModel; // @synthesize currentModel=_currentModel;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <GT3MotionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)stopMotion;
- (void)startMotion;
- (void)dealloc;
- (id)initWithUpdateInterval:(double)arg1;

@end

