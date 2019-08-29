//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultiFilterConnect.h"

@class ChannelSharpen, ChannelStretch, HistogramStretchFilter, SaturationFilter;

@interface GlowFilter : MultiFilterConnect
{
    ChannelStretch *stretch_filter;
    ChannelSharpen *sharpen_filter;
    SaturationFilter *saturation_filter;
    HistogramStretchFilter *histogramFilter;
}

- (void).cxx_destruct;
- (void)NewFilter;
- (void)setStrength:(float)arg1 Sharpeness:(float)arg2 Saturation:(float)arg3 HisPercent:(float)arg4;
- (void)setParameter:(float)arg1;
- (id)init:(_Bool)arg1;

@end
