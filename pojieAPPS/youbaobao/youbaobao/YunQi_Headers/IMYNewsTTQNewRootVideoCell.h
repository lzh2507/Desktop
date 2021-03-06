//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYNewsTTQRootVideoCell.h"

@class IMYAvatarImageView, UIImageView, UILabel;

@interface IMYNewsTTQNewRootVideoCell : IMYNewsTTQRootVideoCell
{
    IMYAvatarImageView *_avatarImageView;
    UIImageView *_vipIcon;
    UILabel *_nameLabel;
    UILabel *_dateLabel;
    UILabel *_commentsLabel;
    UILabel *_praseLabel;
}

@property(retain, nonatomic) UILabel *praseLabel; // @synthesize praseLabel=_praseLabel;
@property(retain, nonatomic) UILabel *commentsLabel; // @synthesize commentsLabel=_commentsLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *vipIcon; // @synthesize vipIcon=_vipIcon;
@property(retain, nonatomic) IMYAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1;
- (void)updateNewsConstraints:(_Bool)arg1 is3line:(_Bool)arg2;
- (void)updateNewsConstraints:(_Bool)arg1;
- (void)updateNewsRecordConstraints:(_Bool)arg1;
- (id)attributeStringForCount:(long long)arg1 isComment:(_Bool)arg2;
- (id)countString:(long long)arg1 isComment:(_Bool)arg2;
- (void)makeConstraints;
- (void)initSubviews;
- (void)prepareUI;

@end

