//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CompareToVersion)
- (_Bool)needsToUpdateToVersion:(id)arg1 MainVersionIntegerCount:(int)arg2;
- (id)getMainVersionWithIntegerCount:(int)arg1;
- (_Bool)isEqualOrNewerThanVersion:(id)arg1;
- (_Bool)isEqualOrOlderThanVersion:(id)arg1;
- (_Bool)isEqualToVersion:(id)arg1;
- (_Bool)isNewerThanVersion:(id)arg1;
- (_Bool)isOlderThanVersion:(id)arg1;
- (long long)compareToVersion:(id)arg1;
@end
