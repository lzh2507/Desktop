//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZXBitMatrix;

@interface ZXMaxiCodeBitMatrixParser : NSObject
{
    ZXBitMatrix *_bitMatrix;
}

@property(readonly, nonatomic) ZXBitMatrix *bitMatrix; // @synthesize bitMatrix=_bitMatrix;
- (void).cxx_destruct;
- (id)readCodewords;
- (id)initWithBitMatrix:(id)arg1 error:(id *)arg2;

@end

