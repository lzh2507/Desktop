//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface YSFAttributedLabelURL : NSObject
{
    id _linkData;
    UIColor *_color;
    struct _NSRange _range;
}

+ (id)urlExpression;
+ (id)matchWholeEamilTextOfStr:(id)arg1;
+ (void)setCustomDetectMethod:(CDUnknownBlockType)arg1;
+ (id)detectLinks:(id)arg1 detectLink:(_Bool)arg2 detectPhoneNumber:(_Bool)arg3;
+ (id)urlWithLinkData:(id)arg1 range:(struct _NSRange)arg2 color:(id)arg3;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) id linkData; // @synthesize linkData=_linkData;
- (void).cxx_destruct;

@end

