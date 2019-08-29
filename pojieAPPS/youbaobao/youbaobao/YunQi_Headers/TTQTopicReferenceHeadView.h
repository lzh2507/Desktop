//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ReactiveTableViewCell-Protocol.h"

@class NSString, TTQReferenceCommentModel, TTQTopicDetailCell, TTQTopicReferenceLinkView;

@interface TTQTopicReferenceHeadView : UIView <ReactiveTableViewCell>
{
    TTQTopicDetailCell *_topicDetailCell;
    TTQTopicReferenceLinkView *_linkView;
    TTQReferenceCommentModel *_referenceComment;
}

@property(retain, nonatomic) TTQReferenceCommentModel *referenceComment; // @synthesize referenceComment=_referenceComment;
@property(retain, nonatomic) TTQTopicReferenceLinkView *linkView; // @synthesize linkView=_linkView;
@property(retain, nonatomic) TTQTopicDetailCell *topicDetailCell; // @synthesize topicDetailCell=_topicDetailCell;
- (void).cxx_destruct;
- (void)setTopOffset:(double)arg1;
- (double)contentHeight;
- (id)bindModel:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
