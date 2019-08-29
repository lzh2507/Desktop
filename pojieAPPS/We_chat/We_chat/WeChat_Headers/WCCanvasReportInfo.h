//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSDictionary, NSString;

@interface WCCanvasReportInfo : MMObject
{
    unsigned int _entranceType;
    unsigned int _exitType;
    unsigned int _entranceScene;
    unsigned int _entranceCanvasCount;
    unsigned int _entranceSameCanvasCount;
    unsigned int _enableSwipeRight;
    unsigned int _swipeRightCount;
    unsigned int _componentCount;
    unsigned int _shareSnsCount;
    unsigned int _shareFriendCount;
    unsigned int _favCount;
    unsigned int _originScene;
    NSString *_snsId;
    NSString *_uxInfo;
    unsigned long long _stayTime;
    NSString *_componentsStatStr;
    unsigned long long _enterTimeStamp;
    NSString *_snsStatExt;
    NSString *_expId;
    NSDictionary *_extraInfo;
    unsigned long long _canvasId;
}

@property(nonatomic) unsigned long long canvasId; // @synthesize canvasId=_canvasId;
@property(nonatomic) unsigned int originScene; // @synthesize originScene=_originScene;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *expId; // @synthesize expId=_expId;
@property(retain, nonatomic) NSString *snsStatExt; // @synthesize snsStatExt=_snsStatExt;
@property(nonatomic) unsigned long long enterTimeStamp; // @synthesize enterTimeStamp=_enterTimeStamp;
@property(retain, nonatomic) NSString *componentsStatStr; // @synthesize componentsStatStr=_componentsStatStr;
@property(nonatomic) unsigned int favCount; // @synthesize favCount=_favCount;
@property(nonatomic) unsigned int shareFriendCount; // @synthesize shareFriendCount=_shareFriendCount;
@property(nonatomic) unsigned int shareSnsCount; // @synthesize shareSnsCount=_shareSnsCount;
@property(nonatomic) unsigned long long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned int componentCount; // @synthesize componentCount=_componentCount;
@property(nonatomic) unsigned int swipeRightCount; // @synthesize swipeRightCount=_swipeRightCount;
@property(nonatomic) unsigned int enableSwipeRight; // @synthesize enableSwipeRight=_enableSwipeRight;
@property(nonatomic) unsigned int entranceSameCanvasCount; // @synthesize entranceSameCanvasCount=_entranceSameCanvasCount;
@property(nonatomic) unsigned int entranceCanvasCount; // @synthesize entranceCanvasCount=_entranceCanvasCount;
@property(nonatomic) unsigned int entranceScene; // @synthesize entranceScene=_entranceScene;
@property(nonatomic) unsigned int exitType; // @synthesize exitType=_exitType;
@property(nonatomic) unsigned int entranceType; // @synthesize entranceType=_entranceType;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
- (void).cxx_destruct;
- (id)genStatString;
- (id)init;

@end
