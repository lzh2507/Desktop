//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseFilter.h"

@class MCFaceAdjustMeshFilter, NSMutableArray;

@interface MCBaseMultiFilter : MCBaseFilter
{
    _Bool _hasShownFaceTips;
    _Bool _hasShownBodyTips;
    _Bool _hasShownTips;
    NSMutableArray *_filterArray;
    MCBaseFilter *_meshFilter;
    MCBaseFilter *_expressionFilter;
    double _faceAdjustFaceShapeVStrength;
    double _faceAdjustFaceShapeChinStrength;
    double _faceAdjustFaceShapeFaceWidthStrength;
    double _faceAdjustEyeSizeStrength;
    double _faceAdjustNoseSizeStrength;
    double _faceAdjustForeHeadStrength;
    double _faceAdjustEyeDistanceStrength;
    double _faceAdjustEyeAngleStrength;
    double _faceAdjustMouthSizeStrength;
    double _faceAdjustNoseWingStrength;
    double _faceAdjustNoseHeightStrength;
    double _faceAdjustMouthWidthStrength;
    double _faceAdjustMouthHeightStrength;
    MCFaceAdjustMeshFilter *_faceAdjustFilter;
    unsigned long long _bodyBeautyTypeOptions;
}

@property(nonatomic) unsigned long long bodyBeautyTypeOptions; // @synthesize bodyBeautyTypeOptions=_bodyBeautyTypeOptions;
@property(nonatomic) __weak MCFaceAdjustMeshFilter *faceAdjustFilter; // @synthesize faceAdjustFilter=_faceAdjustFilter;
@property(nonatomic) _Bool hasShownTips; // @synthesize hasShownTips=_hasShownTips;
@property(nonatomic) _Bool hasShownBodyTips; // @synthesize hasShownBodyTips=_hasShownBodyTips;
@property(nonatomic) _Bool hasShownFaceTips; // @synthesize hasShownFaceTips=_hasShownFaceTips;
@property(nonatomic) double faceAdjustMouthHeightStrength; // @synthesize faceAdjustMouthHeightStrength=_faceAdjustMouthHeightStrength;
@property(nonatomic) double faceAdjustMouthWidthStrength; // @synthesize faceAdjustMouthWidthStrength=_faceAdjustMouthWidthStrength;
@property(nonatomic) double faceAdjustNoseHeightStrength; // @synthesize faceAdjustNoseHeightStrength=_faceAdjustNoseHeightStrength;
@property(nonatomic) double faceAdjustNoseWingStrength; // @synthesize faceAdjustNoseWingStrength=_faceAdjustNoseWingStrength;
@property(nonatomic) double faceAdjustMouthSizeStrength; // @synthesize faceAdjustMouthSizeStrength=_faceAdjustMouthSizeStrength;
@property(nonatomic) double faceAdjustEyeAngleStrength; // @synthesize faceAdjustEyeAngleStrength=_faceAdjustEyeAngleStrength;
@property(nonatomic) double faceAdjustEyeDistanceStrength; // @synthesize faceAdjustEyeDistanceStrength=_faceAdjustEyeDistanceStrength;
@property(nonatomic) double faceAdjustForeHeadStrength; // @synthesize faceAdjustForeHeadStrength=_faceAdjustForeHeadStrength;
@property(nonatomic) double faceAdjustNoseSizeStrength; // @synthesize faceAdjustNoseSizeStrength=_faceAdjustNoseSizeStrength;
@property(nonatomic) double faceAdjustEyeSizeStrength; // @synthesize faceAdjustEyeSizeStrength=_faceAdjustEyeSizeStrength;
@property(nonatomic) double faceAdjustFaceShapeFaceWidthStrength; // @synthesize faceAdjustFaceShapeFaceWidthStrength=_faceAdjustFaceShapeFaceWidthStrength;
@property(nonatomic) double faceAdjustFaceShapeChinStrength; // @synthesize faceAdjustFaceShapeChinStrength=_faceAdjustFaceShapeChinStrength;
@property(nonatomic) double faceAdjustFaceShapeVStrength; // @synthesize faceAdjustFaceShapeVStrength=_faceAdjustFaceShapeVStrength;
@property(nonatomic) __weak MCBaseFilter *expressionFilter; // @synthesize expressionFilter=_expressionFilter;
@property(nonatomic) __weak MCBaseFilter *meshFilter; // @synthesize meshFilter=_meshFilter;
@property(retain, nonatomic) NSMutableArray *filterArray; // @synthesize filterArray=_filterArray;
- (void).cxx_destruct;
- (void)startInternalAnimation;
- (void)pauseInternalAnimation;
- (void)doStartDevice;
- (void)doStopDevice;
- (void)setSkinColor:(struct GPUVector3)arg1 needBalanceSkin:(_Bool)arg2;
- (id)imageFromCurrentFramebufferWithOrientation:(long long)arg1;
- (id)imageFromCurrentFramebuffer;
- (id)framebufferForOutput;
- (void)useNextFrameForImageCapture;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)removeAllTargets;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (id)targets;
- (id)inlineFaceFeatureFilter;
- (id)inlineEyeLightenFilter;
- (id)inlineRemovePounchFilter;
- (id)inlinePrefixFaceFilter;
- (id)inlineFaceOffFilter;
- (void)resetFaceOffEnvironmentSliderAlphaForCosmetic;
- (void)resetFaceOffEnvironmentSliderAlpha;
- (void)setupFaceOffEnvironmentWithSliderAlpha:(double)arg1;
- (void)setupFaceOffEnvironmentWithImage:(id)arg1 featurePoints:(id)arg2;
- (void)setupEnviroment;
- (int)doReceiveData:(id)arg1 withTarget:(id)arg2;
- (id)faceAnalyzers;
- (void)showBodyTips:(int)arg1;
- (void)showTips:(int)arg1;
- (void)setBodyResults:(id)arg1;
- (void)setHandBoxes:(id)arg1;
- (void)setFaceAnalyzers:(id)arg1 recheckFaceState:(_Bool)arg2;
- (void)setFaceAnalyzers:(id)arg1;
- (id)tmplItem;
- (void)setTmplItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateFaceAdjustParam:(int)arg1 withValue:(double)arg2;
- (long long)filterCount;
- (void)cleanFilter;
- (void)addFilter:(id)arg1;
- (id)init;
- (id)initWithBodyBeautyTypeOptions:(unsigned long long)arg1;

@end

