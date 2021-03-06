//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRTReservation, UIViewController, _TtC8Marriott43MRTAttachReservationSignedOutViewController;
@protocol MRTAttachReservationUserFlowDelegate;

@interface MRTAttachReservationUserFlow : NSObject
{
    _Bool _hasShownJoinNameMismatchMessage;
    id <MRTAttachReservationUserFlowDelegate> _delegate;
    CDUnknownBlockType _featureNotEnabledBlock;
    _TtC8Marriott43MRTAttachReservationSignedOutViewController *_attachViewController;
    UIViewController *_parentViewController;
    MRTReservation *_reservation;
}

+ (id)unrecognizedErrorsTextForConsumer:(id)arg1;
+ (id)namesDoNotMatchErrorText;
+ (id)reservationErrorSorryTitle;
+ (id)reservationSuccessMessage;
+ (_Bool)doesReservationGuestName:(id)arg1 matchConsumerName:(id)arg2;
+ (void)performAttachReservation:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool hasShownJoinNameMismatchMessage; // @synthesize hasShownJoinNameMismatchMessage=_hasShownJoinNameMismatchMessage;
@property(retain, nonatomic) MRTReservation *reservation; // @synthesize reservation=_reservation;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak _TtC8Marriott43MRTAttachReservationSignedOutViewController *attachViewController; // @synthesize attachViewController=_attachViewController;
@property(copy, nonatomic) CDUnknownBlockType featureNotEnabledBlock; // @synthesize featureNotEnabledBlock=_featureNotEnabledBlock;
@property(nonatomic) __weak id <MRTAttachReservationUserFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)preJoinNamesDoNotMatchErrorText;
- (id)continueButtonTitle;
- (id)dismissButtonTitle;
- (_Bool)isSignedIn;
- (void)showJoinNameMismatchMessageWithCompletion:(CDUnknownBlockType)arg1;
- (void)userFlowDidEndAttachReservation;
- (void)userFlowDidBeginAttachReservation;
- (void)presentSignInViewController;
- (void)presentJoinNowViewController;
- (void)dismissSignedOutViewController;
- (void)presentSignedOutViewController;
- (void)start;
- (id)initWithParentViewController:(id)arg1 reservation:(id)arg2;

@end

