//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYYQHomeTaskRecordBaseModel : NSObject
{
    _Bool _didUpdate;
    _Bool _isDelete;
    NSString *_taskId;
    long long _finishTime;
}

+ (id)getPrimaryKeyUnionArray;
+ (id)getTableName;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) _Bool didUpdate; // @synthesize didUpdate=_didUpdate;
@property(nonatomic) long long finishTime; // @synthesize finishTime=_finishTime;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;

@end

