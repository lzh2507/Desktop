//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class IMYAnalysisTipView, IMYAnalyzeChartSetting, NSString, UIScrollView;

@interface IMYMensesCylindricalView : UIView <UIScrollViewDelegate>
{
    _Bool _skip;
    IMYAnalyzeChartSetting *_setting;
    CDUnknownBlockType _dateChangeBlock;
    UIScrollView *_cylinderView;
    IMYAnalysisTipView *_tipView;
    UIView *_currentBar;
    long long _currentIndex;
    long long _inIndex;
}

+ (id)viewWithSetting:(id)arg1 isLands:(_Bool)arg2;
@property(nonatomic) _Bool skip; // @synthesize skip=_skip;
@property(nonatomic) long long inIndex; // @synthesize inIndex=_inIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UIView *currentBar; // @synthesize currentBar=_currentBar;
@property(retain, nonatomic) IMYAnalysisTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIScrollView *cylinderView; // @synthesize cylinderView=_cylinderView;
@property(copy, nonatomic) CDUnknownBlockType dateChangeBlock; // @synthesize dateChangeBlock=_dateChangeBlock;
@property(retain, nonatomic) IMYAnalyzeChartSetting *setting; // @synthesize setting=_setting;
- (void).cxx_destruct;
- (id)gradientLayerStartColor:(id)arg1 endColor:(id)arg2;
- (void)scroll:(id)arg1 toPage:(long long)arg2 animated:(_Bool)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)drawCornerToLayer:(id)arg1;
- (void)barTap:(id)arg1;
- (void)touchBar:(id)arg1;
- (void)drawTrendViewUseCylinder;
- (void)drawHorCoordinate;
- (void)drawVerCoordinate;
- (void)scrollToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToCenterIndex:(long long)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

