//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YSFAccountInfo : NSObject
{
    _Bool _isEverLogined;
    NSString *_accid;
    NSString *_token;
    NSString *_bid;
}

+ (id)infoByDict:(id)arg1;
@property(copy, nonatomic) NSString *bid; // @synthesize bid=_bid;
@property(nonatomic) _Bool isEverLogined; // @synthesize isEverLogined=_isEverLogined;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *accid; // @synthesize accid=_accid;
- (void).cxx_destruct;
- (id)toDict;
- (_Bool)isPop;
- (_Bool)isValid;

@end

