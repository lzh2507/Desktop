//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSFCustomAttachment-Protocol.h"

@class NSArray, NSString, YSFAction;

@interface YSFOrderList : NSObject <YSFCustomAttachment>
{
    NSString *_label;
    YSFAction *_action;
    NSArray *_shops;
}

+ (id)objectByDict:(id)arg1;
@property(copy, nonatomic) NSArray *shops; // @synthesize shops=_shops;
@property(retain, nonatomic) YSFAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)contentConfig;
- (id)thumbText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

