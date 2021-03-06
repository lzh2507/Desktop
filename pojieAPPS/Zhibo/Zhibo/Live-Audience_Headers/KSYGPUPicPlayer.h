//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageOutput.h"

@class GLProgram, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface KSYGPUPicPlayer : GPUImageOutput
{
    GLProgram *passThroughProgram;
    unsigned int imgTexture;
    int inputImageTextureUniform;
    float cropTextureCoord[8];
    int positionAttribute;
    int coordinateAttribute;
    struct CGImage *_imageRef;
    struct CGSize _imageSize;
    struct CGRect _beginRegion;
    struct CGRect _endRegion;
    int _totalFrameNum;
    int _frameDisplayed;
    struct OpaqueCMTimebase *_clock;
    NSObject<OS_dispatch_queue> *_playQueue;
    _Bool _hasProcessedImage;
    NSObject<OS_dispatch_semaphore> *_imageUpdateSemaphore;
    float _fps;
    float _duration;
    unsigned long long _state;
    CDUnknownBlockType _stateChangeBlock;
    struct CGSize _outputSize;
}

@property(copy, nonatomic) CDUnknownBlockType stateChangeBlock; // @synthesize stateChangeBlock=_stateChangeBlock;
- (void).cxx_destruct;
- (void)removeAllTargets;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)displayImage;
- (_Bool)processImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateTargetsForFrame:(CDStruct_1b6d18a9)arg1;
- (void)drawImageOutput;
- (void)calculateCropTextureCoord:(double)arg1;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) float position;
@property(readonly, nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, nonatomic) float fps; // @synthesize fps=_fps;
@property(readonly, nonatomic) float duration; // @synthesize duration=_duration;
- (void)stop;
- (_Bool)seekTo:(float)arg1;
- (void)pause;
- (void)play;
- (void)playerStateChange:(unsigned long long)arg1;
- (void)setCropRegion:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
- (_Bool)checkCropRegionValid:(struct CGRect)arg1;
- (void)dealloc;
- (void)initImageTexture;
- (void)initPassThough;
- (void)initDefaultCropRect;
- (id)initWithImage:(id)arg1 parameters:(id)arg2;

@end

