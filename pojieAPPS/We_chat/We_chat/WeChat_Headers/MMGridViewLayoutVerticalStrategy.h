//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMGridViewLayoutStrategyBase.h"

#import "MMGridViewLayoutStrategy-Protocol.h"

@class NSString;

@interface MMGridViewLayoutVerticalStrategy : MMGridViewLayoutStrategyBase <MMGridViewLayoutStrategy>
{
    long long _numberOfItemsPerRow;
}

+ (_Bool)requiresEnablingPaging;
@property(readonly, nonatomic) long long numberOfItemsPerRow; // @synthesize numberOfItemsPerRow=_numberOfItemsPerRow;
- (struct _NSRange)rangeOfPositionsInBoundsFromOffset:(struct CGPoint)arg1;
- (long long)itemPositionFromLocation:(struct CGPoint)arg1;
- (struct CGPoint)originForItemAtPosition:(long long)arg1;
- (void)rebaseWithItemCount:(long long)arg1 insideOfBounds:(struct CGRect)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

