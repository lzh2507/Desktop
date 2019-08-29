//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TXCUploadParams : NSObject
{
    int _retCode;
    NSString *_cosRegion;
    NSString *_logKey;
    NSString *_cosSign;
    NSString *_cosBucket;
    NSString *_cosPath;
    NSString *_cosAppId;
    NSString *_cosUrl;
    NSString *_errMsg;
    NSString *_zipPath;
    NSString *_logFiles;
    NSString *_logUserIds;
    NSArray *_logRecords;
}

@property(retain) NSArray *logRecords; // @synthesize logRecords=_logRecords;
@property(retain) NSString *logUserIds; // @synthesize logUserIds=_logUserIds;
@property(retain) NSString *logFiles; // @synthesize logFiles=_logFiles;
@property(retain) NSString *zipPath; // @synthesize zipPath=_zipPath;
@property(retain) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property int retCode; // @synthesize retCode=_retCode;
@property(retain) NSString *cosUrl; // @synthesize cosUrl=_cosUrl;
@property(retain) NSString *cosAppId; // @synthesize cosAppId=_cosAppId;
@property(retain) NSString *cosPath; // @synthesize cosPath=_cosPath;
@property(retain) NSString *cosBucket; // @synthesize cosBucket=_cosBucket;
@property(retain) NSString *cosSign; // @synthesize cosSign=_cosSign;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) NSString *cosRegion; // @synthesize cosRegion=_cosRegion;
- (void).cxx_destruct;
- (id)init;

@end

