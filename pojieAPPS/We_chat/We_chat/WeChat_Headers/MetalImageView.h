//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MetalImageInput-Protocol.h"

@class MTLRenderPassDescriptor, MetalImageTexture, NSString;
@protocol MTLBuffer, MTLDepthStencilState, MTLRenderPipelineState;

@interface MetalImageView : UIView <MetalImageInput>
{
    MetalImageTexture *firstInputTexture;
    unsigned long long inputRotationMode;
    struct MTLFloat4 imageScalingVertics[4];
    struct MTLUInt2 inputImageSize;
    unsigned long long _fillMode;
    id <MTLBuffer> _verticsBuffer;
    id <MTLBuffer> _coordBuffer;
    id <MTLRenderPipelineState> _pipelineState;
    id <MTLDepthStencilState> _depthStencilState;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    CDStruct_3ead2808 _bgClearColor;
}

+ (Class)layerClass;
@property(retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor; // @synthesize renderPassDescriptor=_renderPassDescriptor;
@property(retain, nonatomic) id <MTLDepthStencilState> depthStencilState; // @synthesize depthStencilState=_depthStencilState;
@property(retain, nonatomic) id <MTLRenderPipelineState> pipelineState; // @synthesize pipelineState=_pipelineState;
@property(retain, nonatomic) id <MTLBuffer> coordBuffer; // @synthesize coordBuffer=_coordBuffer;
@property(retain, nonatomic) id <MTLBuffer> verticsBuffer; // @synthesize verticsBuffer=_verticsBuffer;
@property(nonatomic) CDStruct_3ead2808 bgClearColor; // @synthesize bgClearColor=_bgClearColor;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
- (void).cxx_destruct;
- (void)newTextureReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setInputTexture:(id)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)updateInputImageSize;
- (void)fillTextureVerticsWithWidthScaling:(double)arg1 heightScaling:(double)arg2;
- (void)updateViewGeometry;
- (_Bool)prepareRenderPassDescriptor;
- (_Bool)prepareRenderDepthStencilState;
- (_Bool)prepareRenderPipeline;
- (void)updateTextureCoordinates;
- (void)updateTextureVertics;
- (void)tearDown;
- (void)buildUp;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

