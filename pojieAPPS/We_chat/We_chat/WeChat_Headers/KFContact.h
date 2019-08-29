//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBaseContact.h"

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface KFContact : CBaseContact <WCTTableCoding>
{
    _Bool _headImgUpdateFlag;
    unsigned int _updateTime;
    NSString *kfOpenId;
    NSString *_brand;
    NSString *_headImageUrl;
    NSString *_nickName;
}

+ (void)__wcdb_column_constraint_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)headImgUpdateFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nickName;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)headImageUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)brand;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)kfOpenId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) _Bool headImgUpdateFlag; // @synthesize headImgUpdateFlag=_headImgUpdateFlag;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *kfOpenId; // @synthesize kfOpenId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

