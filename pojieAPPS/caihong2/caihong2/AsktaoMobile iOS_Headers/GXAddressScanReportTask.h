//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GXTaskItem.h"

@class NSData, NSString;

@interface GXAddressScanReportTask : GXTaskItem
{
    NSData *_reportData;
    NSString *_rdid;
}

+ (void)scheduleWithReportData:(id)arg1 andRdid:(id)arg2;
+ (_Bool)isTimeForCycle;
+ (id)buildPostBodyWithClientId:(id)arg1 andAppId:(id)arg2 andUserInfo:(id)arg3;
@property(retain, nonatomic) NSString *rdid; // @synthesize rdid=_rdid;
@property(retain, nonatomic) NSData *reportData; // @synthesize reportData=_reportData;
- (void).cxx_destruct;
- (void)onTimerForQueue:(id)arg1;
- (_Bool)handleResultData:(id)arg1;
- (id)formatRequestUrl;
- (void)dealloc;
- (id)initWithReportData:(id)arg1 andRdid:(id)arg2;

@end

