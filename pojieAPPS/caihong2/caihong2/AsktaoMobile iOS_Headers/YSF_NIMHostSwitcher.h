//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface YSF_NIMHostSwitcher : NSObject
{
    unsigned long long _type;
    NSArray *_hosts;
    NSString *_defaultHost;
    long long _index;
    long long _errTimes;
    long long _maxErrTimes;
}

+ (id)switcher:(unsigned long long)arg1 defaultHost:(id)arg2 maxErrTimes:(long long)arg3;
@property(nonatomic) long long maxErrTimes; // @synthesize maxErrTimes=_maxErrTimes;
@property(nonatomic) long long errTimes; // @synthesize errTimes=_errTimes;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *defaultHost; // @synthesize defaultHost=_defaultHost;
@property(retain, nonatomic) NSArray *hosts; // @synthesize hosts=_hosts;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)reportError:(_Bool)arg1;
- (id)description;
- (void)updateHosts:(id)arg1;
- (_Bool)outOfRange;
- (id)currentHost;

@end

