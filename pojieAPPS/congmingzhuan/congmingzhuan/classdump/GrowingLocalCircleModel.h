//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/GrowingBaseModel.h>

@class NSArray, NSMutableArray;

@interface GrowingLocalCircleModel : GrowingBaseModel
{
    NSMutableArray *_allTagsArray;
}

@property(retain, nonatomic) NSMutableArray *allTagsArray; // @synthesize allTagsArray=_allTagsArray;
- (void).cxx_destruct;
- (id)getH5TagedName:(id)arg1;
- (id)getControllerTagedName:(id)arg1;
- (void)postWSUrl:(id)arg1 pairKey:(id)arg2 succeed:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (void)requestValueCountsByElement:(id)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)fetchXRank:(id)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)viewTagByAPIPath:(id)arg1 httpMethod:(id)arg2 eventType:(id)arg3 id:(id)arg4 name:(id)arg5 origElement:(id)arg6 filterElement:(id)arg7 viewImage:(id)arg8 screenImage:(id)arg9 viewRect:(struct CGRect)arg10 succeed:(CDUnknownBlockType)arg11 fail:(CDUnknownBlockType)arg12;
- (void)addOrUpdateTagById:(id)arg1 name:(id)arg2 origElement:(id)arg3 filterElement:(id)arg4 viewImage:(id)arg5 screenImage:(id)arg6 viewRect:(struct CGRect)arg7 succeed:(CDUnknownBlockType)arg8 fail:(CDUnknownBlockType)arg9;
- (void)realTimeDataByElement:(id)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)realTimeViewByElement:(id)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)requestAllTagItemsSucceed:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (void)addNewTag:(id)arg1;
- (void)cacheAllTags:(id)arg1;
@property(readonly, nonatomic) NSArray *cacheTagItems;
- (_Bool)authorityErrorHandle:(CDUnknownBlockType)arg1;
- (void)authorityVerification:(id)arg1;

@end

