//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface YSF_NIMDataTrackerConfig : NSObject
{
    NSDictionary *_serverConfig;
    NSDictionary *_categories;
}

@property(retain, nonatomic) NSDictionary *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSDictionary *serverConfig; // @synthesize serverConfig=_serverConfig;
- (void).cxx_destruct;
- (_Bool)shouldTrackCategory:(id)arg1;
- (id)keyByCategory:(id)arg1;
- (void)markCategoriesTracked:(id)arg1;
- (id)trackableCategories;
- (_Bool)trackable;
- (id)init;

@end

