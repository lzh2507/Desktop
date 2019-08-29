//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "WCCanvasImageLoaderObserver-Protocol.h"

@class NSString;

@interface WCCanvasDownloadMgr : MMService <WCCanvasImageLoaderObserver, IMsgExt, MMService>
{
}

- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)md5ForURL:(id)arg1;
- (_Bool)isFirstImageHasDownloaded:(id)arg1;
- (_Bool)isImageHasDownloaded:(id)arg1;
- (id)getComponentImageUrl:(id)arg1;
- (id)getFirstImageUrl:(id)arg1;
- (void)preDownloadSight:(id)arg1 atScene:(unsigned int)arg2 withDownloadOutside:(_Bool)arg3;
- (void)preDownloadImage:(id)arg1 atScene:(unsigned int)arg2 withDownloadOutside:(_Bool)arg3;
- (_Bool)tryToDownloadComponetResrc:(id)arg1 atScene:(unsigned int)arg2 withDownloadOutSide:(_Bool)arg3;
- (void)preDownloadSphereCardResource:(id)arg1;
- (void)tryToDownloadFloatComponentList:(id)arg1 atScene:(unsigned int)arg2 withDownloadOutSide:(_Bool)arg3;
- (void)tryToDownloadComponetList:(id)arg1 atScene:(unsigned int)arg2 withDownloadOutSide:(_Bool)arg3;
- (void)preDownloadCanvasAdResource:(id)arg1;
- (void)tryToDownloadTopNumComponetResrc:(id)arg1 topNum:(unsigned long long)arg2 atScene:(unsigned int)arg3 withDownloadOutSide:(_Bool)arg4;
- (unsigned long long)getResourceCountOfCanvasPage:(id)arg1;
- (id)imageForURL:(id)arg1 LoadOnMainThread:(_Bool)arg2;
- (void)tryToDownloadCanvasAdOutSideIcon:(id)arg1;
- (unsigned long long)getResourceCountOfTopPageCount:(unsigned long long)arg1 canvasInfo:(id)arg2;
- (void)tryToPredownloadResourceWhenRecieveCanvasShareFeed:(id)arg1 atScene:(unsigned int)arg2;
- (void)tryToDownloadCanvasAdResourceWithBeginPage:(unsigned long long)arg1 EndPage:(unsigned long long)arg2 CanvasInfo:(id)arg3 atScene:(unsigned int)arg4;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

