//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PNDomainLookup : NSObject
{
    int socket_client;
    struct sockaddr_in remote_addr;
}

+ (id)shareInstance;
- (void)lookupDomain:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
