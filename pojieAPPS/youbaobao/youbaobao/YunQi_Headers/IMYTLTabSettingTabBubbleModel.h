//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYTLTabSettingTabBubbleModel : NSObject
{
    unsigned long long _type;
    NSString *_title;
    unsigned long long _mode;
    long long _start_at;
    long long _end_at;
    long long _interval;
}

@property(nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long end_at; // @synthesize end_at=_end_at;
@property(nonatomic) long long start_at; // @synthesize start_at=_start_at;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

