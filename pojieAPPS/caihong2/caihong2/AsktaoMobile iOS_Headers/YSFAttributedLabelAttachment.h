//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YSFAttributedLabelAttachment : NSObject
{
    int _alignment;
    id _content;
    double _fontAscent;
    double _fontDescent;
    struct CGSize _maxSize;
    struct UIEdgeInsets _margin;
}

+ (id)attachmentWith:(id)arg1 margin:(struct UIEdgeInsets)arg2 alignment:(int)arg3 maxSize:(struct CGSize)arg4;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) double fontDescent; // @synthesize fontDescent=_fontDescent;
@property(nonatomic) double fontAscent; // @synthesize fontAscent=_fontAscent;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(retain, nonatomic) id content; // @synthesize content=_content;
- (void).cxx_destruct;
- (struct CGSize)attachmentSize;
- (struct CGSize)calculateContentSize;
- (struct CGSize)boxSize;

@end

