//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCSKUResultItem : NSObject
{
    NSString *_combItemValue;
    unsigned long long _stockCount;
    NSMutableArray *_imageInfoList;
    NSMutableArray *_wxPrices;
}

@property(retain, nonatomic) NSMutableArray *wxPrices; // @synthesize wxPrices=_wxPrices;
@property(retain, nonatomic) NSMutableArray *imageInfoList; // @synthesize imageInfoList=_imageInfoList;
@property(nonatomic) unsigned long long stockCount; // @synthesize stockCount=_stockCount;
@property(retain, nonatomic) NSString *combItemValue; // @synthesize combItemValue=_combItemValue;
- (void).cxx_destruct;
- (id)initWithCombItemValue:(id)arg1;
- (void)dealloc;

@end

