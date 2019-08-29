//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UILabel, UITableView, UIView;

@interface SYAboutViewCtl : SYBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_headerView;
    UILabel *_footerView;
    UIImageView *_topline;
    UIImageView *_bg;
    UITableView *_myTableView;
    UILabel *_versonLabel;
    UIImageView *_icon;
    NSMutableArray *_tvData;
}

@property(retain, nonatomic) NSMutableArray *tvData; // @synthesize tvData=_tvData;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *versonLabel; // @synthesize versonLabel=_versonLabel;
@property(retain, nonatomic) UITableView *myTableView; // @synthesize myTableView=_myTableView;
@property(nonatomic) __weak UIImageView *bg; // @synthesize bg=_bg;
@property(nonatomic) __weak UIImageView *topline; // @synthesize topline=_topline;
@property(retain, nonatomic) UILabel *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)initTextXib;
- (void)initData;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
