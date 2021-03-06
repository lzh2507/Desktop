//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NIMUserManagerDelegate-Protocol.h"

@class NIMCommonTableDelegate, NSArray, NSString, NTESLogUploader, UITableView;

@interface NTESSettingViewController : UIViewController <NIMUserManagerDelegate>
{
    UITableView *_tableView;
    NSArray *_data;
    NTESLogUploader *_logUploader;
    NIMCommonTableDelegate *_delegator;
}

@property(retain, nonatomic) NIMCommonTableDelegate *delegator; // @synthesize delegator=_delegator;
@property(retain, nonatomic) NTESLogUploader *logUploader; // @synthesize logUploader=_logUploader;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)showDemoConfig;
- (void)showDemoLog;
- (void)showSDKNetDetectLog;
- (void)showSDKNetCallLog;
- (void)showSDKLog;
- (void)onUserInfoChanged:(id)arg1;
- (void)onCustomNotifyChanged:(id)arg1;
- (void)logoutCurrentAccount:(id)arg1;
- (void)onTouchNetDetect:(id)arg1;
- (void)onTouchAbout:(id)arg1;
- (void)onTouchCustomNotify:(id)arg1;
- (void)onTouchMyWallet:(id)arg1;
- (void)onTouchCleanCache:(id)arg1;
- (void)onTouchUploadLog:(id)arg1;
- (void)onTouchShowLog:(id)arg1;
- (void)onActionShowPushDetailSetting:(id)arg1;
- (void)onActionNoDisturbingSetting:(id)arg1;
- (void)onActionTouchPortrait:(id)arg1;
- (void)refreshData;
- (void)buildData;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

