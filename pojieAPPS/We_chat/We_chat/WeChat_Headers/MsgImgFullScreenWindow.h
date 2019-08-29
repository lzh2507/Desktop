//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "WCAdFullScreenVideoViewControllerDelegate-Protocol.h"
#import "WCNetworkMediaPlayerDelegate-Protocol.h"

@class CMessageWrap, NSString;
@protocol MsgImgFullScreenWindowDelegate;

@interface MsgImgFullScreenWindow : MMUIWindow <WCNetworkMediaPlayerDelegate, WCAdFullScreenVideoViewControllerDelegate>
{
    NSString *_chatname;
    id <MsgImgFullScreenWindowDelegate> m_delegate;
    CMessageWrap *m_tempMessageWrap;
    _Bool m_bCloseForViewDetail;
}

@property(retain, nonatomic) NSString *chatname; // @synthesize chatname=_chatname;
- (void).cxx_destruct;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClosePlayer;
- (void)onCloseAdPlayerForDetailView:(id)arg1;
- (void)onShareAdVideoToTimeline:(_Bool)arg1;
- (void)onShareAdVideoToFriends:(id)arg1;
- (void)onFavAdVideoClicked;
- (void)onAdPlayerStateChange:(int)arg1;
- (id)getAdFullScreenVideoController:(id)arg1;
- (id)getWCNetworkMediaPlayer:(id)arg1;
- (void)onPlayAttachVideo:(id)arg1;
- (_Bool)viewAlreadyShow;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

