//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (MRTAdditions)
+ (void)load;
- (void)_mrt_updatePreferredContentSizeWithScrollView:(id)arg1;
- (void)mrt_syncPreferredContentSizeWithScrollView:(id)arg1;
- (void)mrt_showViewController:(id)arg1 sender:(id)arg2 animated:(_Bool)arg3;
- (void)mrt_showViewController:(id)arg1 afterViewController:(id)arg2 sender:(id)arg3 animated:(_Bool)arg4;
- (void)mrt_presentConfirmationMessage:(id)arg1 continueBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)mrt_presentExternalURL:(id)arg1 delegate:(id)arg2;
- (void)mrt_presentCallToPhoneNumber:(id)arg1;
- (_Bool)mrt_isDescendantOfViewController:(id)arg1;
- (void)mrt_presentOvertopViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)mrt_topPresentedController;
- (unsigned long long)_mrt_swizzled_supportedInterfaceOrientations;
@end

