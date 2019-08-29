//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewModel.h"

@class IMYPickerView, IMYTLBabyModel, NSMutableArray, NSString, RACSignal, UILabel;

@interface IMYTLBabyInfoVM : IMYTLViewModel
{
    _Bool _needSync;
    _Bool _isShowPregnancy;
    NSMutableArray *_dataArray;
    RACSignal *_changeBabyAvatar;
    IMYTLBabyModel *_originalBaby;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IMYPickerView *_genderPicker;
    UILabel *_genderLabel;
    IMYPickerView *_birthdayPicker;
    UILabel *_birthdayLabel;
    NSString *_newestUserDueDate;
}

@property(nonatomic) _Bool isShowPregnancy; // @synthesize isShowPregnancy=_isShowPregnancy;
@property(retain, nonatomic) NSString *newestUserDueDate; // @synthesize newestUserDueDate=_newestUserDueDate;
@property(retain, nonatomic) UILabel *birthdayLabel; // @synthesize birthdayLabel=_birthdayLabel;
@property(retain, nonatomic) IMYPickerView *birthdayPicker; // @synthesize birthdayPicker=_birthdayPicker;
@property(retain, nonatomic) UILabel *genderLabel; // @synthesize genderLabel=_genderLabel;
@property(retain, nonatomic) IMYPickerView *genderPicker; // @synthesize genderPicker=_genderPicker;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool needSync; // @synthesize needSync=_needSync;
@property(retain, nonatomic) IMYTLBabyModel *originalBaby; // @synthesize originalBaby=_originalBaby;
@property(retain, nonatomic) RACSignal *changeBabyAvatar; // @synthesize changeBabyAvatar=_changeBabyAvatar;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)recordUserSelectedCover;
- (_Bool)userHasSelectedCover;
- (void)saveBabyAvatarImage:(id)arg1 path:(id)arg2;
- (id)savedBabyAvatarPath;
- (void)commitBabyInfoToServer;
- (void)configBirthdayPicker:(id)arg1;
- (void)configGenderPicker:(id)arg1;
- (void)initData;
- (void)refreshBabyData:(id)arg1;
- (id)initWithBabyID:(id)arg1;
- (id)init;

@end
