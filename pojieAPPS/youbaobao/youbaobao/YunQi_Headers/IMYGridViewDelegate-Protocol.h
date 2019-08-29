//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMYGridView, NSIndexPath, UIView;

@protocol IMYGridViewDelegate <NSObject>
- (struct CGSize)imy_itemSizeWithGridView:(IMYGridView *)arg1;

@optional
- (void)imy_gridView:(IMYGridView *)arg1 willDisplayItem:(UIView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (UIView *)imy_gridView:(IMYGridView *)arg1 viewForFooterInSection:(long long)arg2;
- (UIView *)imy_gridView:(IMYGridView *)arg1 viewForHeaderInSection:(long long)arg2;
- (double)imy_gridView:(IMYGridView *)arg1 heightForFooterInSection:(long long)arg2;
- (double)imy_gridView:(IMYGridView *)arg1 heightForHeaderInSection:(long long)arg2;
- (void)imy_gridView:(IMYGridView *)arg1 didClickItemView:(UIView *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end
