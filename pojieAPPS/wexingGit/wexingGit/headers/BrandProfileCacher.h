//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BrandProfileCacher : NSObject
{
}

+ (id)brandProfileCachesDirectory;
+ (id)md5FromString:(id)arg1;
+ (id)brandProfilePathForBrand:(id)arg1;
+ (_Bool)writeProfileCacheItem:(id)arg1 forBrand:(id)arg2;
+ (id)readProfileCacheItemForBrand:(id)arg1;

@end

