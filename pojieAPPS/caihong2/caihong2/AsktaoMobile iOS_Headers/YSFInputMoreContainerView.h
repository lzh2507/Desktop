//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YSFPageViewDataSource-Protocol.h"
#import "YSFPageViewDelegate-Protocol.h"

@class NSArray, NSString, YSFPageView;
@protocol YSFInputActionDelegate;

@interface YSFInputMoreContainerView : UIView <YSFPageViewDataSource, YSFPageViewDelegate>
{
    NSArray *_mediaButtons;
    NSArray *_mediaItems;
    YSFPageView *_pageView;
    id <YSFInputActionDelegate> _actionDelegate;
}

@property(nonatomic) __weak id <YSFInputActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void).cxx_destruct;
- (void)onTouchButton:(id)arg1;
- (id)pageView:(id)arg1 viewInPage:(long long)arg2;
- (id)oneLineMediaInPageView:(id)arg1 viewInPage:(long long)arg2 count:(long long)arg3;
- (id)mediaPageView:(id)arg1 beginItem:(long long)arg2 endItem:(long long)arg3;
- (long long)numberOfPages:(id)arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)genMediaButtons;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

