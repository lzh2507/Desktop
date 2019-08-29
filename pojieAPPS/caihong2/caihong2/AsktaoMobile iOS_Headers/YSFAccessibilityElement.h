//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class UIView;

@interface YSFAccessibilityElement : UIAccessibilityElement
{
    UIView *_parentView;
    struct CGPoint _localCoordinateAccessibilityActivationPoint;
    struct CGRect _localCoordinateAccessibilityFrame;
}

@property(nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) struct CGPoint localCoordinateAccessibilityActivationPoint; // @synthesize localCoordinateAccessibilityActivationPoint=_localCoordinateAccessibilityActivationPoint;
@property(nonatomic) struct CGRect localCoordinateAccessibilityFrame; // @synthesize localCoordinateAccessibilityFrame=_localCoordinateAccessibilityFrame;
- (struct CGPoint)accessibilityActivationPoint;
- (struct CGRect)accessibilityFrame;
- (id)initWithParentView:(id)arg1;

@end

