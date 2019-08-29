//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSF_NIMSystemNotificationManager-Protocol.h"

@class NSString;

@interface YSF_NIMSystemNotificationManagerWrapper : NSObject <YSF_NIMSystemNotificationManager>
{
}

+ (id)sharedWrapper;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)onReceiveCustomSystemNotification:(id)arg1;
- (void)sendCustomNotification:(id)arg1 toSession:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)markAllNotificationsAsRead;
- (void)markNotificationAsRead:(id)arg1;
- (void)deleteAllNotifications;
- (void)deleteNotification:(id)arg1;
- (long long)allUnreadCount;
- (id)fetchSystemNotifications:(id)arg1 limit:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

