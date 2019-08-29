//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYActiveSkinModel;

@interface IMYActiveSkinHelper : NSObject
{
    _Bool _isUsed;
    IMYActiveSkinModel *_currentSkinModel;
}

+ (id)defaultHelper;
@property(nonatomic) _Bool isUsed; // @synthesize isUsed=_isUsed;
@property(retain, nonatomic) IMYActiveSkinModel *currentSkinModel; // @synthesize currentSkinModel=_currentSkinModel;
- (void).cxx_destruct;
- (id)themeDocument;
- (id)fileDocument;
- (void)checkSkin;
- (void)downloadSkip;
- (_Bool)isSkinDownload;
- (void)getSkinInfo;
- (void)setup;
- (_Bool)isDefaultTheme;
- (_Bool)stopNewSkin;
- (_Bool)userNewSkin;
- (_Bool)isValid;
- (void)checkNewSkin;

@end
