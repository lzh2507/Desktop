//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TXIModule-Protocol.h"

@class CAEAGLLayer, CALayer, EAGLContext, NSString, TXCModule, TXCameraFocusSquare, UIPinchGestureRecognizer, UITapGestureRecognizer;
@protocol TXINotifyDelegate, TXIRenderViewDelegate;

@interface TXCRenderView : UIView <TXIModule>
{
    unsigned long long _lastCalculateTS;
    unsigned long long _lastRenderFrameCount;
    unsigned long long _renderFrameCount;
    unsigned long long _lastRenderTS;
    unsigned long long _blockCount500MS;
    unsigned long long _blockCount1000MS;
    unsigned long long _totalBlockDuration;
    unsigned long long _maxBlockDuration;
    unsigned long long _lastBlockDuration;
    unsigned long long _blockCountInPeriod;
    unsigned long long _lastStatisticsTS;
    unsigned long long _blockTimeMsInPeriod;
    unsigned long long _startRenderTS;
    _Bool _isInBackground;
    _Bool _isInitOpenglParam;
    long long _format;
    struct CGSize _bufSize;
    struct CGRect _frameRect;
    float _imageVertices[8];
    const float *_preferredConversion;
    const float *_preferredOffsetVec3;
    struct CGRect _frame;
    CALayer *_layer;
    unsigned int _realFPS;
    UITapGestureRecognizer *_tapGestureRecognizer;
    TXCameraFocusSquare *_focusSquare;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    _Bool _sharedContextUsed;
    TXCModule *_module;
    _Bool _rendering;
    struct opaqueCMSampleBuffer *_sampleBufferToRender;
    unsigned long long _busyCount;
    _Bool _mirror;
    _Bool _renderable;
    _Bool _focusable;
    int _videoBlockThreshold;
    int _streamType;
    int _blockIntervalMs;
    unsigned int _renderBuffer;
    unsigned int _frameBuffer;
    unsigned int _yuvYTexture;
    unsigned int _yuvUTexture;
    unsigned int _yuvVTexture;
    unsigned int _vertexShader;
    unsigned int _fragmentShader;
    unsigned int _programHandle;
    unsigned int _positionSlot;
    unsigned int _texCoordSlot;
    unsigned int _yuvTypeUniform;
    unsigned int _textureUniformY;
    unsigned int _textureUniformU;
    unsigned int _textureUniformV;
    unsigned int _yuvConversionMatrixUniform;
    unsigned int _yuvOffsetMatrixUniform;
    unsigned int _mRawDataFrameType;
    id <TXIRenderViewDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    long long _renderMode;
    long long _rotation;
    CDUnknownBlockType _layoutSubviewCallBack;
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_curContext;
    CDUnknownBlockType _snapshotCompletionBlock;
}

+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
+ (Class)layerClass;
@property(nonatomic) unsigned int mRawDataFrameType; // @synthesize mRawDataFrameType=_mRawDataFrameType;
@property(copy) CDUnknownBlockType snapshotCompletionBlock; // @synthesize snapshotCompletionBlock=_snapshotCompletionBlock;
@property(nonatomic) unsigned int yuvOffsetMatrixUniform; // @synthesize yuvOffsetMatrixUniform=_yuvOffsetMatrixUniform;
@property(nonatomic) unsigned int yuvConversionMatrixUniform; // @synthesize yuvConversionMatrixUniform=_yuvConversionMatrixUniform;
@property(nonatomic) unsigned int textureUniformV; // @synthesize textureUniformV=_textureUniformV;
@property(nonatomic) unsigned int textureUniformU; // @synthesize textureUniformU=_textureUniformU;
@property(nonatomic) unsigned int textureUniformY; // @synthesize textureUniformY=_textureUniformY;
@property(nonatomic) unsigned int yuvTypeUniform; // @synthesize yuvTypeUniform=_yuvTypeUniform;
@property(nonatomic) unsigned int texCoordSlot; // @synthesize texCoordSlot=_texCoordSlot;
@property(nonatomic) unsigned int positionSlot; // @synthesize positionSlot=_positionSlot;
@property(nonatomic) unsigned int programHandle; // @synthesize programHandle=_programHandle;
@property(nonatomic) unsigned int fragmentShader; // @synthesize fragmentShader=_fragmentShader;
@property(nonatomic) unsigned int vertexShader; // @synthesize vertexShader=_vertexShader;
@property(nonatomic) unsigned int yuvVTexture; // @synthesize yuvVTexture=_yuvVTexture;
@property(nonatomic) unsigned int yuvUTexture; // @synthesize yuvUTexture=_yuvUTexture;
@property(nonatomic) unsigned int yuvYTexture; // @synthesize yuvYTexture=_yuvYTexture;
@property(nonatomic) unsigned int frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(nonatomic) unsigned int renderBuffer; // @synthesize renderBuffer=_renderBuffer;
@property(retain, nonatomic) EAGLContext *curContext; // @synthesize curContext=_curContext;
@property(retain, nonatomic) CAEAGLLayer *eaglLayer; // @synthesize eaglLayer=_eaglLayer;
@property(readonly, nonatomic) unsigned long long lastBlockDuration; // @synthesize lastBlockDuration=_lastBlockDuration;
@property(readonly, nonatomic) struct CGSize bufSize; // @synthesize bufSize=_bufSize;
@property(nonatomic) int blockIntervalMs; // @synthesize blockIntervalMs=_blockIntervalMs;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(nonatomic) int videoBlockThreshold; // @synthesize videoBlockThreshold=_videoBlockThreshold;
@property(nonatomic) _Bool focusable; // @synthesize focusable=_focusable;
@property(copy, nonatomic) CDUnknownBlockType layoutSubviewCallBack; // @synthesize layoutSubviewCallBack=_layoutSubviewCallBack;
@property(nonatomic) _Bool renderable; // @synthesize renderable=_renderable;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) __weak id <TXIRenderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)renderImageFrom:(struct opaqueCMSampleBuffer *)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)snapshotFromVFrame:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (unsigned long long)calculateRotation;
- (void)calculateVertices;
- (void)resetStats;
- (void)updateRenderFPS;
- (void)statisticFrame:(_Bool)arg1;
- (void)convertYUVToRGBOutput;
- (void)innerRenderTexture:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)renderTexture:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)renderVFrame:(id)arg1;
- (void)innerRenderFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)_renderFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)renderFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)innerRenderFrame:(char *)arg1 format:(long long)arg2 width:(long long)arg3 height:(long long)arg4;
- (void)innerRenderFrame:(char *)arg1 u:(char *)arg2 v:(char *)arg3 format:(long long)arg4 width:(int)arg5 height:(int)arg6;
- (void)renderFrame:(char *)arg1 format:(long long)arg2 width:(long long)arg3 height:(long long)arg4;
- (void)compileShaders;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)deleteTexture;
- (void)recreateDisplayFramebuffer;
- (void)setupTexture;
- (void)setupFrameBuffer;
- (void)setupRenderBuffer;
- (void)setupLayer;
- (id)stringValueForKey:(int)arg1 Key2:(unsigned short)arg2;
- (id)stringValueForKey:(int)arg1;
- (double)doubleValueForKey:(int)arg1 Key2:(unsigned short)arg2;
- (double)doubleValueForKey:(int)arg1;
- (long long)intValueForKey:(int)arg1 Key2:(unsigned short)arg2;
- (long long)intValueForKey:(int)arg1;
- (_Bool)setStatusValue:(id)arg1 forKey:(int)arg2 Key2:(unsigned short)arg3;
- (_Bool)setStatusValue:(id)arg1 forKey:(int)arg2;
- (id)getID;
- (void)clearID;
- (void)setID:(id)arg1;
- (void)dealloc;
- (id)sharedContext;
- (void)setup;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)deallocFocusView;
- (void)initFocusView;
- (void)handlePinch:(id)arg1;
- (void)focusTap:(id)arg1;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)sendNotifyEvent:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

