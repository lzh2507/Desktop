//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface AppSettingItem : NSObject <NSCoding>
{
    _Bool appAddedByUser;
    unsigned int flag;
    NSString *openID;
    NSString *appID;
}

@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(nonatomic) _Bool appAddedByUser; // @synthesize appAddedByUser;
@property(nonatomic) unsigned int flag; // @synthesize flag;
@property(retain, nonatomic) NSString *openID; // @synthesize openID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

