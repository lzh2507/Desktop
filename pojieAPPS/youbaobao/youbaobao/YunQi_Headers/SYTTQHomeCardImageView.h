//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SYTTQHomeCardImageView : UIView
{
    NSArray *_imageViews;
    NSArray *_images;
    long long _img_type;
}

+ (struct CGSize)imageViewSize:(unsigned long long)arg1;
@property(nonatomic) long long img_type; // @synthesize img_type=_img_type;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
- (void).cxx_destruct;
- (id)init;

@end
