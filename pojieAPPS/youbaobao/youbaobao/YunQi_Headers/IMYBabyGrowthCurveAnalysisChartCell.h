//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYSimpleListCell.h"

@class IMYBabyGrowthCurveAnalysisChartCellModel, IMYButton, IMYLineChart, IMYLineView;

@interface IMYBabyGrowthCurveAnalysisChartCell : IMYSimpleListCell
{
    IMYLineChart *_chartView;
    CDUnknownBlockType _largeChartButtonAction;
    IMYLineView *_separatorLine;
    IMYButton *_largeButton;
}

+ (long long)getCellHeightWithModel:(id)arg1;
@property(retain, nonatomic) IMYButton *largeButton; // @synthesize largeButton=_largeButton;
@property(nonatomic) IMYLineView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(copy, nonatomic) CDUnknownBlockType largeChartButtonAction; // @synthesize largeChartButtonAction=_largeChartButtonAction;
@property(retain, nonatomic) IMYLineChart *chartView; // @synthesize chartView=_chartView;
- (void).cxx_destruct;
- (void)setupStableUI;
- (void)reloadDisplay;
- (void)_initMyself;

// Remaining properties
@property(retain, nonatomic) IMYBabyGrowthCurveAnalysisChartCellModel *model; // @dynamic model;

@end

