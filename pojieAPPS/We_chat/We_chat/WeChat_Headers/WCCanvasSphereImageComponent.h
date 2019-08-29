//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "WCAdvertiseSphereViewDelegate-Protocol.h"

@class MMProgressViewEx, NSString, UIView, WCAdvertiseSphereView;

@interface WCCanvasSphereImageComponent : WCCanvasComponent <WCAdvertiseSphereViewDelegate>
{
    _Bool _didDelayShowScrollDownArea;
    WCAdvertiseSphereView *_sphereView;
    MMProgressViewEx *_loadingView;
    UIView *_turnToExploreView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(nonatomic) _Bool didDelayShowScrollDownArea; // @synthesize didDelayShowScrollDownArea=_didDelayShowScrollDownArea;
@property(retain, nonatomic) UIView *turnToExploreView; // @synthesize turnToExploreView=_turnToExploreView;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCAdvertiseSphereView *sphereView; // @synthesize sphereView=_sphereView;
- (void).cxx_destruct;
- (void)onPanGestureEnd;
- (void)idleStateDidChenged:(_Bool)arg1;
- (id)getBackGroundColorWhenLoading;
- (void)resourceDidFailed;
- (void)resourceDidLoad;
- (void)resourceLoading;
- (double)fetchScrollDownAreaDelayTime;
- (_Bool)shouldShowScrollDownArea;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentDidFullyApperaInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)dimScrollDownArea;
- (void)lightScrollDownArea;
- (void)hideTurnToSearchView;
- (void)showTurnToSearchView;
- (void)tryToResetSphereMotionData;
- (void)tryToStopSphereMonitoring;
- (void)tryToStartSphereMonitoring;
- (id)fetchCurrentSnapshotAndNewFrame:(struct CGRect *)arg1;
- (id)fetchOriginSnapshotAndNewFrame:(struct CGRect *)arg1;
- (void)dealloc;
- (void)initViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

