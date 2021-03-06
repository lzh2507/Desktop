//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, YBBToolsOvulateTablePageVM;

@interface YBBToolsOvulateVM : NSObject
{
    _Bool _hasBeforeFistPeriodOvualte;
    _Bool _isUsed;
    NSMutableArray *_periodsArray;
    NSArray *_dateRangeArray;
    NSMutableArray *_pagesArray;
    long long _startDate;
    long long _endDate;
    long long _fakeStartDate;
    long long _fakeEndDate;
    YBBToolsOvulateTablePageVM *_currentPageVM;
}

@property(retain, nonatomic) YBBToolsOvulateTablePageVM *currentPageVM; // @synthesize currentPageVM=_currentPageVM;
@property(nonatomic) long long fakeEndDate; // @synthesize fakeEndDate=_fakeEndDate;
@property(nonatomic) long long fakeStartDate; // @synthesize fakeStartDate=_fakeStartDate;
@property(nonatomic) long long endDate; // @synthesize endDate=_endDate;
@property(nonatomic) long long startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool isUsed; // @synthesize isUsed=_isUsed;
@property(nonatomic) _Bool hasBeforeFistPeriodOvualte; // @synthesize hasBeforeFistPeriodOvualte=_hasBeforeFistPeriodOvualte;
@property(retain, nonatomic) NSMutableArray *pagesArray; // @synthesize pagesArray=_pagesArray;
@property(retain, nonatomic) NSArray *dateRangeArray; // @synthesize dateRangeArray=_dateRangeArray;
@property(retain, nonatomic) NSMutableArray *periodsArray; // @synthesize periodsArray=_periodsArray;
- (void).cxx_destruct;
- (id)addOvulateJudgeWithDate:(id)arg1 currentPageIndex:(long long)arg2;
- (void)iOS8AlbumNotAvailable;
- (void)iOS8CameraNotAvailable;
- (id)updateDateRangeWithDate:(id)arg1 pageIndex:(long long)arg2;
- (id)periodStringWithDate:(id)arg1 pageVM:(id)arg2;
- (id)currentPeriodStringAtIndex:(long long)arg1;
- (unsigned long long)ovualtePositionWithDate:(id)arg1;
- (long long)periodPageWithDate:(id)arg1;
- (id)pageVMAtIndex:(long long)arg1;
- (void)periodChangeAction;
- (void)initData;
- (id)init;

@end

