//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "BaseEmoticonViewDelegate-Protocol.h"
#import "EmoticonBoardViewDelegate-Protocol.h"
#import "MMGrowTextViewDelegate-Protocol.h"

@class EmoticonBoardView, MMGrowTextView, NSString, UIScrollView, UIView;
@protocol InputControllerDelegate;

@interface WCInputController : MMObject <MMGrowTextViewDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate>
{
    double _fKeyboardAnimationDuration;
    double _fKeyboardHeight;
    long long _iKeyboardAnimationCurve;
    int _eInputMode;
    UIView *_inputView;
    UIScrollView *_scrollView;
    MMGrowTextView *_textView;
    EmoticonBoardView *_emoticonBoardView;
    double _fInputViewY;
    double _fScrollViewY;
    double _fScrollViewOriginY;
    id <InputControllerDelegate> _delegate;
    _Bool _bAnimationCutHeight;
}

@property(readonly, nonatomic) double fKeyboardHeight; // @synthesize fKeyboardHeight=_fKeyboardHeight;
@property(nonatomic) _Bool bAnimationCutHeight; // @synthesize bAnimationCutHeight=_bAnimationCutHeight;
@property(nonatomic) int eInputMode; // @synthesize eInputMode=_eInputMode;
@property(nonatomic) __weak id <InputControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double fScrollViewOriginY; // @synthesize fScrollViewOriginY=_fScrollViewOriginY;
@property(nonatomic) double fScrollViewY; // @synthesize fScrollViewY=_fScrollViewY;
@property(nonatomic) double fInputViewY; // @synthesize fInputViewY=_fInputViewY;
@property(nonatomic) __weak EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak MMGrowTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UIView *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;
- (void)OnEmoticonStateDidChanged:(_Bool)arg1;
- (void)onSendButtonClicked;
- (void)TextViewDidChangeSelection:(id)arg1;
- (void)textViewCommit;
- (void)UpdateTabbarSendButtonState;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)updateScrollViewY:(double)arg1;
- (void)inputModeChangeButtonClicked;
- (void)onSystemHideKeyboard;
- (void)AnimationDidStop:(id)arg1;
- (void)doHideKeybaord;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardWillShow:(double)arg1;
- (_Bool)TextViewDidDelete;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)becomeTextView;
- (void)resignResponder;
- (void)resignTextView;
- (void)deleteEmoticon;
- (void)didSelectorEmoticon:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

