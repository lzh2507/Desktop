//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayJSAuthBaseLogic.h"

#import "WCBaseControlMgrExt-Protocol.h"

@class NSString;
@protocol WCPayJSOpenLQTDepositPlanLogicDelegate;

@interface WCPayJSOpenLQTDepositPlanLogic : WCPayJSAuthBaseLogic <WCBaseControlMgrExt>
{
    id <WCPayJSOpenLQTDepositPlanLogicDelegate> _m_delegate;
}

@property __weak id <WCPayJSOpenLQTDepositPlanLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)authOk;
- (void)authFail;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

