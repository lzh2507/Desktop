//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMIAppKinda : NSObject
{
    struct Handle<std::__1::shared_ptr<kinda::IAppKinda>> _cppRefHandle;
}

+ (id)getInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)networkChange:(id)arg1;
- (void)applicationWillTerminate;
- (void)applicationReceiveMemoryWarning;
- (void)applicationResignActive;
- (void)applicationBecomeActive;
- (void)applicationEnterForeground;
- (void)applicationEnterBackground;
- (void)notifyAllUseCases:(id)arg1;
- (_Bool)getIsPaying;
- (_Bool)isInAnyUseCase;
- (void)stopUseCase:(id)arg1;
- (id)startUseCase:(id)arg1 data:(id)arg2 callback:(id)arg3;
- (id)initWithCpp:(const shared_ptr_98d3ea10 *)arg1;

@end

