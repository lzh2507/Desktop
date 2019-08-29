//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTCheckBox, MRTEditConsumerSubscriptionsModelElement, UILabel;

@interface MRTEditConsumerSubscriptionsDoubleChoiceTableViewCell : UITableViewCell
{
    MRTEditConsumerSubscriptionsModelElement *_element;
    UILabel *_headerLabel;
    UILabel *_contentLabel;
    UILabel *_choice1Label;
    UILabel *_choice2Label;
    MRTCheckBox *_choice1CheckBox;
    MRTCheckBox *_choice2CheckBox;
}

@property(nonatomic) __weak MRTCheckBox *choice2CheckBox; // @synthesize choice2CheckBox=_choice2CheckBox;
@property(nonatomic) __weak MRTCheckBox *choice1CheckBox; // @synthesize choice1CheckBox=_choice1CheckBox;
@property(nonatomic) __weak UILabel *choice2Label; // @synthesize choice2Label=_choice2Label;
@property(nonatomic) __weak UILabel *choice1Label; // @synthesize choice1Label=_choice1Label;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) MRTEditConsumerSubscriptionsModelElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)tapChoiceSwitch2:(id)arg1;
- (void)tapChoiceSwitch1:(id)arg1;
- (void)inject:(id)arg1;
- (void)awakeFromNib;

@end
