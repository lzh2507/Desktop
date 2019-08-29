//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdTool.h"

@class IMYHomeSideAdView, NSArray, NSMapTable, RACDisposable;
@protocol IMYIAdvertiserModel, IMYIAdvertiserService;

@interface IMYSideBarAdTool : IMYBaseAdTool
{
    NSArray *_adModels;
    NSMapTable *_adViews;
    id <IMYIAdvertiserModel> _adModel;
    id <IMYIAdvertiserService> _service;
    RACDisposable *_offsetDisposable;
    IMYHomeSideAdView *_adView;
}

+ (void)load;
@property(retain, nonatomic) IMYHomeSideAdView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak RACDisposable *offsetDisposable; // @synthesize offsetDisposable=_offsetDisposable;
@property(retain, nonatomic) id <IMYIAdvertiserService> service; // @synthesize service=_service;
@property(retain, nonatomic) id <IMYIAdvertiserModel> adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) NSMapTable *adViews; // @synthesize adViews=_adViews;
@property(retain, nonatomic) NSArray *adModels; // @synthesize adModels=_adModels;
- (void).cxx_destruct;
- (void)cleanupWithView;
- (void)adScrollViewDidScroll:(id)arg1;
- (void)showAdViewWithAdInfo:(id)arg1 andView:(id)arg2;
- (void)setupData;
- (void)addAdService:(id)arg1;

@end
