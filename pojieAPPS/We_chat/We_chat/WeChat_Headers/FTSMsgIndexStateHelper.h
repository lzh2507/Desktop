//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FTSMsgIndexStateHelper : NSObject
{
    int _taskId;
    _Bool _hasNewMsgTask;
    _Bool _hasOldMsgTask;
    _Bool _hasDeleteTask;
    NSArray *_arrSession;
    NSDictionary *_dicSessionMaxId;
}

@property(nonatomic) _Bool hasDeleteTask; // @synthesize hasDeleteTask=_hasDeleteTask;
@property(nonatomic) _Bool hasOldMsgTask; // @synthesize hasOldMsgTask=_hasOldMsgTask;
@property(nonatomic) _Bool hasNewMsgTask; // @synthesize hasNewMsgTask=_hasNewMsgTask;
@property(retain, nonatomic) NSDictionary *dicSessionMaxId; // @synthesize dicSessionMaxId=_dicSessionMaxId;
@property(retain, nonatomic) NSArray *arrSession; // @synthesize arrSession=_arrSession;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasFinishAllTask;
- (id)init;

@end

