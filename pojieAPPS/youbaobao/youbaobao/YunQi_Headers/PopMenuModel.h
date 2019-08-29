//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIView;

@interface PopMenuModel : NSObject
{
    _Bool _automaticIdentificationColor;
    NSString *_imageNameString;
    NSString *_titleString;
    UIColor *_transitionRenderingColor;
    UIColor *_textColor;
    unsigned long long _transitionType;
    UIView *_customView;
}

+ (id)allocPopMenuModelWithImageNameString:(id)arg1 AtTitleString:(id)arg2 AtTextColor:(id)arg3 AtTransitionType:(unsigned long long)arg4 AtTransitionRenderingColor:(id)arg5;
@property(readonly, retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
@property(nonatomic) __weak UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) __weak UIColor *transitionRenderingColor; // @synthesize transitionRenderingColor=_transitionRenderingColor;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(copy, nonatomic) NSString *imageNameString; // @synthesize imageNameString=_imageNameString;
@property(nonatomic) _Bool automaticIdentificationColor; // @synthesize automaticIdentificationColor=_automaticIdentificationColor;
- (void).cxx_destruct;
- (void)_obj;
- (id)init;

@end
