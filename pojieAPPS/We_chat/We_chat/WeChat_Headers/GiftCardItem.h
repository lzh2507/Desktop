//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface GiftCardItem : MMObject <PBCoding, NSCopying>
{
    unsigned int bizUin;
    unsigned int _ver;
    NSString *orderId;
    NSString *_appName;
    NSString *_recvDigest;
    NSString *_sendDigest;
    NSString *_backgroundPicUrl;
    NSString *_titleColorStr;
    NSString *_descColorStr;
}

+ (void)initialize;
@property(nonatomic) unsigned int ver; // @synthesize ver=_ver;
@property(retain, nonatomic) NSString *descColorStr; // @synthesize descColorStr=_descColorStr;
@property(retain, nonatomic) NSString *titleColorStr; // @synthesize titleColorStr=_titleColorStr;
@property(retain, nonatomic) NSString *backgroundPicUrl; // @synthesize backgroundPicUrl=_backgroundPicUrl;
@property(retain, nonatomic) NSString *sendDigest; // @synthesize sendDigest=_sendDigest;
@property(retain, nonatomic) NSString *recvDigest; // @synthesize recvDigest=_recvDigest;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId;
@property(nonatomic) unsigned int bizUin; // @synthesize bizUin;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

