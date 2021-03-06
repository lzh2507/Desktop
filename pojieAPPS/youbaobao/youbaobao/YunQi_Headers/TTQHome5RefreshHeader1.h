//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMY_ThemeChangeProtocol-Protocol.h"

@class CALayer, NSString, UILabel, UIScrollView;

@interface TTQHome5RefreshHeader1 : UIView <IMY_ThemeChangeProtocol>
{
    _Bool _refreshing;
    _Bool _rotation;
    unsigned int _machInfoNumber;
    unsigned int _machInfoDenom;
    CDUnknownBlockType _refreshingBlock;
    CDUnknownBlockType _endRefreshingCompletionBlock;
    double _progress;
    long long _state;
    UILabel *_messageLabel;
    UIScrollView *_scrollView;
    double _origanlInsetTop;
    double _refreshOffsetTop;
    double _refreshOffsetBottom;
    double _endRefreshingTime;
    UIView *_refreshContainView;
    UILabel *_label;
    CALayer *_groupLayer;
    CALayer *_topPointLayer;
    CALayer *_bottomPointLayer;
    UIView *_messageBackView;
    double _originHeight;
    unsigned long long _beginUpdateTime;
    long long _oldState;
}

+ (id)defaultHome5RefreshHeader:(id)arg1;
@property(nonatomic) long long oldState; // @synthesize oldState=_oldState;
@property(nonatomic) unsigned int machInfoDenom; // @synthesize machInfoDenom=_machInfoDenom;
@property(nonatomic) unsigned int machInfoNumber; // @synthesize machInfoNumber=_machInfoNumber;
@property(nonatomic) unsigned long long beginUpdateTime; // @synthesize beginUpdateTime=_beginUpdateTime;
@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(retain, nonatomic) UIView *messageBackView; // @synthesize messageBackView=_messageBackView;
@property(nonatomic) _Bool rotation; // @synthesize rotation=_rotation;
@property(retain, nonatomic) CALayer *bottomPointLayer; // @synthesize bottomPointLayer=_bottomPointLayer;
@property(retain, nonatomic) CALayer *topPointLayer; // @synthesize topPointLayer=_topPointLayer;
@property(retain, nonatomic) CALayer *groupLayer; // @synthesize groupLayer=_groupLayer;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *refreshContainView; // @synthesize refreshContainView=_refreshContainView;
@property(nonatomic) double endRefreshingTime; // @synthesize endRefreshingTime=_endRefreshingTime;
@property(nonatomic) double refreshOffsetBottom; // @synthesize refreshOffsetBottom=_refreshOffsetBottom;
@property(nonatomic) double refreshOffsetTop; // @synthesize refreshOffsetTop=_refreshOffsetTop;
@property(nonatomic) double origanlInsetTop; // @synthesize origanlInsetTop=_origanlInsetTop;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType endRefreshingCompletionBlock; // @synthesize endRefreshingCompletionBlock=_endRefreshingCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType refreshingBlock; // @synthesize refreshingBlock=_refreshingBlock;
- (void).cxx_destruct;
- (void)innerEndRefreshing:(unsigned char)arg1;
- (void)endRefreshing:(unsigned char)arg1;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)addRotationAniToLayer:(id)arg1;
- (void)setLineLayerStrokeWithProgress:(double)arg1;
- (_Bool)dragging;
- (id)layerWithPoint:(struct CGPoint)arg1;
- (void)setRefreshHeight:(double)arg1;
- (void)setRefreshBottom:(double)arg1;
- (void)setRefreshTop:(double)arg1;
- (double)refreshRefreshBottom;
- (double)refreshRefreshTop;
- (double)refreshPullLen;
- (double)refreshNormalHeight;
- (void)imy_themeChanged;
- (void)initLayers;
- (void)commentInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

