//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView;

@interface ViewManage : NSObject
{
    NSMutableArray *_arrayManage;
    UIView *_alphaView;
}

+ (id)shareInstance;
@property(retain, nonatomic) UIView *alphaView; // @synthesize alphaView=_alphaView;
@property(retain, nonatomic) NSMutableArray *arrayManage; // @synthesize arrayManage=_arrayManage;
- (void).cxx_destruct;
- (void)btnClick;
- (id)getAlphaView;
- (void)createViewTop:(id)arg1;
- (void)reloadView;
- (id)getTopView;
- (void)setViews:(id)arg1;
- (id)getViews;
- (void)popAllViews;
- (void)popView;
- (void)pushView:(id)arg1;
- (id)init;

@end

