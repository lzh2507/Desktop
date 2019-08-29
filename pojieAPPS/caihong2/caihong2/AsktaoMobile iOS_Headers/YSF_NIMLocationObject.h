//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSF_NIMMessageObject-Protocol.h"
#import "YSF_NIMMessageObject_Private-Protocol.h"

@class NSString, YSF_NIMMessage;

@interface YSF_NIMLocationObject : NSObject <YSF_NIMMessageObject_Private, YSF_NIMMessageObject>
{
    YSF_NIMMessage *_message;
    double _latitude;
    double _longitude;
    NSString *_title;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) __weak YSF_NIMMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)decodeWithContent:(id)arg1;
- (id)encodeContent;
- (id)thumbText;
- (long long)type;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 title:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

