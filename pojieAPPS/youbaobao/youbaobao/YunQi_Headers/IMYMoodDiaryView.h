//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYPageView.h"

#import "IMYImagePickerControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class IMYDayRecordModel, IMYRM80AttributedLabel, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UITextView, UIView, UIViewController;

@interface IMYMoodDiaryView : SYPageView <IMYImagePickerControllerDelegate, UITextViewDelegate>
{
    _Bool _isImageSaving;
    _Bool _isAnimating;
    _Bool _isOpened;
    float _heightDiff;
    UIViewController *_parentViewController;
    IMYDayRecordModel *_recordModel;
    NSMutableArray *_imageNames;
    UIImageView *_img_content_bg;
    UITextView *_txt_content;
    UIImageView *_img_action_bar;
    UILabel *_lb_date;
    UILabel *_lb_week;
    UILabel *_lb_nongli;
    UIButton *_bt_photo;
    UIButton *_bt_items;
    NSArray *_imageViews;
    long long _dtLabelStringHash;
    UIView *_showItemsView;
    UIView *_showImagesView;
    NSArray *_itemShowFlags;
    NSArray *_itemShowImages;
    IMYRM80AttributedLabel *_drawView;
    NSMutableDictionary *_assetUrls;
    NSMutableArray *_noAssetPhotoNames;
    UIView *_paperView;
}

+ (id)normalizedImage:(id)arg1;
+ (id)imageWithImage:(id)arg1 scaledToWidth:(double)arg2;
+ (float)heightForTextViewString:(id)arg1 font:(id)arg2 width:(float)arg3;
+ (id)imy_loadFromXIB;
+ (void)initialize;
@property(retain, nonatomic) UIView *paperView; // @synthesize paperView=_paperView;
@property(retain, nonatomic) NSMutableArray *noAssetPhotoNames; // @synthesize noAssetPhotoNames=_noAssetPhotoNames;
@property(retain, nonatomic) NSMutableDictionary *assetUrls; // @synthesize assetUrls=_assetUrls;
@property(retain, nonatomic) IMYRM80AttributedLabel *drawView; // @synthesize drawView=_drawView;
@property(retain, nonatomic) NSArray *itemShowImages; // @synthesize itemShowImages=_itemShowImages;
@property(retain, nonatomic) NSArray *itemShowFlags; // @synthesize itemShowFlags=_itemShowFlags;
@property _Bool isOpened; // @synthesize isOpened=_isOpened;
@property _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIView *showImagesView; // @synthesize showImagesView=_showImagesView;
@property(retain, nonatomic) UIView *showItemsView; // @synthesize showItemsView=_showItemsView;
@property float heightDiff; // @synthesize heightDiff=_heightDiff;
@property long long dtLabelStringHash; // @synthesize dtLabelStringHash=_dtLabelStringHash;
@property _Bool isImageSaving; // @synthesize isImageSaving=_isImageSaving;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) __weak UIButton *bt_items; // @synthesize bt_items=_bt_items;
@property(nonatomic) __weak UIButton *bt_photo; // @synthesize bt_photo=_bt_photo;
@property(nonatomic) __weak UILabel *lb_nongli; // @synthesize lb_nongli=_lb_nongli;
@property(nonatomic) __weak UILabel *lb_week; // @synthesize lb_week=_lb_week;
@property(nonatomic) __weak UILabel *lb_date; // @synthesize lb_date=_lb_date;
@property(nonatomic) __weak UIImageView *img_action_bar; // @synthesize img_action_bar=_img_action_bar;
@property(nonatomic) __weak UITextView *txt_content; // @synthesize txt_content=_txt_content;
@property(nonatomic) __weak UIImageView *img_content_bg; // @synthesize img_content_bg=_img_content_bg;
@property(retain, nonatomic) NSMutableArray *imageNames; // @synthesize imageNames=_imageNames;
@property(retain, nonatomic) IMYDayRecordModel *recordModel; // @synthesize recordModel=_recordModel;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (void)closeShowBarWithTime:(double)arg1 contentHeight:(float)arg2;
- (void)closeShowBar;
- (void)openShowBarWithView:(id)arg1;
- (void)tapImageViewAtIndex:(unsigned long long)arg1 view:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)imagePickerController:(id)arg1 didSelectAssets:(id)arg2;
- (void)photo_action;
- (void)bt_mood_action:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)removeNewLine:(id)arg1;
- (void)saveModelHasChanged;
- (void)refreshShowImageViews;
- (void)refreshTextContentItem:(_Bool)arg1 Image:(_Bool)arg2;
- (void)refreshTextContent;
- (void)refreshShowItemViews;
- (long long)getShowUpFlag:(int)arg1;
- (void)refreshRecordModel;
- (void)showDTDrawView;
- (void)showDTLabel:(long long)arg1 string:(id)arg2;
- (void)keyboardHide;
- (void)keyboardShow;
- (void)checkModelShowButtonStatus;
- (void)drawPaper;
- (id)mixImageWithBackgroundImage:(id)arg1 coverImage:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

