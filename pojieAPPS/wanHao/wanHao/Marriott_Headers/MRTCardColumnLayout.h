//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableDictionary, UITraitCollection;

@interface MRTCardColumnLayout : UICollectionViewFlowLayout
{
    UITraitCollection *_traitCollectionForSizing;
    double _fullWidthForSizing;
    double _marginForSizing;
    double _estimatedItemHeightForNonSmoothScrolling;
    NSMutableDictionary *_sizeCache;
}

@property(retain, nonatomic) NSMutableDictionary *sizeCache; // @synthesize sizeCache=_sizeCache;
@property(nonatomic) double estimatedItemHeightForNonSmoothScrolling; // @synthesize estimatedItemHeightForNonSmoothScrolling=_estimatedItemHeightForNonSmoothScrolling;
@property(nonatomic) double marginForSizing; // @synthesize marginForSizing=_marginForSizing;
@property(nonatomic) double fullWidthForSizing; // @synthesize fullWidthForSizing=_fullWidthForSizing;
@property(retain, nonatomic) UITraitCollection *traitCollectionForSizing; // @synthesize traitCollectionForSizing=_traitCollectionForSizing;
- (void).cxx_destruct;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)checkHeaderSize:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)checkLayoutAttributes:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)calculateSizeForItemAtIndexPath:(id)arg1 usingCache:(_Bool)arg2;
- (struct CGSize)calculateSizeForItemAtIndexPath:(id)arg1;
- (void)setCachedSize:(struct CGSize)arg1 forIndexPath:(id)arg2;
- (struct CGSize)cachedSizeForIndexPath:(id)arg1;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)invalidateLayoutWithoutClearingCache;
- (void)invalidateLayout;
- (double)itemWidth;
- (id)neighborForIndexPath:(id)arg1;
- (_Bool)usingTwoColumns;
- (double)margin;
- (double)fullWidth;
- (id)traitCollection;
- (id)init;

@end
