//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class IMYLineChartConfig;

@interface IMYLineChartLayer : CALayer
{
    IMYLineChartConfig *_config;
}

+ (double)pointAnimBeginTimeOfIndex:(long long)arg1;
+ (id)layerWithFrame:(struct CGRect)arg1 zPosition:(double)arg2;
@property(retain, nonatomic) IMYLineChartConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)removeOldSubLayers;

@end
