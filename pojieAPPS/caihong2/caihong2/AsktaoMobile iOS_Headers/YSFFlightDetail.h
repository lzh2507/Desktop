//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface YSFFlightDetail : NSObject
{
    NSString *_label;
    NSMutableArray *_flightDetailItems;
}

+ (id)objectByDict:(id)arg1;
@property(retain, nonatomic) NSMutableArray *flightDetailItems; // @synthesize flightDetailItems=_flightDetailItems;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;

@end
