//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (IMYFoundation)
+ (id)imy_gunzippedData:(id)arg1;
+ (id)imy_gzipData:(id)arg1;
+ (_Bool)imy_isGzipData:(id)arg1;
+ (id)imy_decryptedData:(id)arg1 aes128Key:(id)arg2 iv:(id)arg3;
+ (id)imy_encryptData:(id)arg1 aes128Key:(id)arg2 iv:(id)arg3;
- (id)imy_md5;
- (id)imy_sha1;
@end
