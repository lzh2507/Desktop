//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseTableViewCell.h"

@class IMYCapsuleButton, IMYIconImageView, UILabel;
@protocol IMYNewsMPNRecommendUserCellDelegate;

@interface IMYNewsMPNRecommendUserCell : IMYBaseTableViewCell
{
    id <IMYNewsMPNRecommendUserCellDelegate> _delegate;
    IMYIconImageView *_iconImgView;
    UILabel *_nameLabel;
    UILabel *_userTypeLabel;
    UILabel *_desLabel;
    UILabel *_dynamicsLabel;
    UILabel *_fansLabel;
    IMYCapsuleButton *_forucsButton;
}

@property(retain, nonatomic) IMYCapsuleButton *forucsButton; // @synthesize forucsButton=_forucsButton;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *dynamicsLabel; // @synthesize dynamicsLabel=_dynamicsLabel;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *userTypeLabel; // @synthesize userTypeLabel=_userTypeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) IMYIconImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(nonatomic) __weak id <IMYNewsMPNRecommendUserCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unfollowBtn;
- (void)followBtn;
- (id)fansStr:(id)arg1;
- (id)dynamicStr:(id)arg1;
- (void)setCellModel:(id)arg1;
- (void)prepareUI;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

