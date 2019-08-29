//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIFont, UIScrollView;
@protocol IMYNewsSegmentedViewDataSource, IMYNewsSegmentedViewDelegate;

@interface IMYNewsSegmentedView : UIView
{
    _Bool _dynamicIndicatorWidth;
    unsigned long long _currentIndex;
    double _indicatorWidth;
    UIFont *_titleFont;
    UIFont *_titleSelectFont;
    UIColor *_titleColor;
    UIColor *_titleSelectColor;
    id <IMYNewsSegmentedViewDelegate> _delegate;
    id <IMYNewsSegmentedViewDataSource> _dataSource;
    UIScrollView *_scrollView;
    double _buttonOffset;
    UIView *_indicatorView;
}

@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) double buttonOffset; // @synthesize buttonOffset=_buttonOffset;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <IMYNewsSegmentedViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IMYNewsSegmentedViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *titleSelectColor; // @synthesize titleSelectColor=_titleSelectColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleSelectFont; // @synthesize titleSelectFont=_titleSelectFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) _Bool dynamicIndicatorWidth; // @synthesize dynamicIndicatorWidth=_dynamicIndicatorWidth;
@property(nonatomic) double indicatorWidth; // @synthesize indicatorWidth=_indicatorWidth;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (id)buttonWith:(unsigned long long)arg1;
- (void)hideRedDotView:(long long)arg1;
- (void)showRedDotView:(long long)arg1;
- (void)hideRedDotView;
- (void)showRedDotView;
- (void)reloadAt:(unsigned long long)arg1;
- (void)reload;
- (void)updateSubViewFrame;
- (id)setButtonSelect:(unsigned long long)arg1 select:(_Bool)arg2;
- (struct CGRect)indicatorFrameWithButton:(id)arg1;
- (void)moveIndicatorView:(id)arg1 animated:(_Bool)arg2;
- (void)addButton:(unsigned long long)arg1 title:(id)arg2 width:(double)arg3;
- (void)resetSubViews;
- (void)setSelectedIndex:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)prepareUI;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
