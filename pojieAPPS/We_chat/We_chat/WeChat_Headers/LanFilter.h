//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultiFilterConnect.h"

@class ColorBalanceFilter, ColorTempFilter;

@interface LanFilter : MultiFilterConnect
{
    ColorTempFilter *tep;
    ColorBalanceFilter *balance;
}

- (void).cxx_destruct;
- (void)setProperty:(id)arg1 value:(id)arg2;
- (void)NewFilter;
- (id)init;

@end

