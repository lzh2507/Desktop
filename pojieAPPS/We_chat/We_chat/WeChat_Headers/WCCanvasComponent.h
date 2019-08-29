//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSIndexPath, UIButton, WCAdvertiseInfo, WCCanvasComponentItem, WCDataItem;
@protocol WCCanvasComponentDelegate;

@interface WCCanvasComponent : MMUIView
{
    int _type;
    WCCanvasComponentItem *_componentItem;
    WCDataItem *_dataItem;
    WCAdvertiseInfo *_advertiseInfo;
    NSIndexPath *_indexPath;
    long long _orientation;
    id <WCCanvasComponentDelegate> _delegate;
    UIButton *_bgButton;
}

+ (double)calcHeightForCanvasItem:(id)arg1 withMaxWidth:(double)arg2 dataItem:(id)arg3 orientation:(long long)arg4;
+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
+ (id)componentWithType:(int)arg1;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) WCAdvertiseInfo *advertiseInfo; // @synthesize advertiseInfo=_advertiseInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCCanvasComponentItem *componentItem; // @synthesize componentItem=_componentItem;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (void)updatebgButton;
- (void)onClickComponentTouchButton:(id)arg1 forEvent:(id)arg2;
- (_Bool)isBgMoreBlack;
- (void)resetSightViewAudioState:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidFullyApperaInMainScreen:(_Bool)arg1;
- (void)componentWillApperaInMainScreen:(_Bool)arg1;
- (void)willRotateToOrientation:(long long)arg1 duration:(double)arg2;
- (double)calcAppearFactor;
- (_Bool)hasPreloadWebViewInScrollGroupComponent;
- (double)getPreloadWebViewBottomInScrollGroupComponent;
- (double)fetchScrollDownAreaDelayTime;
- (_Bool)shouldShowScrollDownArea;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (struct CGSize)calcCurrentSize;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

