//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NTESContactItem-Protocol.h"
#import "NTESGroupMemberProtocol-Protocol.h"

@class NSString, UIImage;

@interface NTESContactUtilMember : NSObject <NTESContactItem, NTESGroupMemberProtocol>
{
    NSString *_nick;
    NSString *_badge;
    UIImage *_icon;
    NSString *_vcName;
    NSString *_userId;
    NSString *_selName;
}

@property(copy, nonatomic) NSString *selName; // @synthesize selName=_selName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *vcName; // @synthesize vcName=_vcName;
@property(copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *badge; // @synthesize badge=_badge;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
- (void).cxx_destruct;
- (id)sortKey;
- (_Bool)showAccessoryView;
- (id)memberId;
- (id)groupTitle;
- (id)cellName;
- (id)reuseId;
- (double)uiHeight;
- (id)avatarUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
