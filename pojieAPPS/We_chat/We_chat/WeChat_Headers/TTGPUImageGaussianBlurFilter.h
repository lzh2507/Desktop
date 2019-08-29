//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTGPUImageTwoPassFilter.h"

@interface TTGPUImageGaussianBlurFilter : TTGPUImageTwoPassFilter
{
    int horizontalGaussianArrayUniform;
    int horizontalBlurSizeUniform;
    int verticalGaussianArrayUniform;
    int verticalBlurSizeUniform;
    int verticalPassTexelWidthOffsetUniform;
    int verticalPassTexelHeightOffsetUniform;
    int horizontalPassTexelWidthOffsetUniform;
    int horizontalPassTexelHeightOffsetUniform;
    int blurSizeUniform;
    double _blurSize;
}

@property(nonatomic) double blurSize; // @synthesize blurSize=_blurSize;
- (void)setGaussianValues;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)init;
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;

@end

