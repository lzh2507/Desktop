//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZXDataMatrixECBlocks;

@interface ZXDataMatrixVersion : NSObject
{
    int _dataRegionSizeColumns;
    int _dataRegionSizeRows;
    int _symbolSizeColumns;
    int _symbolSizeRows;
    int _totalCodewords;
    int _versionNumber;
    ZXDataMatrixECBlocks *_ecBlocks;
}

+ (void)initialize;
+ (id)versionForDimensions:(int)arg1 numColumns:(int)arg2;
@property(readonly, nonatomic) int versionNumber; // @synthesize versionNumber=_versionNumber;
@property(readonly, nonatomic) int totalCodewords; // @synthesize totalCodewords=_totalCodewords;
@property(readonly, nonatomic) int symbolSizeRows; // @synthesize symbolSizeRows=_symbolSizeRows;
@property(readonly, nonatomic) int symbolSizeColumns; // @synthesize symbolSizeColumns=_symbolSizeColumns;
@property(readonly, nonatomic) int dataRegionSizeRows; // @synthesize dataRegionSizeRows=_dataRegionSizeRows;
@property(readonly, nonatomic) int dataRegionSizeColumns; // @synthesize dataRegionSizeColumns=_dataRegionSizeColumns;
@property(readonly, nonatomic) ZXDataMatrixECBlocks *ecBlocks; // @synthesize ecBlocks=_ecBlocks;
- (void).cxx_destruct;
- (id)description;
- (id)initWithVersionNumber:(int)arg1 symbolSizeRows:(int)arg2 symbolSizeColumns:(int)arg3 dataRegionSizeRows:(int)arg4 dataRegionSizeColumns:(int)arg5 ecBlocks:(id)arg6;

@end

