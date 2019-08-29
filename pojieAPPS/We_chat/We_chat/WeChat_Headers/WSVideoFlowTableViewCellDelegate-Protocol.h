//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSVideoFlowBaseDelegate-Protocol.h"

@class CdnDownloadTaskInfo, NSString, WSStreamPlayerView, WSVideoFlowTableViewCell, WSVideoModel;

@protocol WSVideoFlowTableViewCellDelegate <WSVideoFlowBaseDelegate>

@optional
- (void)onRecordNetPauseAndPlay;
- (void)onCdnVideoDownLoadFinishForVideoModel:(WSVideoModel *)arg1 retCode:(int)arg2 cdnTaskInfo:(CdnDownloadTaskInfo *)arg3;
- (_Bool)onPlayerViewUpdateVideoUrl:(NSString *)arg1;
- (void)onRecommendInsertVideo:(NSString *)arg1;
- (_Bool)onVideoHasRecommend:(NSString *)arg1;
- (_Bool)isWSVideoPlayAsFirstVideo:(NSString *)arg1;
- (void)onPlayerViewMaskPlayButtonClick:(WSVideoFlowTableViewCell *)arg1;
- (void)onDelayToHideControlViews:(WSVideoFlowTableViewCell *)arg1;
- (void)onShowControlViews:(WSVideoFlowTableViewCell *)arg1;
- (_Bool)hasPlayAnyVideo;
- (_Bool)isInteractiveCell:(WSVideoFlowTableViewCell *)arg1;
- (unsigned int)getCachedPlayTimeForVideo:(WSVideoModel *)arg1;
- (WSVideoModel *)onTryPlayNext:(_Bool)arg1 currentVideo:(WSVideoModel *)arg2;
- (_Bool)canLoadNextWithCurrent:(WSVideoFlowTableViewCell *)arg1;
- (void)onRealBeginPlay:(WSVideoFlowTableViewCell *)arg1 autoPlay:(_Bool)arg2;
- (_Bool)onVideoPlayEnd:(WSStreamPlayerView *)arg1;
- (void)onTapSurroundings:(WSVideoFlowTableViewCell *)arg1;
- (void)onTapMaskView:(WSVideoFlowTableViewCell *)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 cell:(WSVideoFlowTableViewCell *)arg3 video:(WSStreamPlayerView *)arg4;
@end

