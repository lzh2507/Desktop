//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface YSF_NIMClientManager : NSObject
{
    NSMutableArray *_clients;
}

@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (void).cxx_destruct;
- (void)addClients:(id)arg1;
- (void)removeClients:(id)arg1;
- (void)onLoginOK;
- (void)removeClientsByDeviceId:(id)arg1;
- (void)onClientsChanged:(id)arg1 type:(long long)arg2;
- (id)currentClients;
- (id)init;

@end

