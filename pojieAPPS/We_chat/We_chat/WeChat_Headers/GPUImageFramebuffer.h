//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GPUImageFramebuffer : NSObject
{
    unsigned int framebuffer;
    unsigned int _depthbuffer;
    struct __CVBuffer *renderTarget;
    struct __CVBuffer *renderTexture;
    unsigned long long readLockCount;
    unsigned long long framebufferReferenceCount;
    _Bool referenceCountingDisabled;
    _Bool _missingFramebuffer;
    unsigned int _texture;
    struct CGSize _size;
    GPUTextureOptions_1d06aea2 _textureOptions;
}

+ (id)imageFrameBufferWithImage:(struct CGImage *)arg1 error:(id *)arg2;
+ (id)imageFrameBufferWithImage:(struct CGImage *)arg1;
@property(readonly) _Bool missingFramebuffer; // @synthesize missingFramebuffer=_missingFramebuffer;
@property(readonly) GPUTextureOptions_e60a86bd textureOptions; // @synthesize textureOptions=_textureOptions;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) unsigned int texture; // @synthesize texture=_texture;
- (struct __CVBuffer *)pixelBuffer;
- (char *)byteBuffer;
- (unsigned long long)bytesPerRow;
- (void)unlockAfterReading;
- (void)lockForReading;
- (void)restoreRenderTarget;
- (struct CGImage *)newCGImageFromFramebufferContentsExt;
- (struct CGImage *)newCGImageFromFramebufferContents;
- (void)enableReferenceCounting;
- (void)disableReferenceCounting;
- (void)clearAllLocks;
- (void)unlock;
- (void)lock;
- (void)activateFramebuffer;
- (void)destroyFramebuffer;
- (void)generateFramebuffer;
- (void)generateDepthBuffer:(struct CGSize)arg1;
- (void)generateTexture;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 overriddenTexture:(unsigned int)arg2;
- (id)initWithSize:(struct CGSize)arg1 textureOptions:(GPUTextureOptions_e60a86bd)arg2 onlyTexture:(_Bool)arg3;

@end

