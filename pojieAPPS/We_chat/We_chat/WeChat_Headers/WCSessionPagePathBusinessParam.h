//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface WCSessionPagePathBusinessParam : MMObject <NSCopying>
{
    NSString *_pagePathId;
    NSString *_value;
    NSString *_dataPath;
}

@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *pagePathId; // @synthesize pagePathId=_pagePathId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAttrDictionary;
- (id)toString;

@end

