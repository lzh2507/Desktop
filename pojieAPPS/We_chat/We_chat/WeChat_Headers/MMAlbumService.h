//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "MMToastViewControllerDelegate-Protocol.h"

@class MMToastViewController, NSString;

@interface MMAlbumService : MMService <MMToastViewControllerDelegate, MMService>
{
    MMToastViewController *m_toastView;
}

- (void).cxx_destruct;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)showEnd;
- (void)showSaveResultTip:(id)arg1 andText:(id)arg2;
- (void)saveImageDataToAlbumAndShowTipsWithImageData:(id)arg1;
- (void)saveImageToAlbumAndShowTipsWithImage:(id)arg1;
- (void)saveImageToAlbumAndShowTipsWithPath:(id)arg1;
- (void)saveVideoToAlbumWithPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveImageToAlbumWithPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveVideoToAlbumAndShowTipsWithPath:(id)arg1;
- (void)writeImageToSavedPhotosAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)writeImageDataToSavedPhotosAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isAlbumAcessGranted;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

