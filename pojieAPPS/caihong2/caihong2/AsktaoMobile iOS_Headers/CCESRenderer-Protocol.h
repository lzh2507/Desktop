//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CAEAGLLayer, EAGLContext, EAGLSharegroup;

@protocol CCESRenderer <NSObject>
- (unsigned int)msaaColorBuffer;
- (unsigned int)msaaFrameBuffer;
- (unsigned int)defaultFrameBuffer;
- (unsigned int)colorRenderBuffer;
- (struct CGSize)backingSize;
- (EAGLContext *)context;
- (_Bool)resizeFromLayer:(CAEAGLLayer *)arg1;
- (id)initWithDepthFormat:(unsigned int)arg1 withPixelFormat:(unsigned int)arg2 withSharegroup:(EAGLSharegroup *)arg3 withMultiSampling:(_Bool)arg4 withNumberOfSamples:(unsigned int)arg5;
@end

