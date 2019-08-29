//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView, YBBAdVideoView, YBBHomeBabyGrowGradientView, YBBHomeBabyGrowModel;

@interface YBBHomeBabyGrowInfoVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _playing;
    _Bool _bi_isAutoPlay;
    unsigned long long _pageIndex;
    YBBHomeBabyGrowModel *_localModel;
    UITableView *_tableView;
    NSString *_typeColorImageURLString;
    NSString *_typeBImageURLString;
    YBBHomeBabyGrowGradientView *_videoPanel;
    YBBAdVideoView *_videoView;
    double _bi_startTime;
}

@property(nonatomic) double bi_startTime; // @synthesize bi_startTime=_bi_startTime;
@property(nonatomic) _Bool bi_isAutoPlay; // @synthesize bi_isAutoPlay=_bi_isAutoPlay;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) YBBAdVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) YBBHomeBabyGrowGradientView *videoPanel; // @synthesize videoPanel=_videoPanel;
@property(copy, nonatomic) NSString *typeBImageURLString; // @synthesize typeBImageURLString=_typeBImageURLString;
@property(copy, nonatomic) NSString *typeColorImageURLString; // @synthesize typeColorImageURLString=_typeColorImageURLString;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YBBHomeBabyGrowModel *localModel; // @synthesize localModel=_localModel;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (void)showWithImageView:(id)arg1 urlString:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) unsigned long long weeks;
- (void)_floatVideoViewAnimated:(_Bool)arg1 before:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;
- (void)_resetVideoViewAnimated:(_Bool)arg1 before:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;
- (void)resetVideoView;
- (void)setupView;
- (void)requestData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)enableFullPopGestureRecognizer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
