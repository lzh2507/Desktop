//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface IMYAlertViewDelegateManager : NSObject
{
    NSMapTable *_mapTable;
}

+ (id)shareManager;
@property(retain, nonatomic) NSMapTable *mapTable; // @synthesize mapTable=_mapTable;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (CDUnknownBlockType)handlerForAlertView:(id)arg1;
- (void)setAlertView:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

