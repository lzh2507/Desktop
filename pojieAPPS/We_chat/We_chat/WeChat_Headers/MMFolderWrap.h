//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMBizFileMatchNode, NSMutableArray, NSMutableDictionary, NSString;

@interface MMFolderWrap : NSObject <PBCoding>
{
    unsigned int m_fileNum;
    int m_scanStatus;
    int m_onlyBizType;
    int m_storeTimeType;
    unsigned int m_subFolderNum;
    unsigned int m_subTotalFolderNum;
    unsigned int m_subTotalFileNum;
    int m_onlyFileTypeInUse;
    int m_onlyWeChatFileClass;
    unsigned int _m_delFileNum;
    NSString *m_name;
    NSMutableArray *m_arrChildFolder;
    unsigned long long m_fileSize;
    NSMutableDictionary *m_dicBizStat;
    NSMutableArray *m_arrNotScanFileName;
    unsigned long long m_subTotalFileSize;
    NSMutableDictionary *m_dicFileTypeInUseStat;
    NSMutableDictionary *m_dicSpecialBizStat;
    NSMutableDictionary *m_dicWechatFileClassStat;
    MMBizFileMatchNode *m_bizMatchNode;
    unsigned long long _m_delFileSize;
}

+ (void)initialize;
@property(nonatomic) unsigned long long m_delFileSize; // @synthesize m_delFileSize=_m_delFileSize;
@property(nonatomic) unsigned int m_delFileNum; // @synthesize m_delFileNum=_m_delFileNum;
@property(retain, nonatomic) MMBizFileMatchNode *m_bizMatchNode; // @synthesize m_bizMatchNode;
@property(retain, nonatomic) NSMutableDictionary *m_dicWechatFileClassStat; // @synthesize m_dicWechatFileClassStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicSpecialBizStat; // @synthesize m_dicSpecialBizStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicFileTypeInUseStat; // @synthesize m_dicFileTypeInUseStat;
@property(nonatomic) int m_onlyWeChatFileClass; // @synthesize m_onlyWeChatFileClass;
@property(nonatomic) int m_onlyFileTypeInUse; // @synthesize m_onlyFileTypeInUse;
@property(nonatomic) unsigned long long m_subTotalFileSize; // @synthesize m_subTotalFileSize;
@property(nonatomic) unsigned int m_subTotalFileNum; // @synthesize m_subTotalFileNum;
@property(nonatomic) unsigned int m_subTotalFolderNum; // @synthesize m_subTotalFolderNum;
@property(nonatomic) unsigned int m_subFolderNum; // @synthesize m_subFolderNum;
@property(nonatomic) int m_storeTimeType; // @synthesize m_storeTimeType;
@property(retain, nonatomic) NSMutableArray *m_arrNotScanFileName; // @synthesize m_arrNotScanFileName;
@property(nonatomic) int m_onlyBizType; // @synthesize m_onlyBizType;
@property(retain, nonatomic) NSMutableDictionary *m_dicBizStat; // @synthesize m_dicBizStat;
@property(nonatomic) int m_scanStatus; // @synthesize m_scanStatus;
@property(nonatomic) unsigned long long m_fileSize; // @synthesize m_fileSize;
@property(nonatomic) unsigned int m_fileNum; // @synthesize m_fileNum;
@property(retain, nonatomic) NSMutableArray *m_arrChildFolder; // @synthesize m_arrChildFolder;
@property(retain, nonatomic) NSString *m_name; // @synthesize m_name;
- (void).cxx_destruct;
- (_Bool)isFolderMayHaveDB;
- (void)getChildFolderAndFile;
- (void)markScanFinish;
- (_Bool)isScanFinish;
- (_Bool)isMarkFolderWrap;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

