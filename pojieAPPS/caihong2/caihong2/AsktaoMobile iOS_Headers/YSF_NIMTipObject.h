//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSF_NIMMessageObject-Protocol.h"
#import "YSF_NIMMessageObject_Private-Protocol.h"

@class NSString, YSF_NIMMessage;

@interface YSF_NIMTipObject : NSObject <YSF_NIMMessageObject_Private, YSF_NIMMessageObject>
{
    YSF_NIMMessage *_message;
}

@property(nonatomic) __weak YSF_NIMMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)decodeWithContent:(id)arg1;
- (id)encodeContent;
- (long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

