//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYButton, IMYLineView, IMYPickerViewModel, NSArray, NSString, UIColor, UILabel, UITapGestureRecognizer, YYPickerView;

@interface IMYPickerView : UIView
{
    _Bool _outDismissControl;
    _Bool _autoReleaseSelf;
    _Bool _titleHidden;
    _Bool _isShowTopSeparateLine;
    _Bool _isInputView;
    _Bool _isYuerBlackType;
    NSString *_title;
    UILabel *_titleLabel;
    unsigned long long _pickerViewType;
    IMYButton *_cancelButton;
    IMYButton *_confirmButton;
    UIView *_backCoverView;
    UIColor *_backCoverViewColor;
    IMYPickerViewModel *_viewModel;
    CDUnknownBlockType _selectedRowDidChangedBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmResultBlock;
    CDUnknownBlockType _changeTitleOfRowAndComponentBlock;
    CDUnknownBlockType _numberOfRowsInComponentBlock;
    CDUnknownBlockType _touchNotPickerSpace;
    UIView *_showView;
    NSArray *_dataArray;
    UIView *_topView;
    NSArray *_defaultSelectArray;
    YYPickerView *_picker;
    UITapGestureRecognizer *_tapGestureRecognizer;
    IMYLineView *_topSeparateLine;
    NSString *_pickerViewBodyBackgroundColorKey;
}

+ (id)yuerBlackPickerViewAtKeyWindowWithEnableCover:(_Bool)arg1 dataArray:(id)arg2 pickerViewTpe:(unsigned long long)arg3 confirmBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
+ (id)pickerViewAtKeyWindowWithEnableCover:(_Bool)arg1 dataArray:(id)arg2 pickerViewTpe:(unsigned long long)arg3 confirmBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
+ (id)pickerViewAtView:(id)arg1 withEnableCover:(_Bool)arg2 dataArray:(id)arg3 pickerViewType:(unsigned long long)arg4 confirmBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
+ (id)pickerViewAtView:(id)arg1 withEnableCover:(_Bool)arg2 dataArray:(id)arg3 pickerViewType:(unsigned long long)arg4 pickerViewBodyBackgroundColorKey:(id)arg5 isInputView:(_Bool)arg6 confirmBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8;
+ (id)pickerViewAtView:(id)arg1 withEnableCover:(_Bool)arg2 dataArray:(id)arg3 pickerViewType:(unsigned long long)arg4 pickerViewBodyBackgroundColorKey:(id)arg5 confirmBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;
+ (id)pickerViewAtView:(id)arg1 dataArray:(id)arg2 pickerViewType:(unsigned long long)arg3;
@property(copy, nonatomic) NSString *pickerViewBodyBackgroundColorKey; // @synthesize pickerViewBodyBackgroundColorKey=_pickerViewBodyBackgroundColorKey;
@property(retain, nonatomic) IMYLineView *topSeparateLine; // @synthesize topSeparateLine=_topSeparateLine;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) YYPickerView *picker; // @synthesize picker=_picker;
@property(nonatomic) _Bool isYuerBlackType; // @synthesize isYuerBlackType=_isYuerBlackType;
@property(nonatomic) _Bool isInputView; // @synthesize isInputView=_isInputView;
@property(retain, nonatomic) NSArray *defaultSelectArray; // @synthesize defaultSelectArray=_defaultSelectArray;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak UIView *showView; // @synthesize showView=_showView;
@property(copy, nonatomic) CDUnknownBlockType touchNotPickerSpace; // @synthesize touchNotPickerSpace=_touchNotPickerSpace;
@property(copy, nonatomic) CDUnknownBlockType numberOfRowsInComponentBlock; // @synthesize numberOfRowsInComponentBlock=_numberOfRowsInComponentBlock;
@property(copy, nonatomic) CDUnknownBlockType changeTitleOfRowAndComponentBlock; // @synthesize changeTitleOfRowAndComponentBlock=_changeTitleOfRowAndComponentBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmResultBlock; // @synthesize confirmResultBlock=_confirmResultBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType selectedRowDidChangedBlock; // @synthesize selectedRowDidChangedBlock=_selectedRowDidChangedBlock;
@property(nonatomic) _Bool isShowTopSeparateLine; // @synthesize isShowTopSeparateLine=_isShowTopSeparateLine;
@property(nonatomic) _Bool titleHidden; // @synthesize titleHidden=_titleHidden;
@property(nonatomic) _Bool autoReleaseSelf; // @synthesize autoReleaseSelf=_autoReleaseSelf;
@property(nonatomic) _Bool outDismissControl; // @synthesize outDismissControl=_outDismissControl;
@property(retain, nonatomic) IMYPickerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIColor *backCoverViewColor; // @synthesize backCoverViewColor=_backCoverViewColor;
@property(retain, nonatomic) UIView *backCoverView; // @synthesize backCoverView=_backCoverView;
@property(retain, nonatomic) IMYButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) IMYButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) unsigned long long pickerViewType; // @synthesize pickerViewType=_pickerViewType;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setUnions:(id)arg1 forComponent:(unsigned long long)arg2 position:(unsigned long long)arg3 longestTitle:(id)arg4;
- (_Bool)isShowViewDisplayedInScreen;
- (void)hideOtherKeyboardMask;
- (void)hideInputBackCoverViewAnimation:(id)arg1;
- (void)hideAnimation:(id)arg1;
- (void)scrollWithBlock:(CDUnknownBlockType)arg1 andType:(unsigned long long)arg2;
- (void)confirmWithBlock:(CDUnknownBlockType)arg1 andType:(unsigned long long)arg2;
- (void)confirmButtonAction;
- (void)cancelButtonAction;
- (id)resultWithType:(unsigned long long)arg1;
- (id)getSelectResultAddressCodeArray;
- (double)getSelectedResultFloatValue;
- (id)getSelectedResultDate;
- (id)getSelectedResultString;
- (id)getSelectedArray;
- (void)setPickerSelectWithIndexesArray:(id)arg1;
- (void)setSelectLast;
- (void)setSelectWithMensesCyCleDays:(long long)arg1;
- (void)setSelectWithMensesDays:(long long)arg1 periodDays:(long long)arg2;
- (void)setSelectAddressWithProvinceID:(long long)arg1 cityID:(long long)arg2 areaID:(long long)arg3;
- (void)setSelectWithArray:(id)arg1;
- (void)setSelectWithDate:(id)arg1;
- (void)setSelectWithString:(id)arg1;
- (void)changeData:(id)arg1;
- (void)freePicker;
- (void)hide;
- (void)show;
- (void)setupDefaultUnion;
- (id)buttonWithTitle:(id)arg1;
- (void)setupSubViews;
- (void)setupBackCoverView;
- (void)setupOriginalSelect;
- (void)deviceOrentationChanged;
- (void)setupObserver;
- (void)setupUIWithEnableCover:(_Bool)arg1;
- (void)setupData;
- (void)initViewAtView:(id)arg1 dataArray:(id)arg2 pickerViewType:(unsigned long long)arg3 isEnableCover:(_Bool)arg4 isInputView:(_Bool)arg5;
- (id)initPickerViewAtView:(id)arg1 dataArray:(id)arg2 pickerViewType:(unsigned long long)arg3 isEnableCover:(_Bool)arg4 isInputView:(_Bool)arg5 pickerViewBodyBackgroundColorKey:(id)arg6;
- (id)initPickerViewAtView:(id)arg1 dataArray:(id)arg2 pickerViewType:(unsigned long long)arg3 isEnableCover:(_Bool)arg4 isInputView:(_Bool)arg5;
- (id)initYuerBlackPickerViewAtView:(id)arg1 dataArray:(id)arg2 pickerViewType:(unsigned long long)arg3 isEnableCover:(_Bool)arg4 isInputView:(_Bool)arg5;
- (void)freeBackCoverView;
- (void)dealloc;

@end

