//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSTN_JCNotificationBanner : NSObject
{
    NSString *title;
    NSString *message;
    double timeout;
    CDUnknownBlockType tapHandler;
}

@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler;
@property(nonatomic) double timeout; // @synthesize timeout;
@property(retain, nonatomic) NSString *message; // @synthesize message;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)arg1 message:(id)arg2 timeout:(double)arg3 tapHandler:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 tapHandler:(CDUnknownBlockType)arg3;

@end
