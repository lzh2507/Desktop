//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WAAuthorizeDelegate-Protocol.h"
#import "WAJSContextPlugin_userAccountProtocol-Protocol.h"

@class NSDictionary, NSString, WAJSContextPlugin_userAccount, WAUserAuthorizeLogic;

@interface WAJSEventHandler_authorize : WAJSEventHandler_BaseEvent <WAAuthorizeDelegate, WAJSContextPlugin_userAccountProtocol>
{
    NSString *_appID;
    WAUserAuthorizeLogic *_authLogic;
    _Bool _requestInQueue;
    NSDictionary *_dicInputParam;
    WAJSContextPlugin_userAccount *_userAccountInstance;
}

@property(nonatomic) __weak WAJSContextPlugin_userAccount *userAccountInstance; // @synthesize userAccountInstance=_userAccountInstance;
@property(retain) NSDictionary *dicInputParam; // @synthesize dicInputParam=_dicInputParam;
- (void).cxx_destruct;
- (void)showConfirmView;
- (void)continueShowConfirmView;
- (void)stopLoading;
- (void)startLoading:(id)arg1;
- (void)endCancel;
- (void)endOK;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endErrorWithMessage:(id)arg1;
- (void)endWithResult:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)onUserAccountJSEventEnd;
- (void)onAuthorizeConfirmDeny:(id)arg1;
- (void)onAuthorizeConfirmAccept:(id)arg1;
- (void)onAuthorizeConfirmEnd:(_Bool)arg1;
- (void)onAuthorizeNeedConfirm;
- (void)onRequestAuthorizeOK;
- (void)onRequestAuthorizeFail:(id)arg1;
- (id)getCurrentViewController;
- (void)mainThread_runUserAccountJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

