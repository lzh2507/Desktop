//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

@interface WAWebViewPlugin_OpenVoice : WAWebViewPlugin_embedView
{
}

- (void)removeView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)insertView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onStopRecord;
- (void)onStartRecord;
- (void)dealloc;
- (id)init;

@end

