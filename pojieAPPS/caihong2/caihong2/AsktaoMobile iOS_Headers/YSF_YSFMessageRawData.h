//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YSF_YSFMessageRawData : NSObject
{
    long long _messageType;
    NSString *_from;
    NSString *_messageId;
    NSString *_text;
    NSString *_ext;
    long long _status;
    long long _subStatus;
    long long _timestamp;
    long long _serialID;
    NSString *_serverID;
    NSString *_content;
}

+ (id)dataBy:(id)arg1;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *serverID; // @synthesize serverID=_serverID;
@property(nonatomic) long long serialID; // @synthesize serialID=_serialID;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long subStatus; // @synthesize subStatus=_subStatus;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;

@end

