//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol TXIAudioRecordDelegate <NSObject>

@optional
- (void)onRecordError:(long long)arg1 info:(NSString *)arg2;
- (void)onRecordEncData:(NSData *)arg1 timestamp:(unsigned long long)arg2;
- (void)onRecordSpeedPcmData:(char *)arg1 dataLen:(unsigned int)arg2 timestamp:(unsigned long long)arg3;
- (void)onRecordPcmData:(char *)arg1 dataLen:(unsigned int)arg2 timestamp:(unsigned long long)arg3 sampleRate:(int)arg4 channels:(int)arg5;
@end

