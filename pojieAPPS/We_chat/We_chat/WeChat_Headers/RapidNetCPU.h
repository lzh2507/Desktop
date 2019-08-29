//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RapidNetCPU : NSObject
{
    struct rapidnet *net_;
    struct RapidnetInstance *instance_;
    rpd_blob_0d1e88ca _inputBlob;
    rpd_blob_0d1e88ca _outputBlob;
    NSString *_protoFile;
    NSString *_modelFile;
}

@property(retain, nonatomic) NSString *modelFile; // @synthesize modelFile=_modelFile;
@property(retain, nonatomic) NSString *protoFile; // @synthesize protoFile=_protoFile;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)forwordWithInputBlob:(struct rpd_blob<float> *)arg1 outputBlob:(struct rpd_blob<float> *)arg2;
- (id)forwordWithInputMat:(const struct Mat *)arg1 outputMat:(struct Mat *)arg2;
- (unsigned int *)dongleMap;
- (void)convertOutputBlob:(const struct rpd_blob<float> *)arg1 toOutputMat:(struct Mat *)arg2;
- (void)convertInputMat:(const struct Mat *)arg1 toInputBlob:(struct rpd_blob<float> *)arg2;
- (void)dealloc;
- (id)initWithProto:(id)arg1 modelFile:(id)arg2;
- (const struct rpd_blob<float> *)getOutputBlob;
- (const struct rpd_blob<float> *)getInputBlob;
- (const struct layer_res *)getLayerData:(int)arg1;
- (const struct layer_param *)getLayerParam:(int)arg1;
- (const struct rpd_layer_info *)getLayerInfo:(int)arg1;
- (int)getLayerCount;
- (struct rpd_net_param)getNetParam;

@end

