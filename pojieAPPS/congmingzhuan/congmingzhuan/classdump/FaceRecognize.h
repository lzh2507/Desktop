//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IosLicenser;

@interface FaceRecognize : NSObject
{
    _Bool _recognizeIDPhotoModelInited;
    _Bool _recognizeLiveModelInited;
    _Bool _recognizeNIRModelInited;
    _Bool _detectModelInited;
    _Bool _alignModelInited;
    _Bool _detectNIRModelInited;
    _Bool _recognizeCompareIDPhotoModelInited;
    _Bool _recognizeCompareLiveModelInited;
    _Bool _recognizeCompareNIRModelInited;
    int _recognizeType;
    IosLicenser *_authorizer;
}

+ (id)sharedInstance;
@property(nonatomic) int recognizeType; // @synthesize recognizeType=_recognizeType;
@property(nonatomic) _Bool recognizeCompareNIRModelInited; // @synthesize recognizeCompareNIRModelInited=_recognizeCompareNIRModelInited;
@property(nonatomic) _Bool recognizeCompareLiveModelInited; // @synthesize recognizeCompareLiveModelInited=_recognizeCompareLiveModelInited;
@property(nonatomic) _Bool recognizeCompareIDPhotoModelInited; // @synthesize recognizeCompareIDPhotoModelInited=_recognizeCompareIDPhotoModelInited;
@property(nonatomic) _Bool detectNIRModelInited; // @synthesize detectNIRModelInited=_detectNIRModelInited;
@property(nonatomic) _Bool alignModelInited; // @synthesize alignModelInited=_alignModelInited;
@property(nonatomic) _Bool detectModelInited; // @synthesize detectModelInited=_detectModelInited;
@property(nonatomic) _Bool recognizeNIRModelInited; // @synthesize recognizeNIRModelInited=_recognizeNIRModelInited;
@property(nonatomic) _Bool recognizeLiveModelInited; // @synthesize recognizeLiveModelInited=_recognizeLiveModelInited;
@property(nonatomic) _Bool recognizeIDPhotoModelInited; // @synthesize recognizeIDPhotoModelInited=_recognizeIDPhotoModelInited;
@property(retain, nonatomic) IosLicenser *authorizer; // @synthesize authorizer=_authorizer;
- (void).cxx_destruct;
- (_Bool)existDetectPath:(int)arg1;
- (_Bool)existRecognizeCompareLivePath:(int)arg1;
- (_Bool)existRecognizeModel:(int)arg1;
- (void)initAligningModelWithType:(int)arg1;
- (void)initDetectModelWithType:(int)arg1;
- (void)setLogVisible:(_Bool)arg1;
- (int)getFaceSimilarity:(id)arg1 secondFaceFeature:(id)arg2;
- (double)getFaceFeatureDistance:(id)arg1 secondFaceFeature:(id)arg2;
- (id)extractFeatureWithImage:(id)arg1 minFaceSize:(int)arg2;
- (id)extractFeatureWithImage:(id)arg1 landmarks:(id *)arg2;
- (void)initRecognizeComparePath:(int)arg1;
- (void)initRecognizeModel:(int)arg1;
- (unsigned long long)canWork;
- (void)setRemoteAuthorize:(_Bool)arg1;
- (void)setLicenseID:(id)arg1 andLocalLicenceFile:(id)arg2;
- (void)initModelWithRecognizeType:(unsigned long long)arg1;
- (id)init;

@end
