//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CheckSecret, NSDate;

@interface CheckAlertSecret : NSObject
{
    CheckSecret *_checkSecret;
    NSDate *_checkDate;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDate *checkDate; // @synthesize checkDate=_checkDate;
@property(retain, nonatomic) CheckSecret *checkSecret; // @synthesize checkSecret=_checkSecret;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)loadOnlineDate:(id)arg1 onViewController:(id)arg2 sid:(id)arg3;
- (id)init;

@end

