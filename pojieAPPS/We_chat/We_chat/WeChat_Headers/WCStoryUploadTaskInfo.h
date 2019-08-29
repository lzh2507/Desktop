//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface WCStoryUploadTaskInfo : NSObject <PBCoding>
{
    _Bool isRetrying;
    _Bool bCgiPosting;
    _Bool isSelectFromAlbum;
    _Bool startCndUpload;
    unsigned int retryCount;
    unsigned int enterQueueTime;
    unsigned int startUploadTime;
    unsigned int firstFailTime;
    unsigned int lastFailTime;
    unsigned int createTime;
    int retCode;
    unsigned int finishUploadTime;
    unsigned int audioChannelsPerFrame;
    int _cgiRetCode;
    NSString *tid;
    NSString *clientId;
    NSString *localInfo;
    double duration;
    NSString *videoUrl;
    NSString *md5;
    NSString *videoMd5;
    NSString *thumbUrl;
    NSData *localInfoBuf;
    long long errorType;
    long long totalsize;
    NSString *reportXml;
    NSString *originVideoArgs;
    NSString *exportVideoPath;
    unsigned long long scope;
    NSString *_videoPath;
    NSString *_thumbPath;
    NSString *_thumbMd5;
    NSString *_fileId;
    NSString *_nsCdnStatInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *nsCdnStatInfo; // @synthesize nsCdnStatInfo=_nsCdnStatInfo;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSString *thumbMd5; // @synthesize thumbMd5=_thumbMd5;
@property(nonatomic) int cgiRetCode; // @synthesize cgiRetCode=_cgiRetCode;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) _Bool startCndUpload; // @synthesize startCndUpload;
@property(nonatomic) unsigned long long scope; // @synthesize scope;
@property(nonatomic) unsigned int audioChannelsPerFrame; // @synthesize audioChannelsPerFrame;
@property(nonatomic) _Bool isSelectFromAlbum; // @synthesize isSelectFromAlbum;
@property(retain, nonatomic) NSString *exportVideoPath; // @synthesize exportVideoPath;
@property(retain, nonatomic) NSString *originVideoArgs; // @synthesize originVideoArgs;
@property(nonatomic) unsigned int finishUploadTime; // @synthesize finishUploadTime;
@property(nonatomic) int retCode; // @synthesize retCode;
@property(retain, nonatomic) NSString *reportXml; // @synthesize reportXml;
@property(nonatomic) long long totalsize; // @synthesize totalsize;
@property(nonatomic) long long errorType; // @synthesize errorType;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSData *localInfoBuf; // @synthesize localInfoBuf;
@property(nonatomic) _Bool bCgiPosting; // @synthesize bCgiPosting;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSString *videoMd5; // @synthesize videoMd5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl;
@property(nonatomic) unsigned int lastFailTime; // @synthesize lastFailTime;
@property(nonatomic) unsigned int firstFailTime; // @synthesize firstFailTime;
@property(nonatomic) unsigned int startUploadTime; // @synthesize startUploadTime;
@property(nonatomic) unsigned int enterQueueTime; // @synthesize enterQueueTime;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount;
@property(nonatomic) _Bool isRetrying; // @synthesize isRetrying;
@property(nonatomic) double duration; // @synthesize duration;
@property(retain, nonatomic) NSString *localInfo; // @synthesize localInfo;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
- (void).cxx_destruct;
- (_Bool)isStartUpload;
@property(readonly, copy) NSString *description;
- (_Bool)isRetryTimeout;
- (id)getCDNReportInfo;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

