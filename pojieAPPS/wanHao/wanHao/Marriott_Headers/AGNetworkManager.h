//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AGConfig, AGProofProvider, AGStateBlock, AGStatusBlock;

@interface AGNetworkManager : NSObject
{
    AGConfig *_config;
    AGStateBlock *_stateblock;
    AGStatusBlock *_statusblock;
    AGProofProvider *_proofProvider;
}

@property(readonly, nonatomic) AGProofProvider *proofProvider; // @synthesize proofProvider=_proofProvider;
@property(retain) AGStatusBlock *statusblock; // @synthesize statusblock=_statusblock;
@property(retain) AGStateBlock *stateblock; // @synthesize stateblock=_stateblock;
@property(readonly, nonatomic) AGConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)resetAGState;
- (void)logMessage:(unsigned short)arg1;
- (void)logException:(id)arg1;
- (void)reauthenticate;
- (id)getHeaderWithRequestUrl:(id)arg1;
- (id)getHeaderWithRequestBody:(id)arg1 data:(id)arg2;
- (id)getXCbtExtension;
- (id)addXCbtExtension:(id)arg1;
- (void)parseTransformedResponseHeader:(int)arg1 headerValue:(id)arg2;
- (id)getTransformedRequestHeader:(unsigned long long)arg1 url:(id)arg2 data:(id)arg3;
- (void)transformResponse:(id)arg1;
- (void)startProofSequenceWithReauth;
- (void)transformRequest:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)initializeAGStateBlock;
- (id)init;

@end

