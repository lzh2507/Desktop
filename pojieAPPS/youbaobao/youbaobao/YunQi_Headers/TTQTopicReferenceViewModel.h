//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTopicBaseViewModel.h"

@class RACCommand, TTQCommentModel, TTQReferenceCommentModel;

@interface TTQTopicReferenceViewModel : TTQTopicBaseViewModel
{
    _Bool _isNewCommuity;
    _Bool _becomeFirstResponder;
    long long _forum_id;
    RACCommand *_replyCommand;
    TTQCommentModel *_commentModel;
    CDUnknownBlockType _commentResultBlock;
    TTQReferenceCommentModel *_referenced;
    long long _topicType;
}

@property(nonatomic) _Bool becomeFirstResponder; // @synthesize becomeFirstResponder=_becomeFirstResponder;
@property(nonatomic) _Bool isNewCommuity; // @synthesize isNewCommuity=_isNewCommuity;
@property(nonatomic) long long topicType; // @synthesize topicType=_topicType;
@property(retain, nonatomic) TTQReferenceCommentModel *referenced; // @synthesize referenced=_referenced;
@property(copy, nonatomic) CDUnknownBlockType commentResultBlock; // @synthesize commentResultBlock=_commentResultBlock;
@property(retain, nonatomic) TTQCommentModel *commentModel; // @synthesize commentModel=_commentModel;
- (void)setReplyCommand:(id)arg1;
- (void)setForum_id:(long long)arg1;
- (void).cxx_destruct;
- (id)identifierRowAtIndexPath:(id)arg1;
- (id)tableCellModelAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (_Bool)is_ask;
- (unsigned long long)topicUserID;
- (long long)forum_id;
- (_Bool)canAccess;
- (_Bool)canReply;
- (id)replyCommand;
- (id)requestRemoteDataForType:(long long)arg1 params:(id)arg2;
- (id)initWithTopicID:(long long)arg1 referenced_id:(long long)arg2;
- (id)init;

@end
