//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMDB, NSMutableArray;

@interface WXGBackupMMDB : NSObject
{
    NSMutableArray *m_arrCurMsgWrapList;
    unsigned int uiCurrentCursor;
    _Bool bIsLastMsgList;
    CMMDB *m_oMMDB;
    unsigned int m_lastCreateTime;
    unsigned int m_msgCount;
    _Bool m_bStopGet;
    _Bool _shouldChangeForDisplay;
}

+ (void)handleMessage:(id)arg1 ChatName:(id)arg2 Des:(unsigned int)arg3 ShouldChange:(_Bool)arg4;
+ (id)getLocalUsrName:(id)arg1;
@property(nonatomic) _Bool shouldChangeForDisplay; // @synthesize shouldChangeForDisplay=_shouldChangeForDisplay;
- (void).cxx_destruct;
- (id)getMsgChatName:(id)arg1 fromCreateTime:(unsigned int)arg2 endAtTime:(unsigned int)arg3 limit:(int)arg4 timeAsend:(_Bool)arg5;
- (unsigned long long)getMessageCountOfChat:(id)arg1;
- (id)getMsgUseBatchQuery:(id)arg1 fromRowID:(unsigned int)arg2;
- (id)getMsgUseBatchQuery:(id)arg1 fromRowID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3;
- (id)getMsgUseBatchQuery:(id)arg1 fromRowID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 endAtTime:(unsigned int)arg4;
- (id)getMsgUseBatchQuery:(id)arg1 fromRowID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 endAtTime:(unsigned int)arg4 timeAsend:(_Bool)arg5;
- (void)dealloc;
- (id)init;

@end

