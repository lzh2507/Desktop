//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAPageSheet;

@protocol WAPageSheetDelegate <NSObject>

@optional
- (void)pageSheetDidCancelByRotate:(WAPageSheet *)arg1;
- (void)pageSheetDidCancelByTapAside:(WAPageSheet *)arg1;
- (void)pageSheetDidHide:(WAPageSheet *)arg1;
- (void)pageSheetWillHide:(WAPageSheet *)arg1;
- (void)pageSheetDidShow:(WAPageSheet *)arg1;
- (void)pageSheetWillShow:(WAPageSheet *)arg1;
@end

