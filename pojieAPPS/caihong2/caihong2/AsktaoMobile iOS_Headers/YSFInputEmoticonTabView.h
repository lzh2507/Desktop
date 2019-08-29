//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray, UIButton;
@protocol YSFInputEmoticonTabDelegate;

@interface YSFInputEmoticonTabView : UIControl
{
    NSArray *_emoticonCatalogs;
    UIButton *_sendButton;
    id <YSFInputEmoticonTabDelegate> _delegate;
    NSMutableArray *_tabs;
    NSMutableArray *_seps;
}

@property(retain, nonatomic) NSMutableArray *seps; // @synthesize seps=_seps;
@property(retain, nonatomic) NSMutableArray *tabs; // @synthesize tabs=_tabs;
@property(nonatomic) __weak id <YSFInputEmoticonTabDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(readonly, nonatomic) NSArray *emoticonCatalogs; // @synthesize emoticonCatalogs=_emoticonCatalogs;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)selectTabIndex:(long long)arg1;
- (void)onTouchTab:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 catalogs:(id)arg2;

@end

