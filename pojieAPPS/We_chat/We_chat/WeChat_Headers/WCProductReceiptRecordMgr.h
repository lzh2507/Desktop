//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableArray, NSString;

@interface WCProductReceiptRecordMgr : MMService <MMService>
{
    NSMutableArray *_receiptHistoryRecordList;
    _Bool _hasLoad;
}

@property(retain, nonatomic) NSMutableArray *receiptHistoryRecordList; // @synthesize receiptHistoryRecordList=_receiptHistoryRecordList;
- (void).cxx_destruct;
- (_Bool)onServiceMemoryWarning;
- (void)saveReceiptHistoryRecord;
- (_Bool)loadReceiptHistoryRecord;
- (void)clearReceiptHistoryRecord;
- (void)addReceiptHistroyRecord:(id)arg1;
- (id)getLastestReceiptRecord;
- (id)getReceiptHistoryRecord;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

