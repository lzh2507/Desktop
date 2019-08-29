//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSMutableDictionary, NSString, NSURLSession, NSURLSessionUploadTask, WAUploadFileProgressInfo;
@protocol WAUploadFileTaskDelegate;

@interface WAUploadFileTask : NSObject
{
    NSString *_appID;
    NSURLSession *_urlSession;
    NSString *_taskID;
    NSURLSessionUploadTask *_task;
    CDUnknownBlockType _completionHandler;
    NSMutableData *_responseData;
    _Bool _isRedirectInvalid;
    NSString *_url;
    NSMutableDictionary *_dicContext;
    _Bool _isIgnoreCheckDomain;
    id <WAUploadFileTaskDelegate> delegate;
    unsigned long long _lastUpdateProgressAbsoluteTime;
    WAUploadFileProgressInfo *_lastNotNotifyProgressInfo;
}

@property(retain) WAUploadFileProgressInfo *lastNotNotifyProgressInfo; // @synthesize lastNotNotifyProgressInfo=_lastNotNotifyProgressInfo;
@property unsigned long long lastUpdateProgressAbsoluteTime; // @synthesize lastUpdateProgressAbsoluteTime=_lastUpdateProgressAbsoluteTime;
@property(nonatomic) _Bool isIgnoreCheckDomain; // @synthesize isIgnoreCheckDomain=_isIgnoreCheckDomain;
@property __weak id <WAUploadFileTaskDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)reportTaskRecord:(id)arg1 url:(id)arg2 method:(id)arg3 statusCode:(unsigned int)arg4 result:(_Bool)arg5;
- (void)flushProgressNotifcation;
- (void)notifyProgressWithTotalBytesSent:(long long)arg1 totalBytesExpectedToSend:(long long)arg2;
- (void)taskDidEnd;
- (id)filePathFromLocalID:(id)arg1;
- (void)callCompletionHandlerWithError:(id)arg1 statusCode:(long long)arg2;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)markRedirectFail;
- (void)didRecevieData:(id)arg1;
- (void)didCompleteWithError:(id)arg1 statusCode:(long long)arg2;
- (id)task;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (void)anyThread_updateTotalBytesSent:(long long)arg1 totalBytesExpectedToSend:(long long)arg2;
- (void)anyThread_didReceiveResponse:(id)arg1;
- (void)anyThread_didSendoutRequest:(id)arg1;
- (void)startWithURL:(id)arg1 localID:(id)arg2 fileFieldName:(id)arg3 httpHeaders:(id)arg4 userAgent:(id)arg5 referer:(id)arg6 formFields:(id)arg7 context:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)getTaskID;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2 taskID:(id)arg3;

@end

