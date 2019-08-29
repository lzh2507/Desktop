//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class UIImageView, VoipContentViewModel;

@interface VoipContentCellView : CommonMessageCellView
{
    UIImageView *m_unreadImageView;
}

- (void).cxx_destruct;
- (void)startVideoVoip;
- (void)tapVoipNodeView;
- (void)startVoiceVoip;
- (void)tapVoiceVoipNodeView;
- (void)onClicked;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)operationMenuItems;
- (void)updateStatus;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) VoipContentViewModel *viewModel; // @dynamic viewModel;

@end

