//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class GameCenterGameBriefInfo, MMWebImageView, SummaryItemView, UIButton, UILabel, UIView;
@protocol GameCenterRankedGameInfoCellDelegate;

@interface GameCenterRankedGameInfoCell : MMTableViewCell
{
    UILabel *_rankLabel;
    MMWebImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    UIButton *_downloadButton;
    UILabel *_gameLabel;
    UIView *_leftBanner;
    SummaryItemView *_firstSummaryView;
    SummaryItemView *_secondSummaryView;
    id <GameCenterRankedGameInfoCellDelegate> _delegate;
    GameCenterGameBriefInfo *_gameInfo;
    unsigned long long _rank;
    long long _index;
}

+ (double)heightForCellWithGameInfo:(id)arg1;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) GameCenterGameBriefInfo *gameInfo; // @synthesize gameInfo=_gameInfo;
@property(nonatomic) __weak id <GameCenterRankedGameInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDownloadButtonClicked:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (id)getSummaryItemAtIndex:(unsigned long long)arg1;
- (void)reloadData;
- (void)layoutContent;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

