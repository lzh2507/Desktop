//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HoneyPayHomeViewController, HoneyPayListResp_HoneyPayRecord;

@protocol HoneyPayHomeViewControllerDelegate <NSObject>
- (void)honeyPayVCDidClickAddCard:(HoneyPayHomeViewController *)arg1;
- (void)honeyPayVC:(HoneyPayHomeViewController *)arg1 didClickRecord:(HoneyPayListResp_HoneyPayRecord *)arg2;
@end
