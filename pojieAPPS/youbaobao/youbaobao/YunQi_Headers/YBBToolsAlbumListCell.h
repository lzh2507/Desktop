//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, YBBToolsAlbumListCellRightView;

@interface YBBToolsAlbumListCell : UITableViewCell
{
    UIButton *_playButton;
    YBBToolsAlbumListCellRightView *_rightView;
}

+ (double)albumListCellLineLeft;
+ (double)albumListCellHeightWithTrackTag:(unsigned long long)arg1;
@property(retain, nonatomic) YBBToolsAlbumListCellRightView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (id)textColorAtSong:(id)arg1;
- (void)setMusicSong:(id)arg1 isSelected:(_Bool)arg2 row:(long long)arg3;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

