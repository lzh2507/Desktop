//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyCamGPUFilter.h"

@interface LensResizeFilter : MyCamGPUFilter
{
    float m_ratio;
}

- (struct CGSize)sizeOfFBO;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setRatio:(float)arg1;
- (id)init;

@end

