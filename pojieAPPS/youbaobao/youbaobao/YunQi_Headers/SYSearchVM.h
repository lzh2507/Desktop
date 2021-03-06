//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString;

@interface SYSearchVM : NSObject
{
    _Bool _bFromQuanzi;
    _Bool _popAnimated;
    long long _forumId;
    NSString *_keyword;
    NSError *_error;
    NSArray *_tabs;
    unsigned long long _from;
    long long _index;
    unsigned long long _biType;
    NSString *_saveKey;
    NSString *_searchSuggestWordKey;
    NSDictionary *_searchSuggestWords;
    unsigned long long _biSource;
}

@property(nonatomic) unsigned long long biSource; // @synthesize biSource=_biSource;
@property(copy, nonatomic) NSDictionary *searchSuggestWords; // @synthesize searchSuggestWords=_searchSuggestWords;
@property(copy, nonatomic) NSString *searchSuggestWordKey; // @synthesize searchSuggestWordKey=_searchSuggestWordKey;
@property(copy, nonatomic) NSString *saveKey; // @synthesize saveKey=_saveKey;
@property(nonatomic) _Bool popAnimated; // @synthesize popAnimated=_popAnimated;
@property(nonatomic) unsigned long long biType; // @synthesize biType=_biType;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long from; // @synthesize from=_from;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) _Bool bFromQuanzi; // @synthesize bFromQuanzi=_bFromQuanzi;
@property(nonatomic) long long forumId; // @synthesize forumId=_forumId;
- (void).cxx_destruct;
- (void)searchWordStatic:(id)arg1 type:(unsigned long long)arg2 location:(unsigned long long)arg3;
- (id)init;
- (id)initWithKeyword:(id)arg1;
- (void)gotoAskResultWithKeyword:(id)arg1 wordId:(long long)arg2 askType:(unsigned long long)arg3 BIType:(unsigned long long)arg4 index:(long long)arg5;
- (id)reqSearchSuggestWordKey;

@end

