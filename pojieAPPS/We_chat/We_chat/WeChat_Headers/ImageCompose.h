//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyCamGPUFilter.h"

@interface ImageCompose : MyCamGPUFilter
{
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)setOriginUIImage:(id)arg1;
- (void)setMaskImage:(struct _Image *)arg1;
- (void)setOriginImage:(struct _Image *)arg1;
- (struct CGSize)sizeOfFBO;
- (id)init;

@end

