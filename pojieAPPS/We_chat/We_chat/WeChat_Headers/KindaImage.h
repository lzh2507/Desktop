//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKImage-Protocol.h"

@class NSString, UIImage;

@interface KindaImage : NSObject <MMKImage>
{
    UIImage *m_image;
    NSString *m_imageUrl;
}

- (void).cxx_destruct;
- (id)getImage;
- (void)stretchImage:(float)arg1 topCap:(float)arg2;
- (float)getHeight;
- (float)getWidth;
- (id)getUrl;
- (void)setSvgUrl:(id)arg1 color:(id)arg2;
- (void)setUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

