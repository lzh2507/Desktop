//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

#import "NSCopying-Protocol.h"

@class MRTLookupType, NSString;

@interface MRTAgent : MRTObject <NSCopying>
{
    NSString *_idNumber;
    MRTLookupType *_type;
}

@property(retain, nonatomic) MRTLookupType *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *idNumber; // @synthesize idNumber=_idNumber;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

