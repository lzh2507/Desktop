//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "YBBToolsTYPagerControllerDataSource-Protocol.h"

@class IMYCaptionView, NSMutableArray, NSMutableDictionary, NSString, RACCommand, UIButton, YBBToolsMusicAssitantTabModel, YBBToolsTYTabButtonPagerController;

@interface YBBToolsMusicAssitantContainerVC : IMYPublicBaseViewController <YBBToolsTYPagerControllerDataSource>
{
    _Bool _isFromHomePage;
    _Bool _isBirthdayChange;
    CDUnknownBlockType _searchHotWordBlock;
    RACCommand *_requestCommand;
    UIButton *_searchButton;
    YBBToolsTYTabButtonPagerController *_pagerController;
    IMYCaptionView *_captionView;
    NSMutableArray *_columns;
    YBBToolsMusicAssitantTabModel *_tabLastColunm;
    NSMutableDictionary *_viewControllers;
    NSString *_hotWord;
}

+ (id)searchView;
@property(copy, nonatomic) NSString *hotWord; // @synthesize hotWord=_hotWord;
@property(retain, nonatomic) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) YBBToolsMusicAssitantTabModel *tabLastColunm; // @synthesize tabLastColunm=_tabLastColunm;
@property(retain, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) YBBToolsTYTabButtonPagerController *pagerController; // @synthesize pagerController=_pagerController;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) RACCommand *requestCommand; // @synthesize requestCommand=_requestCommand;
@property(nonatomic) _Bool isBirthdayChange; // @synthesize isBirthdayChange=_isBirthdayChange;
@property(copy, nonatomic) CDUnknownBlockType searchHotWordBlock; // @synthesize searchHotWordBlock=_searchHotWordBlock;
@property(nonatomic) _Bool isFromHomePage; // @synthesize isFromHomePage=_isFromHomePage;
- (void).cxx_destruct;
- (void)trackForWords:(id)arg1;
- (id)subviewControllerAtIndex:(long long)arg1;
- (id)pagerController:(id)arg1 controllerForIndex:(long long)arg2;
- (id)pagerController:(id)arg1 titleForIndex:(long long)arg2;
- (long long)numberOfControllersInPagerController;
- (void)requestHotWords;
- (void)setupData;
- (void)searchAction;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)enableFullPopGestureRecognizer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
