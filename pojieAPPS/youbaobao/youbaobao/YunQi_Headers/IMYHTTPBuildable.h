//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYHTTPBuildable-Protocol.h"

@class IMYSecurityPolicy, NSDictionary, NSString, NSURLRequest, RACSignal;
@protocol OS_dispatch_queue;

@interface IMYHTTPBuildable : NSObject <IMYHTTPBuildable>
{
    _Bool _gzipEncoding;
    _Bool _removeAllNSNull;
    long long _method;
    NSString *_path;
    NSString *_host;
    id _parameters;
    NSDictionary *_headers;
    NSDictionary *_userInfo;
    CDUnknownBlockType _headersHook;
    CDUnknownBlockType _queriesHook;
    CDUnknownBlockType _didFailHook;
    CDUnknownBlockType _didSuccessHook;
    CDUnknownBlockType _acceptableContentTypesHook;
    CDUnknownBlockType _gzipEncodingHook;
    CDUnknownBlockType _willRequestHook;
    long long _requestSerializerType;
    long long _responseSerializerType;
    NSDictionary *_urlQueries;
    CDUnknownBlockType _formDataBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _encryptBlock;
    long long _cacheType;
    NSObject<OS_dispatch_queue> *_completionQueue;
    IMYSecurityPolicy *_securityPolicy;
    long long _priority;
    double _timeout;
    NSURLRequest *_userRequest;
}

+ (id)urlString:(id)arg1 appendingURLQueries:(id)arg2;
+ (id)urlStringWithBuilder:(id)arg1 queriesHook:(CDUnknownBlockType)arg2;
+ (void)setupSessionManager:(id)arg1 builder:(id)arg2 baseURL:(id)arg3 urlString:(id)arg4;
+ (void)setSessionResponseSerializer:(id)arg1 builder:(id)arg2;
+ (void)setSessionRequestSerializer:(id)arg1 builder:(id)arg2 baseURL:(id)arg3 urlString:(id)arg4;
+ (id)createSessionManagerWithBuilder:(id)arg1 baseURL:(id)arg2 urlString:(id)arg3 manager:(id)arg4;
+ (id)req_dataTaskWithBuilder:(id)arg1 manager:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)dataTaskWithBuilder:(id)arg1 urlString:(id)arg2 manager:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)racWithHttpBuilder:(id)arg1 manager:(id)arg2;
@property(retain, nonatomic) NSURLRequest *userRequest; // @synthesize userRequest=_userRequest;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool removeAllNSNull; // @synthesize removeAllNSNull=_removeAllNSNull;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool gzipEncoding; // @synthesize gzipEncoding=_gzipEncoding;
@property(retain, nonatomic) IMYSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(nonatomic) long long cacheType; // @synthesize cacheType=_cacheType;
@property(copy, nonatomic) CDUnknownBlockType encryptBlock; // @synthesize encryptBlock=_encryptBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType formDataBlock; // @synthesize formDataBlock=_formDataBlock;
@property(retain, nonatomic) NSDictionary *urlQueries; // @synthesize urlQueries=_urlQueries;
@property(nonatomic) long long responseSerializerType; // @synthesize responseSerializerType=_responseSerializerType;
@property(nonatomic) long long requestSerializerType; // @synthesize requestSerializerType=_requestSerializerType;
@property(copy, nonatomic) CDUnknownBlockType willRequestHook; // @synthesize willRequestHook=_willRequestHook;
@property(copy, nonatomic) CDUnknownBlockType gzipEncodingHook; // @synthesize gzipEncodingHook=_gzipEncodingHook;
@property(copy, nonatomic) CDUnknownBlockType acceptableContentTypesHook; // @synthesize acceptableContentTypesHook=_acceptableContentTypesHook;
@property(copy, nonatomic) CDUnknownBlockType didSuccessHook; // @synthesize didSuccessHook=_didSuccessHook;
@property(copy, nonatomic) CDUnknownBlockType didFailHook; // @synthesize didFailHook=_didFailHook;
@property(copy, nonatomic) CDUnknownBlockType queriesHook; // @synthesize queriesHook=_queriesHook;
@property(copy, nonatomic) CDUnknownBlockType headersHook; // @synthesize headersHook=_headersHook;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) id parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) long long method; // @synthesize method=_method;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType REMOVEALLNSNULL;
@property(readonly, nonatomic) CDUnknownBlockType PRIORITY;
@property(readonly, nonatomic) CDUnknownBlockType GZIP;
@property(readonly, nonatomic) CDUnknownBlockType USERINFO;
@property(readonly, nonatomic) CDUnknownBlockType SECURITYPOLICY;
@property(readonly, nonatomic) CDUnknownBlockType COMPLETIONQUEUE;
@property(readonly, nonatomic) CDUnknownBlockType CACHETYPE;
@property(readonly, nonatomic) CDUnknownBlockType ENCRYPTION;
@property(readonly, nonatomic) CDUnknownBlockType PROGRESS;
@property(readonly, nonatomic) CDUnknownBlockType PATCH;
@property(readonly, nonatomic) CDUnknownBlockType HEAD;
@property(readonly, nonatomic) CDUnknownBlockType DELETE;
@property(readonly, nonatomic) CDUnknownBlockType PUT;
@property(readonly, nonatomic) CDUnknownBlockType POST;
@property(readonly, nonatomic) CDUnknownBlockType GET;
@property(readonly, nonatomic) CDUnknownBlockType FORMDATA;
@property(readonly, nonatomic) CDUnknownBlockType URLQUERIES;
@property(readonly, nonatomic) CDUnknownBlockType HEADERS;
@property(readonly, nonatomic) CDUnknownBlockType METHOD;
@property(readonly, nonatomic) CDUnknownBlockType RESPONSESERIALIZERTYPE;
@property(readonly, nonatomic) CDUnknownBlockType REQUESTSERIALIZERTYPE;
@property(readonly, nonatomic) CDUnknownBlockType PARAMETERS;
@property(readonly, nonatomic) CDUnknownBlockType HOST;
@property(readonly, nonatomic) CDUnknownBlockType PATH;
@property(readonly, nonatomic) CDUnknownBlockType Request;
@property(readonly, nonatomic) RACSignal *signal;
@property(readonly, nonatomic) CDUnknownBlockType Timeout;
@property(readonly, nonatomic) CDUnknownBlockType RemoveAllNSNull;
@property(readonly, nonatomic) CDUnknownBlockType Priority;
@property(readonly, nonatomic) CDUnknownBlockType GZip;
@property(readonly, nonatomic) CDUnknownBlockType UserInfo;
@property(readonly, nonatomic) CDUnknownBlockType SecurityPolicy;
@property(readonly, nonatomic) CDUnknownBlockType CompletionQueue;
@property(readonly, nonatomic) CDUnknownBlockType CachePolicy;
@property(readonly, nonatomic) CDUnknownBlockType Encryption;
@property(readonly, nonatomic) CDUnknownBlockType Progress;
@property(readonly, nonatomic) CDUnknownBlockType Patch;
@property(readonly, nonatomic) CDUnknownBlockType Head;
@property(readonly, nonatomic) CDUnknownBlockType Delete;
@property(readonly, nonatomic) CDUnknownBlockType Put;
@property(readonly, nonatomic) CDUnknownBlockType Post;
@property(readonly, nonatomic) CDUnknownBlockType Get;
@property(readonly, nonatomic) CDUnknownBlockType FormData;
@property(readonly, nonatomic) CDUnknownBlockType URLQueries;
@property(readonly, nonatomic) CDUnknownBlockType Headers;
@property(readonly, nonatomic) CDUnknownBlockType Method;
@property(readonly, nonatomic) CDUnknownBlockType ResponseSerializerType;
@property(readonly, nonatomic) CDUnknownBlockType RequestSerializerType;
@property(readonly, nonatomic) CDUnknownBlockType Parameters;
@property(readonly, nonatomic) CDUnknownBlockType Host;
@property(readonly, nonatomic) CDUnknownBlockType Path;
- (id)init;
- (id)applyV2FixToSignal:(id)arg1;
- (id)applyResponseFixToSignal:(id)arg1;
- (id)applyMeetyouFixesToSignal:(id)arg1;
- (void)installMeetyouHooks;
- (id)buildRACSingalWithManager:(id)arg1;
- (id)buildRACSingal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

