//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSF_NIMMessageObject-Protocol.h"
#import "YSF_NIMMessageObject_Private-Protocol.h"

@class NSString, YSF_NIMMessage;

@interface YSF_NIMAudioObject : NSObject <YSF_NIMMessageObject_Private, YSF_NIMMessageObject>
{
    YSF_NIMMessage *_message;
    NSString *_url;
    long long _duration;
    NSString *_fileName;
    NSString *_md5;
    long long _fileLength;
    NSString *_sourcePath;
}

@property(copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(nonatomic) long long fileLength; // @synthesize fileLength=_fileLength;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak YSF_NIMMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)uploadURL;
- (void)setUploadURL:(id)arg1;
- (id)fileParamForDownload;
- (_Bool)needUpload;
- (id)filepathForUpload;
- (id)prepareForDownLoad;
- (id)prepareForSend;
@property(readonly, copy, nonatomic) NSString *path;
- (void)decodeWithContent:(id)arg1;
- (id)encodeContent;
- (id)thumbText;
- (long long)type;
- (id)initWithSourcePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

