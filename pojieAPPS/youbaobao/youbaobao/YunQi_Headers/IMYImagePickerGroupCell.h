//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ALAssetsGroup, IMYAssetsGroupModel, IMYImagePickerThumbnailView, UIImageView, UILabel, UIView;

@interface IMYImagePickerGroupCell : UITableViewCell
{
    ALAssetsGroup *_assetsGroup;
    IMYAssetsGroupModel *_phAssetsGroup;
    UIImageView *_topImageView;
    UIImageView *_middleImageView;
    UIImageView *_bottomImageView;
    UIView *_imageContainerView;
    IMYImagePickerThumbnailView *_thumbnailView;
    UILabel *_nameLabel;
    UILabel *_countLabel;
}

@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) IMYImagePickerThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) UIImageView *middleImageView; // @synthesize middleImageView=_middleImageView;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) IMYAssetsGroupModel *phAssetsGroup; // @synthesize phAssetsGroup=_phAssetsGroup;
@property(retain, nonatomic) ALAssetsGroup *assetsGroup; // @synthesize assetsGroup=_assetsGroup;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

