//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, ZXBitMatrix;

@interface ZXPDF417DetectorResult : NSObject
{
    ZXBitMatrix *_bits;
    NSArray *_points;
}

@property(readonly, nonatomic) NSArray *points; // @synthesize points=_points;
@property(readonly, nonatomic) ZXBitMatrix *bits; // @synthesize bits=_bits;
- (void).cxx_destruct;
- (id)initWithBits:(id)arg1 points:(id)arg2;

@end

