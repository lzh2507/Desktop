//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NIMContactSelectAvatarView, NSMutableArray, NSString, UIScrollView;
@protocol NIMContactPickedViewDelegate;

@interface NIMContactPickedView : UIView <UIScrollViewDelegate>
{
    id <NIMContactPickedViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableArray *_array;
    long long _currentPos;
    NIMContactSelectAvatarView *_blankView;
}

@property(retain, nonatomic) NIMContactSelectAvatarView *blankView; // @synthesize blankView=_blankView;
@property(nonatomic) long long currentPos; // @synthesize currentPos=_currentPos;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <NIMContactPickedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)remove:(id)arg1;
- (void)refreshView:(int)arg1;
- (void)removeMemberInfo:(id)arg1;
- (void)addMemberInfo:(id)arg1;
- (void)removeAvatarView:(id)arg1;
- (void)addAvatarView:(id)arg1;
- (void)moveBlankAvatarView;
- (void)addBlankAvatarView;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

