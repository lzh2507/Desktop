//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMFolderWrapCache : NSObject <PBCoding>
{
    unsigned int fileNum;
    NSString *folderName;
    long long lastScanTime;
    unsigned long long fileSize;
    NSMutableDictionary *dicBizStat;
    NSMutableDictionary *dicSpecialBizStat;
    NSMutableDictionary *dicFileTypeInUseStat;
    NSMutableDictionary *dicWechatFileClassStat;
    long long cacheTime;
}

+ (void)initialize;
@property(nonatomic) long long cacheTime; // @synthesize cacheTime;
@property(retain, nonatomic) NSMutableDictionary *dicWechatFileClassStat; // @synthesize dicWechatFileClassStat;
@property(retain, nonatomic) NSMutableDictionary *dicFileTypeInUseStat; // @synthesize dicFileTypeInUseStat;
@property(retain, nonatomic) NSMutableDictionary *dicSpecialBizStat; // @synthesize dicSpecialBizStat;
@property(retain, nonatomic) NSMutableDictionary *dicBizStat; // @synthesize dicBizStat;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize;
@property(nonatomic) unsigned int fileNum; // @synthesize fileNum;
@property(nonatomic) long long lastScanTime; // @synthesize lastScanTime;
@property(retain, nonatomic) NSString *folderName; // @synthesize folderName;
- (void).cxx_destruct;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

