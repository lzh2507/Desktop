//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZXReedSolomonDecoder;

@interface ZXMaxiCodeDecoder : NSObject
{
    ZXReedSolomonDecoder *_rsDecoder;
}

@property(readonly, nonatomic) ZXReedSolomonDecoder *rsDecoder; // @synthesize rsDecoder=_rsDecoder;
- (void).cxx_destruct;
- (_Bool)correctErrors:(id)arg1 start:(int)arg2 dataCodewords:(int)arg3 ecCodewords:(int)arg4 mode:(int)arg5 error:(id *)arg6;
- (id)decode:(id)arg1 hints:(id)arg2 error:(id *)arg3;
- (id)decode:(id)arg1 error:(id *)arg2;
- (id)init;

@end

