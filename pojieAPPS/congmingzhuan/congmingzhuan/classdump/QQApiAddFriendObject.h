//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/QQApiObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QQApiAddFriendObject : QQApiObject
{
    NSString *_openID;
    NSString *_subID;
    NSString *_remark;
}

+ (id)objecWithOpenID:(id)arg1;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *subID; // @synthesize subID=_subID;
@property(retain, nonatomic) NSString *openID; // @synthesize openID=_openID;
- (void)dealloc;
- (id)initWithOpenID:(id)arg1;

@end

