//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface EmoticonLensItemPB : MMObject <PBCoding>
{
    _Bool bCanIgnoreBackground;
    unsigned int uiEmoticonLensStatus;
    unsigned int uiEmoticonSubType;
    unsigned int uiEmoticonImageSubtype;
    unsigned int uiEmoticonVersion;
    NSString *nsEmoticonLensId;
    NSString *nsEmoticonLensName;
    NSString *nsEmoticonLensThumbImagePath;
    NSString *nsEmoticonLensTipContent;
    NSString *nsEmoticonLensCaption;
    NSString *nsEmoticonLensHongbaoName;
    NSString *nsEmoticonLensHongbaoCaption;
    NSArray *naEmoticonLensTipImageList;
    NSString *nsEmoticonLensCaptionColor;
}

+ (void)initialize;
@property(nonatomic) unsigned int uiEmoticonVersion; // @synthesize uiEmoticonVersion;
@property(nonatomic) unsigned int uiEmoticonImageSubtype; // @synthesize uiEmoticonImageSubtype;
@property(nonatomic) unsigned int uiEmoticonSubType; // @synthesize uiEmoticonSubType;
@property(retain, nonatomic) NSString *nsEmoticonLensCaptionColor; // @synthesize nsEmoticonLensCaptionColor;
@property(retain, nonatomic) NSArray *naEmoticonLensTipImageList; // @synthesize naEmoticonLensTipImageList;
@property(retain, nonatomic) NSString *nsEmoticonLensHongbaoCaption; // @synthesize nsEmoticonLensHongbaoCaption;
@property(retain, nonatomic) NSString *nsEmoticonLensHongbaoName; // @synthesize nsEmoticonLensHongbaoName;
@property(retain, nonatomic) NSString *nsEmoticonLensCaption; // @synthesize nsEmoticonLensCaption;
@property(nonatomic) unsigned int uiEmoticonLensStatus; // @synthesize uiEmoticonLensStatus;
@property(retain, nonatomic) NSString *nsEmoticonLensTipContent; // @synthesize nsEmoticonLensTipContent;
@property(nonatomic) _Bool bCanIgnoreBackground; // @synthesize bCanIgnoreBackground;
@property(retain, nonatomic) NSString *nsEmoticonLensThumbImagePath; // @synthesize nsEmoticonLensThumbImagePath;
@property(retain, nonatomic) NSString *nsEmoticonLensName; // @synthesize nsEmoticonLensName;
@property(retain, nonatomic) NSString *nsEmoticonLensId; // @synthesize nsEmoticonLensId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
