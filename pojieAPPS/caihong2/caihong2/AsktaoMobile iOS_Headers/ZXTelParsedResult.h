//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZXParsedResult.h"

@class NSString;

@interface ZXTelParsedResult : ZXParsedResult
{
    NSString *_number;
    NSString *_telURI;
    NSString *_title;
}

+ (id)telParsedResultWithNumber:(id)arg1 telURI:(id)arg2 title:(id)arg3;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *telURI; // @synthesize telURI=_telURI;
@property(readonly, copy, nonatomic) NSString *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (id)displayResult;
- (id)initWithNumber:(id)arg1 telURI:(id)arg2 title:(id)arg3;

@end

