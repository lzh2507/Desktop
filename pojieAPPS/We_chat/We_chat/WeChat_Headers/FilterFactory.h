//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FilterFactory : NSObject
{
    NSString *_bundleDirctory;
    NSString *_currentFilterProcessFunc;
    long long _ignoreFrameCount;
}

+ (_Bool)supportUIImageSize:(struct CGSize)arg1;
+ (int)filterIdFromString:(id)arg1 effectIndex:(long long)arg2;
+ (_Bool)canSaveForBigPhoto:(int)arg1;
+ (int)isMultiParameter:(int)arg1;
+ (_Bool)isCPUParameterAdjust:(int)arg1;
+ (_Bool)isAlphaParameterAdjust:(int)arg1;
+ (_Bool)isCPUFilter:(int)arg1;
+ (id)createGPUFilter:(id)arg1 withIndex:(long long)arg2;
+ (id)createGPUFilter:(int)arg1;
+ (id)createLutGPUFilterWithFullImagePath:(id)arg1 params:(id)arg2;
+ (id)createLutGPUFilterWithImageName:(id)arg1 params:(id)arg2;
+ (id)createLutGPUFilterLut:(id)arg1;
+ (id)createGPUFilterByFid:(id)arg1;
+ (id)createBaseGPUFilter:(int)arg1 params:(id)arg2;
+ (id)createCPUFilter:(int)arg1;
+ (id)defaultFilterList;
+ (void)unfreezeGPU;
+ (void)freezeGPU;
+ (void)setUsingFilterEngine:(_Bool)arg1;
+ (_Bool)isUsingFilterEngine;
+ (void)runBlockInFilterQueueAsync:(CDUnknownBlockType)arg1;
+ (void)runBlockInFilterQueueSync:(CDUnknownBlockType)arg1;
+ (id)filterQueue;
+ (id)shareFactory;
@property long long ignoreFrameCount; // @synthesize ignoreFrameCount=_ignoreFrameCount;
@property(copy, nonatomic) NSString *currentFilterProcessFunc; // @synthesize currentFilterProcessFunc=_currentFilterProcessFunc;
@property(retain, nonatomic) NSString *bundleDirctory; // @synthesize bundleDirctory=_bundleDirctory;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

