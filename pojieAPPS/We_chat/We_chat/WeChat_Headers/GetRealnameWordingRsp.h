//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, JumpRemind, NSMutableArray, NSString;

@interface GetRealnameWordingRsp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bindCardSubTitle; // @dynamic bindCardSubTitle;
@property(retain, nonatomic) NSString *bindCardTitle; // @dynamic bindCardTitle;
@property(retain, nonatomic) NSString *bindCardVerifyAlertViewContent; // @dynamic bindCardVerifyAlertViewContent;
@property(retain, nonatomic) NSString *bindCardVerifyAlertViewRightButtonText; // @dynamic bindCardVerifyAlertViewRightButtonText;
@property(retain, nonatomic) NSString *bindCardVerifySubtitle; // @dynamic bindCardVerifySubtitle;
@property(retain, nonatomic) NSString *bindCardVerifyTitle; // @dynamic bindCardVerifyTitle;
@property(retain, nonatomic) NSString *bindIdSubTitle; // @dynamic bindIdSubTitle;
@property(retain, nonatomic) NSString *bindIdTitle; // @dynamic bindIdTitle;
@property(nonatomic) int cacheTime; // @dynamic cacheTime;
@property(retain, nonatomic) NSString *capitalSecurityWording; // @dynamic capitalSecurityWording;
@property(retain, nonatomic) NSString *extralWording; // @dynamic extralWording;
@property(retain, nonatomic) NSMutableArray *headerTitles; // @dynamic headerTitles;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) _Bool isShowBindCard; // @dynamic isShowBindCard;
@property(nonatomic) _Bool isShowBindCardVerify; // @dynamic isShowBindCardVerify;
@property(nonatomic) _Bool isShowBindCardVerifyAlertView; // @dynamic isShowBindCardVerifyAlertView;
@property(nonatomic) _Bool isShowBindId; // @dynamic isShowBindId;
@property(nonatomic) _Bool isShowBindcardPage; // @dynamic isShowBindcardPage;
@property(nonatomic) _Bool isShowCapitalSecurity; // @dynamic isShowCapitalSecurity;
@property(nonatomic) _Bool isnewrouter; // @dynamic isnewrouter;
@property(retain, nonatomic) JumpRemind *jumpRemindInfo; // @dynamic jumpRemindInfo;
@property(nonatomic) _Bool needAgreeDuty; // @dynamic needAgreeDuty;
@property(nonatomic) _Bool questionAnswerSwitch; // @dynamic questionAnswerSwitch;
@property(retain, nonatomic) NSString *questionAnswerUrl; // @dynamic questionAnswerUrl;
@property(nonatomic) int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSMutableArray *session; // @dynamic session;

@end

