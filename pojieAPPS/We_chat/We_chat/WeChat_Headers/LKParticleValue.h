//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LKParticleValue : NSObject
{
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> varMap;
    struct vector<RVar *, std::__1::allocator<RVar *>> vars;
    NSObject *_object;
    struct ROperation *_exp;
    double _num;
}

@property(nonatomic) double num; // @synthesize num=_num;
@property(nonatomic) struct ROperation *exp; // @synthesize exp=_exp;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)clone;
- (void)setVar:(double *)arg1 name:(id)arg2;
- (double)value;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

