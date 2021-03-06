//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JPUSHRequest.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSSet, NSString;

@interface JPUSHSetTagAlias : JPUSHRequest <NSCopying, NSCoding>
{
    NSSet *_tags;
    NSString *_alias;
    unsigned long long _type;
    double _createTime;
}

@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSSet *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jpush_jsonClassType;
- (void)jpush_fromJSONValue:(id)arg1;
- (id)jpush_toJSON;
- (id)requestJsonData;
- (_Bool)packData;
- (_Bool)isEqualToRequest:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

