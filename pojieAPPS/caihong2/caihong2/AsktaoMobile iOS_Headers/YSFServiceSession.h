//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, YSFShopInfo;

@interface YSFServiceSession : NSObject
{
    _Bool _humanOrMachine;
    _Bool _operatorEable;
    _Bool _showNumber;
    _Bool _robotInQueue;
    _Bool _transferSession;
    long long _code;
    NSString *_serviceId;
    NSDate *_lastServiceTime;
    long long _sessionId;
    YSFShopInfo *_shopInfo;
    long long _before;
    long long _robotSessionId;
    NSString *_staffId;
    long long _realStaffId;
    long long _groupId;
    NSString *_staffName;
    NSString *_iconUrl;
    long long _oldSessionId;
    NSString *_transferMessage;
    NSString *_message;
    NSString *_inQueeuNotify;
    NSString *_evaluationString;
    NSArray *_actionInfoArray;
}

+ (id)dataByJson:(id)arg1;
@property(copy, nonatomic) NSArray *actionInfoArray; // @synthesize actionInfoArray=_actionInfoArray;
@property(copy, nonatomic) NSString *evaluationString; // @synthesize evaluationString=_evaluationString;
@property(copy, nonatomic) NSString *inQueeuNotify; // @synthesize inQueeuNotify=_inQueeuNotify;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *transferMessage; // @synthesize transferMessage=_transferMessage;
@property(nonatomic) long long oldSessionId; // @synthesize oldSessionId=_oldSessionId;
@property(nonatomic) _Bool transferSession; // @synthesize transferSession=_transferSession;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *staffName; // @synthesize staffName=_staffName;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long realStaffId; // @synthesize realStaffId=_realStaffId;
@property(copy, nonatomic) NSString *staffId; // @synthesize staffId=_staffId;
@property(nonatomic) long long robotSessionId; // @synthesize robotSessionId=_robotSessionId;
@property(nonatomic) _Bool robotInQueue; // @synthesize robotInQueue=_robotInQueue;
@property(nonatomic) _Bool showNumber; // @synthesize showNumber=_showNumber;
@property(nonatomic) _Bool operatorEable; // @synthesize operatorEable=_operatorEable;
@property(nonatomic) _Bool humanOrMachine; // @synthesize humanOrMachine=_humanOrMachine;
@property(nonatomic) long long before; // @synthesize before=_before;
@property(retain, nonatomic) YSFShopInfo *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSDate *lastServiceTime; // @synthesize lastServiceTime=_lastServiceTime;
@property(copy, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (_Bool)canOfferService;
- (id)toDict;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
