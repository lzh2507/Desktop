//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YSFLinkItem : NSObject
{
    NSString *_type;
    NSString *_label;
    NSString *_imageUrl;
    NSString *_target;
    NSString *_linkType;
    NSString *_params;
}

@property(copy, nonatomic) NSString *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *linkType; // @synthesize linkType=_linkType;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

