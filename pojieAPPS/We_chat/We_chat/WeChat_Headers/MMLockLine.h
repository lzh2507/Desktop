//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMLockLine : NSObject
{
    _Bool _isFullPath;
    struct CGPoint _fromPoint;
    struct CGPoint _toPoint;
}

@property(nonatomic) _Bool isFullPath; // @synthesize isFullPath=_isFullPath;
@property(nonatomic) struct CGPoint toPoint; // @synthesize toPoint=_toPoint;
@property(nonatomic) struct CGPoint fromPoint; // @synthesize fromPoint=_fromPoint;
- (id)initWithFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 AndIsFullPath:(_Bool)arg3;

@end

