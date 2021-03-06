//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdvertiserService.h"

@class IMYSigninPopupAdView, RACDisposable;
@protocol IMYIAdvertiserModel;

@interface IMYSigninAdService : IMYBaseAdvertiserService
{
    id <IMYIAdvertiserModel> _adModel;
    IMYSigninPopupAdView *_adView;
    RACDisposable *_notificationDisposable;
}

@property(nonatomic) __weak RACDisposable *notificationDisposable; // @synthesize notificationDisposable=_notificationDisposable;
@property(retain, nonatomic) IMYSigninPopupAdView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) id <IMYIAdvertiserModel> adModel; // @synthesize adModel=_adModel;
- (void).cxx_destruct;
- (void)closeWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)displayWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)clickWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (id)viewWithModel:(id)arg1;
- (id)modelWithIndex:(long long)arg1;
- (long long)modelCount;
- (void)cancelRequest;
- (void)dealloc;
- (void)cleanup;
- (void)showSigninPopupView:(long long)arg1;
- (void)setupServicesWithAds:(id)arg1;
- (void)requestDataWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)initWithADInfo:(id)arg1;

@end

