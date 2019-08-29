//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIImage;
@protocol spliterDelegate;

@interface ImageSplit : NSObject
{
    int subImgMaxRadius;
    UIImage *image;
    _Bool _stopFlag;
    int _horSegmentCount;
    int _verSegmentCount;
    int _ttImgWidth;
    int _ttImgHeight;
    int _subImgWidth;
    int _subImgHeight;
    NSMutableArray *_subImgArray;
    char *_pixels;
    id <spliterDelegate> _delegate;
}

@property _Bool stopFlag; // @synthesize stopFlag=_stopFlag;
@property(nonatomic) id <spliterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) char *pixels; // @synthesize pixels=_pixels;
@property(nonatomic) int subImgHeight; // @synthesize subImgHeight=_subImgHeight;
@property(nonatomic) int subImgWidth; // @synthesize subImgWidth=_subImgWidth;
@property(nonatomic) int ttImgHeight; // @synthesize ttImgHeight=_ttImgHeight;
@property(nonatomic) int ttImgWidth; // @synthesize ttImgWidth=_ttImgWidth;
@property(nonatomic) int verSegmentCount; // @synthesize verSegmentCount=_verSegmentCount;
@property(nonatomic) int horSegmentCount; // @synthesize horSegmentCount=_horSegmentCount;
@property(retain, nonatomic) NSMutableArray *subImgArray; // @synthesize subImgArray=_subImgArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clean;
- (void)readSubImgFromFile:(id)arg1;
- (void)writeSubImgToFile:(char *)arg1 andSubImg:(id)arg2;
- (void)calcSubImgWidthAndHeight;
- (char *)mergeSubImages;
- (void)splitImage:(id)arg1;
- (void)splitImage:(id)arg1 withRadius:(int)arg2;

@end

