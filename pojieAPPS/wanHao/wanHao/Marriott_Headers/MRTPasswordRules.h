//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class NSAttributedString, NSDictionary;

@interface MRTPasswordRules : MRTObject
{
    NSDictionary *_update;
    NSDictionary *_signup;
    NSAttributedString *_signupAttributedString;
    NSAttributedString *_updateAttributedString;
}

+ (id)_attributedStringFromRules:(id)arg1;
@property(copy, nonatomic) NSAttributedString *updateAttributedString; // @synthesize updateAttributedString=_updateAttributedString;
@property(copy, nonatomic) NSAttributedString *signupAttributedString; // @synthesize signupAttributedString=_signupAttributedString;
@property(copy, nonatomic) NSDictionary *signup; // @synthesize signup=_signup;
@property(copy, nonatomic) NSDictionary *update; // @synthesize update=_update;
- (void).cxx_destruct;

@end

