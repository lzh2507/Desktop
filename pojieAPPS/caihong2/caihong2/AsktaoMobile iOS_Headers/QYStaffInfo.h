//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QYStaffInfo : NSObject
{
    NSString *_staffId;
    NSString *_nickName;
    NSString *_iconURL;
    NSString *_accessTip;
    NSString *_infoDesc;
}

@property(copy, nonatomic) NSString *infoDesc; // @synthesize infoDesc=_infoDesc;
@property(copy, nonatomic) NSString *accessTip; // @synthesize accessTip=_accessTip;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *staffId; // @synthesize staffId=_staffId;
- (void).cxx_destruct;

@end

