//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZXModulusGF;

@interface ZXPDF417ECErrorCorrection : NSObject
{
    ZXModulusGF *_field;
}

@property(readonly, nonatomic) ZXModulusGF *field; // @synthesize field=_field;
- (void).cxx_destruct;
- (id)findErrorMagnitudes:(id)arg1 errorLocator:(id)arg2 errorLocations:(id)arg3;
- (id)findErrorLocations:(id)arg1;
- (id)runEuclideanAlgorithm:(id)arg1 b:(id)arg2 R:(int)arg3;
- (int)decode:(id)arg1 numECCodewords:(int)arg2 erasures:(id)arg3;
- (id)init;

@end

