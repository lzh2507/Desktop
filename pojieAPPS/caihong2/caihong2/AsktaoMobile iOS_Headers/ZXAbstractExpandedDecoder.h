//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZXBitArray, ZXRSSExpandedGeneralAppIdDecoder;

@interface ZXAbstractExpandedDecoder : NSObject
{
    ZXRSSExpandedGeneralAppIdDecoder *_generalDecoder;
    ZXBitArray *_information;
}

+ (id)createDecoder:(id)arg1;
@property(readonly, nonatomic) ZXBitArray *information; // @synthesize information=_information;
@property(readonly, nonatomic) ZXRSSExpandedGeneralAppIdDecoder *generalDecoder; // @synthesize generalDecoder=_generalDecoder;
- (void).cxx_destruct;
- (id)parseInformationWithError:(id *)arg1;
- (id)initWithInformation:(id)arg1;

@end

