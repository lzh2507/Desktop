//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YSFSessionMessageContentView.h"

#import "YSF_NIMMediaManagerDelgate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;
@protocol YSFPlayAudioUIDelegate;

@interface YSFSessionAudioContentView : YSFSessionMessageContentView <YSF_NIMMediaManagerDelgate>
{
    UILabel *_audioDurationLable;
    id <YSFPlayAudioUIDelegate> _audioUIDelegate;
    UIImageView *_voiceImageView;
    UILabel *_durationLabel;
    UIView *_separateView;
    UIButton *_textLabel;
    UIButton *_failedButton;
    UIActivityIndicatorView *_traningActivityIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *traningActivityIndicator; // @synthesize traningActivityIndicator=_traningActivityIndicator;
@property(retain, nonatomic) UIButton *failedButton; // @synthesize failedButton=_failedButton;
@property(retain, nonatomic) UIButton *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIImageView *voiceImageView; // @synthesize voiceImageView=_voiceImageView;
@property(nonatomic) __weak id <YSFPlayAudioUIDelegate> audioUIDelegate; // @synthesize audioUIDelegate=_audioUIDelegate;
@property(retain, nonatomic) UILabel *audioDurationLable; // @synthesize audioDurationLable=_audioDurationLable;
- (void).cxx_destruct;
- (void)stopPlayingUI;
- (void)playAudio:(id)arg1 didCompletedWithError:(id)arg2;
- (void)playAudio:(id)arg1 didBeganWithError:(id)arg2;
- (void)onRetryAudioToText:(id)arg1;
- (void)onTouchUpInside:(id)arg1;
- (void)layoutSubviews;
- (void)refresh:(id)arg1;
- (void)addVoiceView;
- (void)dealloc;
- (id)initSessionMessageContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

