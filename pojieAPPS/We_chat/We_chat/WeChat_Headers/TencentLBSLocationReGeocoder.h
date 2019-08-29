//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface TencentLBSLocationReGeocoder : NSObject
{
    NSThread *_runThread;
}

+ (id)getPostDictionaryWithCLLocation:(id)arg1 requestLevel:(unsigned long long)arg2 appName:(id)arg3 beacons:(id)arg4 smallAppKey:(id)arg5;
+ (id)getPostDictionaryWithCLLocation:(id)arg1 requestLevel:(unsigned long long)arg2 appName:(id)arg3 smallAppKey:(id)arg4;
+ (id)getPostDictionaryWithCLLocation:(id)arg1 requestLevel:(unsigned long long)arg2 appName:(id)arg3 type:(int)arg4 smallAppKey:(id)arg5;
+ (void)getTheBestLocationData:(id)arg1 tencentLocation:(id)arg2;
+ (id)dataToDictionary:(id)arg1 random:(int)arg2;
+ (void)getLevelFourWithJSONObject:(id)arg1 tencentLocation:(id)arg2;
+ (void)getLevelThreeWithJSONObject:(id)arg1 tencentLocation:(id)arg2;
+ (void)getLevelOneWithJSONObject:(id)arg1 tencentLocation:(id)arg2;
+ (void)getLevelZeroWithJSONObject:(id)arg1 tencentLocation:(id)arg2;
+ (void)getLevelThreeSubWithJSONObject:(id)arg1 tencentLocation:(id)arg2;
+ (id)getPoiWithJSONObject:(id)arg1;
@property(nonatomic) __weak NSThread *runThread; // @synthesize runThread=_runThread;
- (void).cxx_destruct;
- (_Bool)reGeocoderWithParameter:(id)arg1 withMaxTimeout:(double)arg2 coordinateType:(unsigned long long)arg3 compeltionBlock:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)initCompletionBlockWithCoordinateType:(unsigned long long)arg1 requestLevel:(unsigned long long)arg2 random:(int)arg3 compeltionBlock:(CDUnknownBlockType)arg4;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (void)asyncPerformOnThread:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)syncPerformOnThread:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithRunThread:(id)arg1;

@end

