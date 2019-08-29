//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface YBBToolsBUltrasonicManager : NSObject
{
    NSArray *_rangeArray;
    NSArray *_sortKeys;
    NSDictionary *_defaultItems;
    NSDictionary *_progesteroneRangeDict;
    NSDictionary *_hcgRangeDict;
}

+ (void)updateBuRanges:(id)arg1;
+ (void)updateHcgRangeDict:(id)arg1;
+ (id)progesteroneRangeDict;
+ (id)hcgRangeDict;
+ (id)buDefaultItems;
+ (id)buRanges;
+ (id)buSortkeys;
+ (id)sharedManager;
@property(retain, nonatomic) NSDictionary *hcgRangeDict; // @synthesize hcgRangeDict=_hcgRangeDict;
@property(retain, nonatomic) NSDictionary *progesteroneRangeDict; // @synthesize progesteroneRangeDict=_progesteroneRangeDict;
@property(retain, nonatomic) NSDictionary *defaultItems; // @synthesize defaultItems=_defaultItems;
@property(retain, nonatomic) NSArray *sortKeys; // @synthesize sortKeys=_sortKeys;
@property(retain, nonatomic) NSArray *rangeArray; // @synthesize rangeArray=_rangeArray;
- (void).cxx_destruct;
- (id)init;

@end
