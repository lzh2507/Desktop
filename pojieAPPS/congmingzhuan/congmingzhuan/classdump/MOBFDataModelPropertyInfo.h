//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMethodSignature, NSString;

@interface MOBFDataModelPropertyInfo : NSObject
{
    NSString *_name;
    NSString *_type;
    NSString *_className;
    SEL _setterSelector;
    SEL _getterSelector;
    NSMethodSignature *_setterMethodSignature;
    NSMethodSignature *_getterMethodSignature;
}

@property(retain, nonatomic) NSMethodSignature *getterMethodSignature; // @synthesize getterMethodSignature=_getterMethodSignature;
@property(retain, nonatomic) NSMethodSignature *setterMethodSignature; // @synthesize setterMethodSignature=_setterMethodSignature;
@property(nonatomic) SEL getterSelector; // @synthesize getterSelector=_getterSelector;
@property(nonatomic) SEL setterSelector; // @synthesize setterSelector=_setterSelector;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
