//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class WCShareCardDB;
@protocol WCShareCardSyncMgrDelegate;

@interface WCShareCardSyncMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned long long _syncMaxSeq;
    WCShareCardDB *_wcShareCardDB;
    unsigned int _defaultIntervalSeconds;
    unsigned int _lastSyncTime;
    id <WCShareCardSyncMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <WCShareCardSyncMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)saveSyncMaxSeq:(unsigned long long)arg1;
- (id)getWCShareCardSyncInfoPath;
- (void)loadSyncSeq;
- (void)reloadSyncKeyBuffer;
- (void)handleShareCardSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doSync;
- (void)doSyncInternal;
- (void)makeSyncCgi;
- (void)clearSyncKey;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (id)init;

@end

