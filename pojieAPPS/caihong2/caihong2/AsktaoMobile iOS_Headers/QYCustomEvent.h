//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QYCustomMessage;

@interface QYCustomEvent : NSObject
{
    NSString *_eventName;
    QYCustomMessage *_message;
    id _data;
}

@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(retain, nonatomic) QYCustomMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;

@end

