//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultiFilterConnect.h"

@class ColorBalanceFilter, HSVAdjuster, HSVAdjuster_ColorChannel;

@interface FairyTaleFilter : MultiFilterConnect
{
    ColorBalanceFilter *balance;
    HSVAdjuster_ColorChannel *hr;
    HSVAdjuster_ColorChannel *hy;
    float _shadow[3];
    float _midtone[3];
    float _hilight[3];
    float _hsv_red[3];
    float _hsv_red_range[4];
    float _hsv_yellow[3];
    float _hsv_yellow_range[4];
    HSVAdjuster *hsv;
}

- (void).cxx_destruct;
- (void)setProperty:(id)arg1 value:(id)arg2;
- (void)NewFilter;
- (id)init;

@end

