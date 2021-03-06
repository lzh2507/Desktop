//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MRTGuestFeedbackDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MRTPropertyNameDateModalHeaderView, MRTReservation, MRTServicesGuestFeedbackViewController, NSString, UITableView;

@interface MRTGuestFeedbackContainerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MRTGuestFeedbackDelegate>
{
    MRTReservation *_reservation;
    MRTServicesGuestFeedbackViewController *_guestFeedbackViewController;
    UITableView *_tableView;
    MRTPropertyNameDateModalHeaderView *_headerView;
}

@property(retain, nonatomic) MRTPropertyNameDateModalHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MRTServicesGuestFeedbackViewController *guestFeedbackViewController; // @synthesize guestFeedbackViewController=_guestFeedbackViewController;
@property(nonatomic) __weak MRTReservation *reservation; // @synthesize reservation=_reservation;
- (void).cxx_destruct;
- (void)cancelButtonTapped;
- (void)floatingButtonTapped;
- (void)refreshAfterSubmitError;
- (void)reloadGuestFeedbackViewLayout;
- (void)updateGuestFeedbackViewLayout;
- (void)oneButtonOverlayLayoutMarginsWillChange:(struct UIEdgeInsets)arg1;
- (void)updateView:(id)arg1 withLayoutMargins:(struct UIEdgeInsets)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_configureInsetModalController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

