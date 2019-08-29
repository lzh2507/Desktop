//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;
@protocol IMYDayRecordModelDelegate;

@interface IMYDayRecordModel : NSObject
{
    _Bool hasChangeProperty;
    NSString *nongliString;
    NSString *weekString;
    _Bool isAddPropertyListened;
    _Bool _isBegin;
    _Bool _isEnd;
    _Bool _isRoom;
    _Bool _autoSleepSet;
    _Bool _syschMark;
    _Bool _unUpLoadChange;
    NSDate *_date;
    long long _painType;
    unsigned long long _dysmenorrheaV2;
    long long _flowType;
    unsigned long long _pregnancy;
    long long _ovulationPaper;
    long long _dipstick;
    long long _leucorrhoea;
    long long _isControl;
    NSString *_loveRecordJson;
    double _weight;
    double _temperature;
    unsigned long long _symptomType;
    NSArray *_selfdefine_symptoms;
    unsigned long long _items;
    unsigned long long _habit;
    double _sleepTime;
    long long _moodType;
    NSString *_comment;
    NSString *_diaryPhoto;
    NSDictionary *_diaryPhotoAssetUrls;
    NSString *_insertTime;
    NSString *_insertVersion;
    unsigned long long _recordFlag;
    unsigned long long _baby_symptoms;
    id <IMYDayRecordModelDelegate> _delegate;
}

+ (_Bool)updateToDBWithSet:(id)arg1 where:(id)arg2;
+ (void)dbDidAlterTable:(id)arg1 tableName:(id)arg2 addColumns:(id)arg3;
+ (id)getPrimaryKey;
+ (id)getTableName;
+ (id)getModelDateFormatter;
+ (_Bool)dbWillInsert:(id)arg1;
+ (id)resetLKDBHelper:(_Bool)arg1;
+ (id)getUsingLKDBHelper;
+ (_Bool)isNeedExitUserID;
+ (void)initialize;
+ (unsigned long long)getPainSymptomPoints:(unsigned long long)arg1;
+ (id)getHabitsWithStartDate:(id)arg1 day:(int)arg2;
+ (id)getBabySymptomCountWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)getCustomSymptomsWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)getMenseSymptomsWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)getSymptomCountWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)getForwardWeightNonpregnancy;
+ (id)getPregnancyForwardWeight;
+ (id)getPregnancyAfterWeight;
+ (_Bool)todayIsPregnance;
+ (_Bool)dateInsidePregnance:(id)arg1;
+ (_Bool)pregnanceDueDateIsValidate:(id)arg1;
+ (id)getCurrentPregnancyStartDate;
+ (id)getPregnancyStartDateWithDate:(id)arg1;
+ (id)getPregnancyLastMensesModel;
+ (long long)getPregnancyStartDayDiffForParam;
+ (void)dateInsidePregnance:(id)arg1 pregnanDay:(long long *)arg2 percent:(float *)arg3;
+ (void)getPregnanDay:(long long *)arg1 percent:(float *)arg2;
+ (long long)getPregnancyStartDayDiff;
+ (void)deletePregnancyValue:(id)arg1 needUpload:(_Bool)arg2;
+ (void)deleteCurrentPregnancy;
+ (void)deletePregnancyWithDate:(id)arg1;
+ (void)deletePregnancyWithPModel:(id)arg1 needUpload:(_Bool)arg2;
+ (void)deletePregnancyWithPModel:(id)arg1;
+ (_Bool)pregnanceIsCompleted;
+ (void)resetPregnancyDueDate:(id)arg1;
+ (void)setPregnancyDueDate:(id)arg1 startDate:(id)arg2;
+ (void)setPregnancyDueDate:(id)arg1;
+ (void)resetBabyBirthDay:(id)arg1 inPregnan:(id)arg2;
+ (void)birthCurrentPregnancyWithModel:(id)arg1;
+ (void)birthCurrentPregnancy:(id)arg1;
+ (void)endCurrentPregnancy:(id)arg1;
+ (id)getLastPregnancyEndWithDate:(id)arg1;
+ (id)getLastPregnancyEnd;
+ (id)getLastPregnancyDueDateWithDate:(id)arg1;
+ (id)getLastPregnancyDueDate;
+ (void)autoEndPregnance;
+ (id)getBabySymptomImageIconWithType:(unsigned long long)arg1;
+ (id)getBabySymptomNameWithType:(unsigned long long)arg1;
+ (id)getLoveRecordString:(id)arg1;
+ (id)getBabySymptomShowSortFlags;
+ (id)getBabySymptomTypeNames;
+ (id)getSymptomShowSortFlags;
+ (id)getSymptomTypeNames;
+ (id)getSymptomImageIconWithType:(unsigned long long)arg1;
+ (id)getSymptomNameWithType:(unsigned long long)arg1;
+ (id)getStringWithItem:(unsigned long long)arg1;
+ (id)getTongjingSymptomIcon:(unsigned long long)arg1;
+ (id)getPainSymptomString:(unsigned long long)arg1;
+ (id)getHabitImageNames;
+ (id)getImageNamesFromHabit:(long long)arg1;
+ (id)getStringWithHabit:(long long)arg1;
+ (id)getStringWithLeucorrhoea:(long long)arg1;
+ (id)getStringWithMood:(long long)arg1;
+ (id)getStringWithPain:(long long)arg1;
+ (id)getStringWithFlow:(long long)arg1;
+ (id)getImageWithOvulationPaper:(long long)arg1;
+ (id)getImageNameWithOvulationPaper:(long long)arg1;
+ (id)getStringWithOvulationPaper:(long long)arg1;
+ (id)getStringWithCervixViscosity:(long long)arg1;
+ (id)getImageNamesFromHealthRecord:(id)arg1;
+ (id)getImageNamesFromItemUps:(long long)arg1;
+ (id)getImageNamesFromItems:(long long)arg1;
+ (id)getImageNameFromItem:(long long)arg1;
+ (id)getTongjingSymptoms:(long long)arg1;
+ (id)getLoveControlStringWithType:(unsigned long long)arg1;
@property(nonatomic) __weak id <IMYDayRecordModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long baby_symptoms; // @synthesize baby_symptoms=_baby_symptoms;
@property(nonatomic) _Bool unUpLoadChange; // @synthesize unUpLoadChange=_unUpLoadChange;
@property(nonatomic) unsigned long long recordFlag; // @synthesize recordFlag=_recordFlag;
@property(retain, nonatomic) NSString *insertVersion; // @synthesize insertVersion=_insertVersion;
@property(retain, nonatomic) NSString *insertTime; // @synthesize insertTime=_insertTime;
@property _Bool syschMark; // @synthesize syschMark=_syschMark;
@property(copy, nonatomic) NSDictionary *diaryPhotoAssetUrls; // @synthesize diaryPhotoAssetUrls=_diaryPhotoAssetUrls;
@property(copy, nonatomic) NSString *diaryPhoto; // @synthesize diaryPhoto=_diaryPhoto;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) long long moodType; // @synthesize moodType=_moodType;
@property(nonatomic) _Bool autoSleepSet; // @synthesize autoSleepSet=_autoSleepSet;
@property(nonatomic) double sleepTime; // @synthesize sleepTime=_sleepTime;
@property unsigned long long habit; // @synthesize habit=_habit;
@property unsigned long long items; // @synthesize items=_items;
@property(copy, nonatomic) NSArray *selfdefine_symptoms; // @synthesize selfdefine_symptoms=_selfdefine_symptoms;
@property unsigned long long symptomType; // @synthesize symptomType=_symptomType;
@property double temperature; // @synthesize temperature=_temperature;
@property double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *loveRecordJson; // @synthesize loveRecordJson=_loveRecordJson;
@property(nonatomic) long long isControl; // @synthesize isControl=_isControl;
@property _Bool isRoom; // @synthesize isRoom=_isRoom;
@property long long leucorrhoea; // @synthesize leucorrhoea=_leucorrhoea;
@property(nonatomic) long long dipstick; // @synthesize dipstick=_dipstick;
@property long long ovulationPaper; // @synthesize ovulationPaper=_ovulationPaper;
@property unsigned long long pregnancy; // @synthesize pregnancy=_pregnancy;
@property long long flowType; // @synthesize flowType=_flowType;
@property(nonatomic) unsigned long long dysmenorrheaV2; // @synthesize dysmenorrheaV2=_dysmenorrheaV2;
@property long long painType; // @synthesize painType=_painType;
@property _Bool isEnd; // @synthesize isEnd=_isEnd;
@property _Bool isBegin; // @synthesize isBegin=_isBegin;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (_Bool)saveToDB;
- (void)resetHasChangeProperty;
- (_Bool)hasChangeProperty;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addPropertyChangeListener;
- (void)dealloc;
- (id)init;
- (int)getNewControl;
- (id)getBabySymptomsString;
- (id)getSymptomsString;
- (id)getItemsString;
- (id)getWeightString;
- (id)getTemperatureString;
- (id)getLoveString;
- (id)getMensesString;
- (id)getOvulationPaperString;
- (id)getCervixViscosityString;
- (id)getTongjingSymptoms;
- (id)getLoveControlString;
- (id)getDateWeekString;
- (id)getDateNongliMDString;

@end
