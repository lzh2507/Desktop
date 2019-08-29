//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioRecorderDelegate-Protocol.h"

@class AVAudioRecorder, NSString;

@interface RecordHelper : NSObject <AVAudioRecorderDelegate>
{
    AVAudioRecorder *_audioRecorder;
    NSString *_filePath;
    long long _simpleRate;
    long long _quality;
    NSString *_callback;
}

+ (int)getDuration:(id)arg1;
+ (id)getSavePath:(id)arg1;
+ (void)endRecord;
+ (void)beginRecord:(id)arg1;
+ (_Bool)isRecording;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *callback; // @synthesize callback=_callback;
@property long long quality; // @synthesize quality=_quality;
@property long long simpleRate; // @synthesize simpleRate=_simpleRate;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) AVAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)toMp3;
- (void)beginRecordWithFilePath:(id)arg1 simpleRate:(long long)arg2 quality:(long long)arg3 callback:(id)arg4;
- (id)getSaveUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

