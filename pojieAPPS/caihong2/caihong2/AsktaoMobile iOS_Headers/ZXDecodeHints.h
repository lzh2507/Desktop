//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableArray, ZXIntArray;
@protocol ZXResultPointCallback;

@interface ZXDecodeHints : NSObject <NSCopying>
{
    _Bool _assumeCode39CheckDigit;
    _Bool _assumeGS1;
    _Bool _pureBarcode;
    _Bool _returnCodaBarStartEnd;
    _Bool _tryHarder;
    NSArray *_allowedLengths;
    unsigned long long _encoding;
    id _other;
    id <ZXResultPointCallback> _resultPointCallback;
    ZXIntArray *_allowedEANExtensions;
    NSMutableArray *_barcodeFormats;
}

+ (id)hints;
@property(readonly, nonatomic) NSMutableArray *barcodeFormats; // @synthesize barcodeFormats=_barcodeFormats;
@property(retain, nonatomic) ZXIntArray *allowedEANExtensions; // @synthesize allowedEANExtensions=_allowedEANExtensions;
@property(nonatomic) _Bool tryHarder; // @synthesize tryHarder=_tryHarder;
@property(retain, nonatomic) id <ZXResultPointCallback> resultPointCallback; // @synthesize resultPointCallback=_resultPointCallback;
@property(nonatomic) _Bool returnCodaBarStartEnd; // @synthesize returnCodaBarStartEnd=_returnCodaBarStartEnd;
@property(nonatomic) _Bool pureBarcode; // @synthesize pureBarcode=_pureBarcode;
@property(retain, nonatomic) id other; // @synthesize other=_other;
@property(nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(retain, nonatomic) NSArray *allowedLengths; // @synthesize allowedLengths=_allowedLengths;
@property(nonatomic) _Bool assumeGS1; // @synthesize assumeGS1=_assumeGS1;
@property(nonatomic) _Bool assumeCode39CheckDigit; // @synthesize assumeCode39CheckDigit=_assumeCode39CheckDigit;
- (void).cxx_destruct;
- (void)removePossibleFormat:(int)arg1;
- (int)numberOfPossibleFormats;
- (_Bool)containsFormat:(int)arg1;
- (void)addPossibleFormat:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

