//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "UITextViewDelegate-Protocol.h"
#import "WATextInputInterface-Protocol.h"

@class NSMutableParagraphStyle, NSString, UIColor, UIFont, UIView;
@protocol WATextInputDelegate;

@interface WATextView : UITextView <WATextInputInterface, UITextViewDelegate>
{
    long long _lineCount;
    UIView *_greyMask;
    UIColor *_placeColor;
    UIFont *_placeFont;
    _Bool _autoSize;
    struct CGRect _rcCaret;
    unsigned short _keyCode;
    _Bool _disableEditing;
    _Bool showConfirmButton;
    _Bool multiLine;
    _Bool initKeyBoard;
    _Bool fixed;
    _Bool confirmHold;
    _Bool native;
    _Bool adjustPosition;
    unsigned int inputId;
    id <WATextInputDelegate> keyboardDelegate;
    NSString *userData;
    long long maxLength;
    NSString *defaultValue;
    double bottomMargin;
    long long initCursor;
    long long endCursor;
    long long selectionBegin;
    long long selectionEnd;
    double _minHeight;
    double _maxHeight;
    NSString *_placeHolder;
    NSMutableParagraphStyle *_paragraphStyle;
}

@property(retain, nonatomic) NSMutableParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) _Bool adjustPosition; // @synthesize adjustPosition;
@property(nonatomic) _Bool native; // @synthesize native;
@property(nonatomic) long long selectionEnd; // @synthesize selectionEnd;
@property(nonatomic) long long selectionBegin; // @synthesize selectionBegin;
@property(nonatomic) long long endCursor; // @synthesize endCursor;
@property(nonatomic) long long initCursor; // @synthesize initCursor;
@property(nonatomic) _Bool confirmHold; // @synthesize confirmHold;
@property(nonatomic) _Bool fixed; // @synthesize fixed;
@property(nonatomic) _Bool initKeyBoard; // @synthesize initKeyBoard;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin;
@property(nonatomic) _Bool multiLine; // @synthesize multiLine;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue;
@property(nonatomic) long long maxLength; // @synthesize maxLength;
@property(copy, nonatomic) NSString *userData; // @synthesize userData;
@property(nonatomic) unsigned int inputId; // @synthesize inputId;
@property(nonatomic) __weak id <WATextInputDelegate> keyboardDelegate; // @synthesize keyboardDelegate;
@property(nonatomic) _Bool showConfirmButton; // @synthesize showConfirmButton;
- (void).cxx_destruct;
- (id)getInputView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onKeyboardDidHide;
- (void)onKeyboardWillHide;
- (id)getParentView;
- (_Bool)isAutoSize;
- (void)setAutoSize:(_Bool)arg1;
- (double)getContentHeight;
- (long long)getLineCount;
- (void)setKeyboardType:(long long)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setVisible:(_Bool)arg1;
- (_Bool)isBold;
- (double)getFontSize;
- (void)setInputFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(double)arg1 bold:(_Bool)arg2;
- (id)getAccessoryButton;
- (struct CGRect)getVisibleRect;
- (void)removeFromParent;
- (void)becomeFirstResponder:(_Bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setInputValue:(id)arg1 cursorPos:(long long)arg2;
- (void)setDisable:(_Bool)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)deleteBackward;
- (void)setAlignment:(long long)arg1;
- (void)setLineSpace:(double)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)adjustSizeFit:(id)arg1;
- (void)calculateCaretPos;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (struct _NSRange)getCurrentSelectedRange;
- (void)setDisableEdit:(_Bool)arg1;
- (void)setInputPlaceholder:(id)arg1 placeholderStyle:(id)arg2;
- (id)getInputValue;
- (void)setSelectedTextRange:(id)arg1;
- (id)getSelectedTextRange;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)textDidChange:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

