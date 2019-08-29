//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface BVUploadablePhoto : NSObject
{
    UIImage *_photo;
    NSString *_photoCaption;
}

@property(retain) NSString *photoCaption; // @synthesize photoCaption=_photoCaption;
@property(retain) UIImage *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (id)getPasskey;
- (void)appendKey:(id)arg1 data:(id)arg2 toMultipartData:(id)arg3 withBoundary:(id)arg4;
- (void)appendKey:(id)arg1 value:(id)arg2 toMultipartData:(id)arg3 withBoundary:(id)arg4;
- (void)uploadForContentType:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)BVPhotoContentTypeToString:(long long)arg1;
- (id)initWithPhoto:(id)arg1 photoCaption:(id)arg2;

@end
