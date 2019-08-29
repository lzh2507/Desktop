//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HFAlgorithmHandle.h"

#import "HFManualFaceProtocol-Protocol.h"

@class NSString, UIImage;

@interface HFManualFaceHandle : HFAlgorithmHandle <HFManualFaceProtocol>
{
    struct ManualHandleBase *processor;
    float _radius;
    int _operation;
    float strength;
    struct CGRect _roi;
}

@property(nonatomic) float strength; // @synthesize strength;
@property(nonatomic) int operation; // @synthesize operation=_operation;
@property(nonatomic) struct CGRect roi; // @synthesize roi=_roi;
- (id)resultImage;
- (void)redo;
- (void)undo;
- (_Bool)canRedo;
- (_Bool)canUndo;
- (void)touchEndedAt:(struct CGPoint)arg1;
- (_Bool)touchMovedTo:(struct CGPoint)arg1;
- (void)touchBeganAt:(struct CGPoint)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)dealloc;
@property(nonatomic) float radius;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

