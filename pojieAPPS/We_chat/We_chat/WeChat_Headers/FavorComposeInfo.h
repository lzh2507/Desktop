//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface FavorComposeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned long long composeSortFlag; // @dynamic composeSortFlag;
@property(retain, nonatomic) NSString *extendStr; // @dynamic extendStr;
@property(retain, nonatomic) NSString *favorComposeId; // @dynamic favorComposeId;
@property(retain, nonatomic) NSString *favorDesc; // @dynamic favorDesc;
@property(retain, nonatomic) NSMutableArray *favorInfoList; // @dynamic favorInfoList;
@property(nonatomic) unsigned long long showFavorAmount; // @dynamic showFavorAmount;
@property(nonatomic) unsigned long long showPayAmount; // @dynamic showPayAmount;
@property(retain, nonatomic) NSString *totalFavorAmount; // @dynamic totalFavorAmount;

@end

