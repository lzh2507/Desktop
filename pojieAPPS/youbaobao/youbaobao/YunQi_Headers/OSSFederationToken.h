//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OSSFederationToken : NSObject
{
    NSString *_tAccessKey;
    NSString *_tSecretKey;
    NSString *_tToken;
    long long _expirationTimeInMilliSecond;
    NSString *_expirationTimeInGMTFormat;
}

@property(retain) NSString *expirationTimeInGMTFormat; // @synthesize expirationTimeInGMTFormat=_expirationTimeInGMTFormat;
@property long long expirationTimeInMilliSecond; // @synthesize expirationTimeInMilliSecond=_expirationTimeInMilliSecond;
@property(copy, nonatomic) NSString *tToken; // @synthesize tToken=_tToken;
@property(copy, nonatomic) NSString *tSecretKey; // @synthesize tSecretKey=_tSecretKey;
@property(copy, nonatomic) NSString *tAccessKey; // @synthesize tAccessKey=_tAccessKey;
- (void).cxx_destruct;
- (id)description;

@end
