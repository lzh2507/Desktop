//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZXGenericGF;

@interface ZXReedSolomonDecoder : NSObject
{
    ZXGenericGF *_field;
}

@property(readonly, nonatomic) ZXGenericGF *field; // @synthesize field=_field;
- (void).cxx_destruct;
- (id)findErrorMagnitudes:(id)arg1 errorLocations:(id)arg2;
- (id)findErrorLocations:(id)arg1 error:(id *)arg2;
- (id)runEuclideanAlgorithm:(id)arg1 b:(id)arg2 R:(int)arg3 error:(id *)arg4;
- (_Bool)decode:(id)arg1 twoS:(int)arg2 error:(id *)arg3;
- (id)initWithField:(id)arg1;

@end

