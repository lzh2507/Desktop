//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, ZXPDF417BoundingBox;

@interface ZXPDF417DetectionResultColumn : NSObject
{
    ZXPDF417BoundingBox *_boundingBox;
    NSMutableArray *_codewords;
}

@property(readonly, nonatomic) NSMutableArray *codewords; // @synthesize codewords=_codewords;
@property(readonly, nonatomic) ZXPDF417BoundingBox *boundingBox; // @synthesize boundingBox=_boundingBox;
- (void).cxx_destruct;
- (id)description;
- (id)codeword:(int)arg1;
- (void)setCodeword:(int)arg1 codeword:(id)arg2;
- (int)imageRowToCodewordIndex:(int)arg1;
- (id)codewordNearby:(int)arg1;
- (id)initWithBoundingBox:(id)arg1;

@end

