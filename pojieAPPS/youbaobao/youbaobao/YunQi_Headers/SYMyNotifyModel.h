//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SYMyNotifyModel : NSObject
{
    _Bool _isActive;
    _Bool _didModify;
    unsigned char _belongTag;
    NSString *_title;
    NSString *_content;
    NSString *_closedText;
    NSString *_dateString;
    unsigned long long _eventTag;
    long long _repeatType;
    long long _advanceDays;
    long long _hour;
    long long _minute;
    double _timestamp;
    NSArray *_timeItems;
}

+ (id)getPrimaryKey;
+ (id)getTableName;
+ (void)SY_UserIDChanged:(id)arg1;
+ (id)getUsingLKDBHelper;
+ (void)initialize;
+ (long long)minutesOffset;
@property(nonatomic) unsigned char belongTag; // @synthesize belongTag=_belongTag;
@property(retain, nonatomic) NSArray *timeItems; // @synthesize timeItems=_timeItems;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long minute; // @synthesize minute=_minute;
@property(nonatomic) long long hour; // @synthesize hour=_hour;
@property(nonatomic) long long advanceDays; // @synthesize advanceDays=_advanceDays;
@property(nonatomic) _Bool didModify; // @synthesize didModify=_didModify;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(nonatomic) unsigned long long eventTag; // @synthesize eventTag=_eventTag;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(copy, nonatomic) NSString *closedText; // @synthesize closedText=_closedText;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

