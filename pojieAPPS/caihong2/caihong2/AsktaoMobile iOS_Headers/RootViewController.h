//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MPVolumeView;

@interface RootViewController : UIViewController
{
    MPVolumeView *_volumeView;
}

@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
- (void)dealloc;
- (void)finishVolumeView;
- (void)showCapture:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;

@end

