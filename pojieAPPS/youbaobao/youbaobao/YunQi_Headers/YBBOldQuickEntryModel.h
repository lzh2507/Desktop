//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBBOldQuickEntryModel : NSObject
{
    long long _mid;
    NSString *_name;
    NSString *_alias;
    NSString *_icon;
    NSString *_url;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (_Bool)isMoreItem;

@end

