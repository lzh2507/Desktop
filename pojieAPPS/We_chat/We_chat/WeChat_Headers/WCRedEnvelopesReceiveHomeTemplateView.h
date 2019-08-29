//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCPayWebImageViewDelegate-Protocol.h"

@class MMHeadImageView, NSString, UIButton, UIImageView, UILabel, WCPayWebImageView, WCRedEnvelopesReceiveHomeTemplateItem;
@protocol WCRedEnvelopesReceiveHomeTemplateViewDelegate;

@interface WCRedEnvelopesReceiveHomeTemplateView : UIView <WCPayWebImageViewDelegate>
{
    id <WCRedEnvelopesReceiveHomeTemplateViewDelegate> _m_delegate;
    WCRedEnvelopesReceiveHomeTemplateItem *_templateItem;
    UIImageView *_topImageView;
    UIImageView *_curveImageView;
    UIImageView *_defualtImageView;
    UIView *_redEnvelopesView;
    UIView *_topRedView;
    UIView *_topView;
    UIView *_bottomView;
    UIButton *_openRedEnvelopesButton;
    WCPayWebImageView *_corpImageView;
    UIView *_coverBackgroundView;
    MMHeadImageView *_headImageView;
    UILabel *_nickNameLabel;
    UILabel *_descTitleLabel;
}

@property(retain, nonatomic) UILabel *descTitleLabel; // @synthesize descTitleLabel=_descTitleLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *coverBackgroundView; // @synthesize coverBackgroundView=_coverBackgroundView;
@property(retain, nonatomic) WCPayWebImageView *corpImageView; // @synthesize corpImageView=_corpImageView;
@property(retain, nonatomic) UIButton *openRedEnvelopesButton; // @synthesize openRedEnvelopesButton=_openRedEnvelopesButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *topRedView; // @synthesize topRedView=_topRedView;
@property(retain, nonatomic) UIView *redEnvelopesView; // @synthesize redEnvelopesView=_redEnvelopesView;
@property(retain, nonatomic) UIImageView *defualtImageView; // @synthesize defualtImageView=_defualtImageView;
@property(retain, nonatomic) UIImageView *curveImageView; // @synthesize curveImageView=_curveImageView;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *templateItem; // @synthesize templateItem=_templateItem;
@property(nonatomic) __weak id <WCRedEnvelopesReceiveHomeTemplateViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)convertToImage;
- (void)updateWithTemplateItem:(id)arg1;
- (void)layoutContentView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 templateItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

