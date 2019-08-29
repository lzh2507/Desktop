//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CDAudioInterruptProtocol-Protocol.h"

@class NSString;

@interface CDSoundEngine : NSObject <CDAudioInterruptProtocol>
{
    struct _bufferInfo {
        unsigned int _field1;
        int _field2;
        void *_field3;
        int _field4;
        int _field5;
        int _field6;
    } *_buffers;
    struct _sourceInfo {
        _Bool _field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_sources;
    struct _sourceGroup {
        int _field1;
        int _field2;
        int _field3;
        _Bool _field4;
        _Bool _field5;
        int *_field6;
    } *_sourceGroups;
    struct ALCcontext_struct *context;
    unsigned long long _sourceGroupTotal;
    unsigned int _audioSessionCategory;
    _Bool _handleAudioSession;
    float _preMuteGain;
    NSObject *_mutexBufferLoad;
    _Bool mute_;
    _Bool enabled_;
    int lastErrorCode_;
    _Bool functioning_;
    float asynchLoadProgress_;
    _Bool getGainWorks_;
    int sourceTotal_;
    int bufferTotal;
}

+ (void)setMixerSampleRate:(float)arg1;
@property(readonly) int sourceTotal; // @synthesize sourceTotal=sourceTotal_;
@property(readonly) _Bool getGainWorks; // @synthesize getGainWorks=getGainWorks_;
@property float asynchLoadProgress; // @synthesize asynchLoadProgress=asynchLoadProgress_;
@property(readonly) _Bool functioning; // @synthesize functioning=functioning_;
@property(readonly) int lastErrorCode; // @synthesize lastErrorCode=lastErrorCode_;
- (void)_dumpSourceGroupsInfo;
- (struct ALCcontext_struct *)openALContext;
- (void)setEffectVolume:(unsigned int)arg1 volume:(float)arg2;
- (_Bool)sourceGroupEnabled:(int)arg1;
- (void)setSourceGroupEnabled:(int)arg1 enabled:(_Bool)arg2;
- (void)setSourceGroupNonInterruptible:(int)arg1 isNonInterruptible:(_Bool)arg2;
- (void)resumeAllSounds;
- (void)resumeSound:(unsigned int)arg1;
- (void)pauseAllSounds;
- (void)pauseSound:(unsigned int)arg1;
- (void)stopAllSounds;
- (void)stopSound:(unsigned int)arg1;
- (void)stopSourceGroup:(int)arg1;
- (void)_soundSourcePreRelease:(id)arg1;
- (id)soundSourceForSound:(int)arg1 sourceGroupId:(int)arg2;
- (_Bool)_soundSourceAttachToBuffer:(id)arg1 soundId:(int)arg2;
- (unsigned int)playSound:(int)arg1 sourceGroupId:(int)arg2 pitch:(float)arg3 pan:(float)arg4 gain:(float)arg5 loop:(_Bool)arg6;
- (int)_getSourceIndexForSourceGroup:(int)arg1;
- (void)_lockSource:(int)arg1 lock:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)enabled;
- (void)setMute:(_Bool)arg1;
- (_Bool)mute;
@property(nonatomic) float masterGain;
- (int)bufferFrequencyInHertz:(int)arg1;
- (int)bufferSizeInBytes:(int)arg1;
- (float)bufferDurationInSeconds:(int)arg1;
- (_Bool)validateBufferId:(int)arg1;
- (_Bool)loadBuffer:(int)arg1 filePath:(id)arg2;
- (_Bool)loadBufferFromData:(int)arg1 soundData:(void *)arg2 format:(int)arg3 size:(int)arg4 freq:(int)arg5;
- (_Bool)_resizeBuffers:(int)arg1;
- (void)loadBuffersAsynchronously:(id)arg1;
- (_Bool)unloadBuffer:(int)arg1;
- (id)init;
- (void)defineSourceGroups:(id)arg1;
- (void)defineSourceGroups:(int *)arg1 total:(unsigned long long)arg2;
- (_Bool)_setUpSourceGroups:(int *)arg1 total:(unsigned long long)arg2;
- (_Bool)_redefineSourceGroups:(int *)arg1 total:(unsigned long long)arg2;
- (void)_freeSourceGroups;
@property(readonly) unsigned long long sourceGroupTotal;
- (void)dealloc;
- (_Bool)_initOpenAL;
- (void)_generateBuffers:(int)arg1 endIndex:(int)arg2;
- (void)_generateSources;
- (void)_testGetGain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

