//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "StoreEmotionRecoverMyPanelListCgiDelegate-Protocol.h"

@class NSString, StoreEmotionRecoverMyPanelListCgi;
@protocol StoreEmotionRecoverLogicObjectDelegate;

@interface StoreEmotionRecoverLogicObject : MMObject <StoreEmotionRecoverMyPanelListCgiDelegate>
{
    _Bool _m_isActive;
    _Bool _m_hasStartLogic;
    int _scene;
    StoreEmotionRecoverMyPanelListCgi *_downloadCgi;
    id <StoreEmotionRecoverLogicObjectDelegate> _delegate;
}

@property(nonatomic) _Bool m_hasStartLogic; // @synthesize m_hasStartLogic=_m_hasStartLogic;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive=_m_isActive;
@property(nonatomic) __weak id <StoreEmotionRecoverLogicObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) StoreEmotionRecoverMyPanelListCgi *downloadCgi; // @synthesize downloadCgi=_downloadCgi;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)onStoreEmotionRecoverMyPanelListCgiFailed;
- (void)onStoreEmotionRecoverMyPanelListCgiOKWithPids:(id)arg1;
- (_Bool)canStartCgiNow;
- (void)startInternalRequest;
- (_Bool)isActive;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

