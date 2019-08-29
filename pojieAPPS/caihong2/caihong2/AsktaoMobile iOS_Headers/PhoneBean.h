//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PhoneBean : NSObject
{
    _Bool _isBindPhone;
    NSString *_phone;
    NSString *_game;
    NSString *_sid;
    NSString *_cookie;
    NSString *_phoneActiveKey;
    NSString *_username;
    NSString *_mode;
}

@property(nonatomic) _Bool isBindPhone; // @synthesize isBindPhone=_isBindPhone;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *phoneActiveKey; // @synthesize phoneActiveKey=_phoneActiveKey;
@property(copy, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *game; // @synthesize game=_game;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void).cxx_destruct;
- (id)createUpgradeSendPhoneKeyPostParams;
- (id)createPhoneBindCookie;
- (id)createPhoneBindParams;
- (id)createGetPhoneBindMessageParams;
- (id)createCookie;
- (id)createBindPhoneGetKeyPostParams;
- (id)createCookie1;
- (id)createEmailRegisterWithPhoneKey;
- (id)createSendBindIdCardSMSPostParams;
- (id)createPostParams;

@end

