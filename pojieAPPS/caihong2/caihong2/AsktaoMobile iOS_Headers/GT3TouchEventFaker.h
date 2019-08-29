//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@interface GT3TouchEventFaker : NSObject
{
    _Bool _running;
    _Bool _keyboard;
    NSDate *_startTime;
    NSString *_name;
    NSMutableArray *_touchCache;
    double _lastTime;
    NSArray *_beginTouch;
    NSMutableArray *_tempTouchCache;
}

+ (id)sharedInstance;
+ (id)sharedInstanceWithName:(id)arg1;
@property(retain, nonatomic) NSMutableArray *tempTouchCache; // @synthesize tempTouchCache=_tempTouchCache;
@property(nonatomic) _Bool keyboard; // @synthesize keyboard=_keyboard;
@property(retain, nonatomic) NSArray *beginTouch; // @synthesize beginTouch=_beginTouch;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSMutableArray *touchCache; // @synthesize touchCache=_touchCache;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)stop;
- (void)execute;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

