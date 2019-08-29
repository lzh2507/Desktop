//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NIMChatManagerDelegate-Protocol.h"
#import "NIMConversationManagerDelegate-Protocol.h"
#import "NIMInputActionDelegate-Protocol.h"
#import "NIMInputDelegate-Protocol.h"
#import "NIMMediaManagerDelegate-Protocol.h"
#import "NIMMessageCellDelegate-Protocol.h"
#import "NIMSessionInteractorDelegate-Protocol.h"

@class NIMInputView, NIMMessage, NIMSession, NIMSessionConfigurator, NSIndexPath, NSString, UILabel, UITableView;
@protocol NIMSessionInteractor;

@interface NIMSessionViewController : UIViewController <NIMMediaManagerDelegate, NIMInputDelegate, NIMSessionInteractorDelegate, NIMInputActionDelegate, NIMMessageCellDelegate, NIMChatManagerDelegate, NIMConversationManagerDelegate>
{
    UITableView *_tableView;
    NIMInputView *_sessionInputView;
    NIMSession *_session;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    NIMMessage *_messageForMenu;
    NSIndexPath *_lastVisibleIndexPathBeforeRotation;
    NIMSessionConfigurator *_configurator;
    id <NIMSessionInteractor> _interactor;
}

@property(nonatomic) __weak id <NIMSessionInteractor> interactor; // @synthesize interactor=_interactor;
@property(retain, nonatomic) NIMSessionConfigurator *configurator; // @synthesize configurator=_configurator;
@property(retain, nonatomic) NSIndexPath *lastVisibleIndexPathBeforeRotation; // @synthesize lastVisibleIndexPathBeforeRotation=_lastVisibleIndexPathBeforeRotation;
@property(retain, nonatomic) NIMMessage *messageForMenu; // @synthesize messageForMenu=_messageForMenu;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NIMSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NIMInputView *sessionInputView; // @synthesize sessionInputView=_sessionInputView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)refreshSessionSubTitle:(id)arg1;
- (void)refreshSessionTitle:(id)arg1;
- (void)setUpTitleView;
- (id)conversationManager;
- (void)changeLeftBarBadge:(long long)arg1;
- (void)removeListener;
- (void)addListener;
- (void)markRead;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onTapMediaItemLocation:(id)arg1;
- (void)onTapMediaItemShoot:(id)arg1;
- (void)onTapMediaItemPicture:(id)arg1;
- (void)uiCheckReceipts:(id)arg1;
- (void)uiUpdateMessage:(id)arg1;
- (id)uiDeleteMessage:(id)arg1;
- (void)uiInsertMessages:(id)arg1;
- (void)uiAddMessages:(id)arg1;
- (void)menuDidHide:(id)arg1;
- (void)deleteMsg:(id)arg1;
- (void)copyText:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)menusItems:(id)arg1;
- (_Bool)needProximityMonitor;
- (long long)recordAudioType;
- (_Bool)shouldShowInputView;
- (_Bool)shouldAddListenerForNewMsg;
- (id)sessionConfig;
- (_Bool)disableAudioPlayedStatusIcon:(id)arg1;
- (_Bool)onLongPressCell:(id)arg1 inView:(id)arg2;
- (void)onRetryMessage:(id)arg1;
- (_Bool)onTapCell:(id)arg1;
- (void)onStartRecording;
- (void)onStopRecording;
- (void)onCancelRecording;
- (void)onSelectChartlet:(id)arg1 catalog:(id)arg2;
- (id)robotsToSend:(id)arg1;
- (void)onSendText:(id)arg1 atUsers:(id)arg2;
- (void)onTextChanged:(id)arg1;
- (_Bool)onTapMediaItem:(id)arg1;
- (void)didChangeInputHeight:(double)arg1;
- (void)showRecordFileNotSendReason;
- (_Bool)recordFileCanBeSend:(id)arg1;
- (void)onRecordFailed:(id)arg1;
- (void)recordAudioInterruptionBegin;
- (void)recordAudioProgress:(double)arg1;
- (void)recordAudioDidCancelled;
- (void)recordAudio:(id)arg1 didCompletedWithError:(id)arg2;
- (void)recordAudio:(id)arg1 didBeganWithError:(id)arg2;
- (void)changeUnreadCount:(id)arg1 totalUnreadCount:(long long)arg2;
- (void)didRemoveRecentSession:(id)arg1 totalUnreadCount:(long long)arg2;
- (void)didUpdateRecentSession:(id)arg1 totalUnreadCount:(long long)arg2;
- (void)didAddRecentSession:(id)arg1 totalUnreadCount:(long long)arg2;
- (void)messagesDeletedInSession:(id)arg1;
- (void)onRecvMessageReceipts:(id)arg1;
- (void)fetchMessageAttachment:(id)arg1 didCompleteWithError:(id)arg2;
- (void)fetchMessageAttachment:(id)arg1 progress:(float)arg2;
- (void)onRecvMessages:(id)arg1;
- (void)sendMessage:(id)arg1 progress:(float)arg2;
- (void)sendMessage:(id)arg1 didCompleteWithError:(id)arg2;
- (void)willSendMessage:(id)arg1;
- (id)sessionSubTitle;
- (id)sessionTitle;
- (void)didPullUpMessageData;
- (void)didRefreshMessageData;
- (void)didFetchMessageData;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupConfigurator;
- (void)setupInputView;
- (void)setupTableView;
- (void)setupNav;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
