//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext;

@interface TTCIImageScaleTask : NSObject
{
    CIContext *_context;
    struct CGSize _preferSize;
}

@property(nonatomic) struct CGSize preferSize; // @synthesize preferSize=_preferSize;
@property(retain, nonatomic) CIContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)processPixelbuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2;
- (id)processImage:(id)arg1 orientation:(long long)arg2;
- (id)initWithContext:(id)arg1 preferSize:(struct CGSize)arg2;
- (id)init;

@end
