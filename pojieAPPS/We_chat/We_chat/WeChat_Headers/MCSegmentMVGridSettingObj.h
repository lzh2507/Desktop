//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MCSegmentMVGridSettingObj : NSObject
{
    NSArray *_canvasRectList;
    struct CGSize _canvasSize;
}

@property(retain, nonatomic) NSArray *canvasRectList; // @synthesize canvasRectList=_canvasRectList;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
- (void).cxx_destruct;
- (id)getPreferRenderIdsAndInputSize;
- (struct CGSize)getPreferRenderIdInputSize:(long long)arg1;
- (id)getAllRenderIds;
- (id)gridSettingRectWithRenderId:(int)arg1;
- (id)initWithDictionary:(id)arg1;

@end

