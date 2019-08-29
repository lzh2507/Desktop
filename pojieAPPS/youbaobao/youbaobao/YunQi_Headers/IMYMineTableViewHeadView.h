//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYMineSectionModel, UIButton, UILabel;

@interface IMYMineTableViewHeadView : UIView
{
    UIButton *_headButton;
    UILabel *_headLabel;
    CDUnknownBlockType _block;
    IMYMineSectionModel *_sModel;
}

+ (double)heightOfMineTableViewHeadView:(id)arg1;
@property(retain, nonatomic) IMYMineSectionModel *sModel; // @synthesize sModel=_sModel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(retain, nonatomic) UIButton *headButton; // @synthesize headButton=_headButton;
- (void).cxx_destruct;
- (void)setMineSectionModel:(id)arg1;
- (void)setMineHeadViewTappedBlock:(CDUnknownBlockType)arg1;
- (void)commonInitWithMineSectionModel:(id)arg1;
- (id)initWithHeight:(double)arg1;
- (id)initWithMineSectionModel:(id)arg1 tapBlock:(CDUnknownBlockType)arg2;

@end
