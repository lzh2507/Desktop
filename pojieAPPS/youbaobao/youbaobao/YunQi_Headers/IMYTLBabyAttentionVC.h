//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYAvatarImageView, IMYTLBabyModel, NSString, UILabel, UITableView, UITableViewCell;

@interface IMYTLBabyAttentionVC : IMYTLViewController <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _cancelAttentionBlock;
    UITableView *_tableView;
    UITableViewCell *_infoCell;
    IMYAvatarImageView *_avatarImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UITableViewCell *_cancelCell;
    UILabel *_cancelLabel;
    IMYTLBabyModel *_model;
}

@property(retain, nonatomic) IMYTLBabyModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(retain, nonatomic) UITableViewCell *cancelCell; // @synthesize cancelCell=_cancelCell;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IMYAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UITableViewCell *infoCell; // @synthesize infoCell=_infoCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType cancelAttentionBlock; // @synthesize cancelAttentionBlock=_cancelAttentionBlock;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadData;
- (void)setupTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

