//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, SKBuiltinBuffer_t;

@interface ShakeMusicRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(nonatomic) unsigned int dataId; // @dynamic dataId;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int isOutsideGfw; // @dynamic isOutsideGfw;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longtitude; // @dynamic longtitude;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(nonatomic) unsigned int sdkVersion; // @dynamic sdkVersion;
@property(nonatomic) unsigned int shakeMusicGlobalSwitch; // @dynamic shakeMusicGlobalSwitch;
@property(nonatomic) float voiceLen; // @dynamic voiceLen;

@end

