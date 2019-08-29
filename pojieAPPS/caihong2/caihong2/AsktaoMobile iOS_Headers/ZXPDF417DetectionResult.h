//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, ZXPDF417BarcodeMetadata, ZXPDF417BoundingBox;

@interface ZXPDF417DetectionResult : NSObject
{
    int _barcodeColumnCount;
    ZXPDF417BoundingBox *_boundingBox;
    ZXPDF417BarcodeMetadata *_barcodeMetadata;
    NSMutableArray *_detectionResultColumnsInternal;
}

@property(readonly, nonatomic) int barcodeColumnCount; // @synthesize barcodeColumnCount=_barcodeColumnCount;
@property(readonly, nonatomic) NSMutableArray *detectionResultColumnsInternal; // @synthesize detectionResultColumnsInternal=_detectionResultColumnsInternal;
@property(readonly, nonatomic) ZXPDF417BarcodeMetadata *barcodeMetadata; // @synthesize barcodeMetadata=_barcodeMetadata;
@property(retain, nonatomic) ZXPDF417BoundingBox *boundingBox; // @synthesize boundingBox=_boundingBox;
- (void).cxx_destruct;
- (id)description;
- (id)detectionResultColumn:(int)arg1;
- (void)setDetectionResultColumn:(int)arg1 detectionResultColumn:(id)arg2;
- (int)barcodeECLevel;
- (int)barcodeRowCount;
- (_Bool)adjustRowNumber:(id)arg1 otherCodeword:(id)arg2;
- (void)adjustRowNumbers:(int)arg1 codewordsRow:(int)arg2 codewords:(id)arg3;
- (int)adjustRowNumberIfValid:(int)arg1 invalidRowCounts:(int)arg2 codeword:(id)arg3;
- (int)adjustRowNumbersFromLRI;
- (int)adjustRowNumbersFromRRI;
- (void)adjustRowNumbersFromBothRI;
- (int)adjustRowNumbersByRow;
- (int)adjustRowNumbers;
- (void)adjustIndicatorColumnRowNumbers:(id)arg1;
- (id)detectionResultColumns;
- (id)initWithBarcodeMetadata:(id)arg1 boundingBox:(id)arg2;

@end

