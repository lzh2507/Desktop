//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSFCustomAttachment-Protocol.h"

@class NSArray, NSString, YSFAction;

@interface YSFOrderLogistic : NSObject <YSFCustomAttachment>
{
    _Bool _fullLogistic;
    NSString *_label;
    NSString *_title;
    NSArray *_logistic;
    YSFAction *_action;
}

+ (id)objectByDict:(id)arg1;
@property(nonatomic) _Bool fullLogistic; // @synthesize fullLogistic=_fullLogistic;
@property(retain, nonatomic) YSFAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSArray *logistic; // @synthesize logistic=_logistic;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
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

