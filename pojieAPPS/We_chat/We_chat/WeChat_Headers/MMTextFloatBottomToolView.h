//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBottomBar.h"

@class NSString, UIButton;
@protocol MMTextFloatBottomToolViewDelegate;

@interface MMTextFloatBottomToolView : WCBottomBar
{
    UIButton *m_btnForward;
    UIButton *m_btnFavAdd;
    UIButton *m_btnRemind;
    UIButton *m_btnRead;
    UIButton *m_btnDetail;
    NSString *m_nsTipsUrl;
    id <MMTextFloatBottomToolViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <MMTextFloatBottomToolViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onBtnClicked:(id)arg1;
- (void)onDetailBtnClicked;
- (void)setToReadStop;
- (void)setToReadingState;
- (id)createBtnWithImg:(id)arg1 Tag:(long long)arg2;
- (void)initButtonForRelease;
- (void)layoutSubviews;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1 TipUrl:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

