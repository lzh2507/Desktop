//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MRTPickListField, MRTStyledButton, MRTStyledTextField, UIActivityIndicatorView, UIButton, UILabel, UIScrollView, UIStackView, UIView;
@protocol _TtP8Marriott43MRTForgotMemberNumberViewControllerDelegate_;

@interface _TtC8Marriott35MRTForgotMemberNumberViewController : UIViewController
{
    // Error parsing type: , name: countryLabel
    // Error parsing type: , name: emailLabel
    // Error parsing type: , name: firstNameLabel
    // Error parsing type: , name: formInstructionsLabel
    // Error parsing type: , name: lastNameLabel
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: countryPickListField
    // Error parsing type: , name: emailTextField
    // Error parsing type: , name: nameStackView
    // Error parsing type: , name: firstNameContainerView
    // Error parsing type: , name: lastNameContainerView
    // Error parsing type: , name: firstNameTextField
    // Error parsing type: , name: lastNameTextField
    // Error parsing type: , name: dismissButton
    // Error parsing type: , name: submitButton
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: activityIndicatorView
    // Error parsing type: , name: bottomView
    // Error parsing type: , name: forgotMemberNumber
    // Error parsing type: , name: delegate
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)submitButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)dismissButtonTapped:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak id <_TtP8Marriott43MRTForgotMemberNumberViewControllerDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak MRTStyledButton *submitButton; // @synthesize submitButton;
@property(nonatomic) __weak UIButton *dismissButton; // @synthesize dismissButton;
@property(nonatomic) __weak MRTStyledTextField *lastNameTextField; // @synthesize lastNameTextField;
@property(nonatomic) __weak MRTStyledTextField *firstNameTextField; // @synthesize firstNameTextField;
@property(nonatomic) __weak UIView *lastNameContainerView; // @synthesize lastNameContainerView;
@property(nonatomic) __weak UIView *firstNameContainerView; // @synthesize firstNameContainerView;
@property(nonatomic) __weak UIStackView *nameStackView; // @synthesize nameStackView;
@property(nonatomic) __weak MRTStyledTextField *emailTextField; // @synthesize emailTextField;
@property(nonatomic) __weak MRTPickListField *countryPickListField; // @synthesize countryPickListField;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UILabel *lastNameLabel; // @synthesize lastNameLabel;
@property(nonatomic) __weak UILabel *formInstructionsLabel; // @synthesize formInstructionsLabel;
@property(nonatomic) __weak UILabel *firstNameLabel; // @synthesize firstNameLabel;
@property(nonatomic) __weak UILabel *emailLabel; // @synthesize emailLabel;
@property(nonatomic) __weak UILabel *countryLabel; // @synthesize countryLabel;

@end
