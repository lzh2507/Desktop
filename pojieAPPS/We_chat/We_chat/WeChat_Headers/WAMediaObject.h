//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface WAMediaObject : NSObject
{
    unsigned long long _mediaType;
    NSString *_mediaUrl;
    UIView *_thumbImageView;
    struct CGRect _visibleOriginFrame;
}

@property(retain, nonatomic) UIView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) struct CGRect visibleOriginFrame; // @synthesize visibleOriginFrame=_visibleOriginFrame;
@property(retain, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;

@end

