//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor, UIFont, UILabel;

@protocol WZLBadgeProtocol <NSObject>
@property(nonatomic) long long badgeMaximumBadgeNumber;
@property(nonatomic) unsigned long long aniType;
@property(nonatomic) struct CGPoint badgeCenterOffset;
@property(nonatomic) struct CGRect badgeFrame;
@property(retain, nonatomic) UIColor *badgeTextColor;
@property(retain, nonatomic) UIColor *badgeBgColor;
@property(retain, nonatomic) UIFont *badgeFont;
@property(retain, nonatomic) UILabel *badge;
- (void)clearBadge;
- (void)showBadgeWithStyle:(unsigned long long)arg1 value:(long long)arg2 animationType:(unsigned long long)arg3;
- (void)showBadge;
@end
