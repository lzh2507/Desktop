//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface EmoticonPackageDesc : MMObject <PBCoding>
{
    NSMutableArray *m_descList;
    NSString *m_packageId;
    unsigned int m_lastRequestTime;
    unsigned int m_clickFlag;
}

+ (_Bool)canDownLoadForDownloadFlag:(unsigned int)arg1;
+ (id)loadFromCache:(id)arg1;
+ (id)getSavePath:(id)arg1;
+ (id)getSaveRootDir;
+ (id)getMd5Pid:(id)arg1;
+ (void)initialize;
@property(nonatomic) unsigned int m_lastRequestTime; // @synthesize m_lastRequestTime;
@property(nonatomic) unsigned int m_clickFlag; // @synthesize m_clickFlag;
@property(retain, nonatomic) NSString *m_packageId; // @synthesize m_packageId;
@property(retain, nonatomic) NSMutableArray *m_descList; // @synthesize m_descList;
- (void).cxx_destruct;
- (void)saveToCache;
- (_Bool)hasDesc;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

