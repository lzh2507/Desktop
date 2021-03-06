//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MRTAppNavigationPath, MRTStyledButton, NSLayoutConstraint, UIButton;

@interface MRTSignedOutViewController : UIViewController
{
    MRTStyledButton *_continueAsSignedOutUserButton;
    MRTStyledButton *_whyJoinButton;
    MRTStyledButton *_joinButton;
    MRTStyledButton *_signInButton;
    MRTStyledButton *_activateAccount;
    MRTStyledButton *_findReservation;
    UIButton *_propertyAttributionButton;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_middleMarginConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    MRTAppNavigationPath *_nextNavigationPath;
}

@property(retain, nonatomic) MRTAppNavigationPath *nextNavigationPath; // @synthesize nextNavigationPath=_nextNavigationPath;
@property(nonatomic) __weak NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property(nonatomic) __weak NSLayoutConstraint *middleMarginConstraint; // @synthesize middleMarginConstraint=_middleMarginConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
@property(nonatomic) __weak UIButton *propertyAttributionButton; // @synthesize propertyAttributionButton=_propertyAttributionButton;
@property(nonatomic) __weak MRTStyledButton *findReservation; // @synthesize findReservation=_findReservation;
@property(nonatomic) __weak MRTStyledButton *activateAccount; // @synthesize activateAccount=_activateAccount;
@property(nonatomic) __weak MRTStyledButton *signInButton; // @synthesize signInButton=_signInButton;
@property(nonatomic) __weak MRTStyledButton *joinButton; // @synthesize joinButton=_joinButton;
@property(nonatomic) __weak MRTStyledButton *whyJoinButton; // @synthesize whyJoinButton=_whyJoinButton;
@property(nonatomic) __weak MRTStyledButton *continueAsSignedOutUserButton; // @synthesize continueAsSignedOutUserButton=_continueAsSignedOutUserButton;
- (void).cxx_destruct;
- (void)navigateToPath:(id)arg1;
- (id)createActivateAccountButtonTitleString;
- (id)signedOutUserBookingUrl;
- (void)updateMarginConstraintsWithSize:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)showViewControllerAndNavigateIfNeeded:(id)arg1;
- (void)findReservationButtonTapped:(id)arg1;
- (void)activateAccountButtonTapped:(id)arg1;
- (void)whyJoinTapped:(id)arg1;
- (void)performContinueAsGuestAction;
- (void)propertyAttributionButtonTapped:(id)arg1;
- (void)continueAsSignedOutUserTapped:(id)arg1;
- (void)joinNowTapped:(id)arg1;
- (void)signInTapped:(id)arg1;
- (void)updateViewConfiguration;
- (void)showDebugView:(id)arg1;
- (void)mrt_oneButtonDidLandOnStartup;
- (id)viewControllerForAppNavigationIdentifier:(id)arg1;
- (id)imagePropertyIdentifier;
- (id)appNavigationIdentifier;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

