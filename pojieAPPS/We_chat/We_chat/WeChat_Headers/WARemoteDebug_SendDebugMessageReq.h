//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, WARemoteDebug_BaseReq;

@interface WARemoteDebug_SendDebugMessageReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WARemoteDebug_BaseReq *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *debugMessageList; // @dynamic debugMessageList;
@property(nonatomic) unsigned int recvAck; // @dynamic recvAck;

@end

