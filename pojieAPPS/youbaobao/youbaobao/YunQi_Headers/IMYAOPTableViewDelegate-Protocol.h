//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class IMYAOPTableViewUtils, NSIndexPath, UITableViewCell;

@protocol IMYAOPTableViewDelegate <UITableViewDelegate>

@optional
- (double)aopTableUtils:(IMYAOPTableViewUtils *)arg1 heightForHeaderInSection:(long long)arg2;
- (void)aopTableUtils:(IMYAOPTableViewUtils *)arg1 didEndDisplayingCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)aopTableUtils:(IMYAOPTableViewUtils *)arg1 willDisplayCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
@end

