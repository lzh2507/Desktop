//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

@interface MRTDataTask : NSObject
{
    NSURL *_url;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSURLSessionDataTask *_dataTask;
}

@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)releaseAssertionWithSemaphore:(id)arg1;
- (void)askForAssertionWithSemaphore:(id)arg1;
- (void)resume;

@end
