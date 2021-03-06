//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSString, UIButton, UIColor, UIFont, UILabel, UIScrollView;

@interface YBBHYLyricsLabel : UIView
{
    UIScrollView *_scrollView;
    NSString *_text;
    NSString *_source;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    double _lineSpacing;
    double _paragraphSpacing;
    double _topFadeLength;
    double _bottomFadeLength;
    UILabel *_label;
    CALayer *_maskLayer;
    UILabel *_warnLabel;
    UIButton *_warnImgView;
    UILabel *_sourceLabel;
    CDUnknownBlockType _hanlder;
    struct UIEdgeInsets _contentInset;
}

@property(copy, nonatomic) CDUnknownBlockType hanlder; // @synthesize hanlder=_hanlder;
@property(nonatomic) __weak UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(nonatomic) __weak UIButton *warnImgView; // @synthesize warnImgView=_warnImgView;
@property(nonatomic) __weak UILabel *warnLabel; // @synthesize warnLabel=_warnLabel;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(nonatomic) double bottomFadeLength; // @synthesize bottomFadeLength=_bottomFadeLength;
@property(nonatomic) double topFadeLength; // @synthesize topFadeLength=_topFadeLength;
@property(nonatomic) double paragraphSpacing; // @synthesize paragraphSpacing=_paragraphSpacing;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)warnClick;
- (void)addWarnTextWithText:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addGradientLayer;
- (void)applyGradientMask;
- (void)layoutSubviews;
- (void)setup;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

