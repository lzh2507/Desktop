//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSF_NIMCustomAttachment-Protocol.h"

@class NSString, YSFFlightDetail, YSFFlightThumbnail;

@interface YSFFlightThumbnailAndDetail : NSObject <YSF_NIMCustomAttachment>
{
    YSFFlightThumbnail *_thumbnail;
    YSFFlightDetail *_detail;
}

+ (id)objectByDict:(id)arg1;
@property(retain, nonatomic) YSFFlightDetail *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) YSFFlightThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

