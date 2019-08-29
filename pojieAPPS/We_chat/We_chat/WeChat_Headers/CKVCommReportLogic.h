//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class HeavyUserRespInfo, NSRecursiveLock, NSString;

@interface CKVCommReportLogic : MMService <MMService, PBMessageObserverDelegate, IMsgExt>
{
    _Bool is_running_;
    NSString *m_filename;
    NSRecursiveLock *m_lock;
    HeavyUserRespInfo *m_heavy_cache;
}

@property _Bool is_running_; // @synthesize is_running_;
- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnReportReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetKVStrategyReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReportDataWithMainThread:(id)arg1;
- (_Bool)RequestGetKVStrategy:(id)arg1;
- (void)ReportData:(id)arg1 withData:(id)arg2 withChannel:(int)arg3;
- (id)GetIDMappingObj;
- (unsigned int)getIDMappingVersion:(int)arg1;
- (void)SaveIDMapping:(id)arg1 withChannel:(int)arg2;
- (void)PrintIDMapping:(id)arg1 withSvrData:(_Bool)arg2;
- (_Bool)IsIDMappingFileExist;
- (void)makeSureIDMappingFileExist;
- (id)getIDMappingFullFileName;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

