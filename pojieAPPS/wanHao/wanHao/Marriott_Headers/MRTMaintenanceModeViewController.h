//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MRTMaintenanceModeViewController-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIScrollView;

@interface MRTMaintenanceModeViewController : UIViewController <MRTMaintenanceModeViewController>
{
    _Bool _currentlyChecking;
    UIImageView *_logoView;
    UIScrollView *_scrollView;
    UILabel *_maintenanceHeaderLabel;
    UILabel *_maintenanceTextLabel;
    UIButton *_openWebsiteButton;
    UIButton *_openDoorButton;
}

@property(retain, nonatomic) UIButton *openDoorButton; // @synthesize openDoorButton=_openDoorButton;
@property(retain, nonatomic) UIButton *openWebsiteButton; // @synthesize openWebsiteButton=_openWebsiteButton;
@property(retain, nonatomic) UILabel *maintenanceTextLabel; // @synthesize maintenanceTextLabel=_maintenanceTextLabel;
@property(retain, nonatomic) UILabel *maintenanceHeaderLabel; // @synthesize maintenanceHeaderLabel=_maintenanceHeaderLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) _Bool currentlyChecking; // @synthesize currentlyChecking=_currentlyChecking;
- (void).cxx_destruct;
- (id)retryTitle;
- (id)openDoorTitle;
- (id)bookPhoneTitle;
- (id)openWebsiteURL;
- (id)openWebsiteTitle;
- (id)maintenanceCheckingString;
- (id)maintenanceTitleString;
- (void)dismissMaintenanceMode;
- (void)checkStatus:(id)arg1;
- (void)unlockDoor:(id)arg1;
- (void)openWebsite:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

