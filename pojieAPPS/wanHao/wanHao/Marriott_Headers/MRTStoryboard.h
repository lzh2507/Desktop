//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStoryboard.h>

@class NSMutableDictionary;

@interface MRTStoryboard : UIStoryboard
{
    NSMutableDictionary *_classMap;
}

+ (id)storyboardWithName:(id)arg1 bundle:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *classMap; // @synthesize classMap=_classMap;
- (void).cxx_destruct;
- (id)instantiateViewControllerWithIdentifier:(id)arg1;
- (void)substituteClass:(Class)arg1 forClass:(Class)arg2;

@end

