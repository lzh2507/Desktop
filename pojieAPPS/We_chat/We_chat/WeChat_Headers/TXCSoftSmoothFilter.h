//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCFilter.h"

@interface TXCSoftSmoothFilter : TXCFilter
{
    double _beautyLevel;
    double _brightLevel;
    double _toneLevel;
    double _mixratio;
}

@property(nonatomic) double mixratio; // @synthesize mixratio=_mixratio;
@property(nonatomic) double toneLevel; // @synthesize toneLevel=_toneLevel;
@property(nonatomic) double brightLevel; // @synthesize brightLevel=_brightLevel;
@property(nonatomic) double beautyLevel; // @synthesize beautyLevel=_beautyLevel;
- (void)setParams:(double)arg1 white:(double)arg2 tone:(double)arg3;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)init;

@end

