//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString, WCPayIdKeyRegularReporter;
@protocol WCPayDeleteDigitalCertCgiDelegate;

@interface WCPayDeleteDigitalCertCgi : NSObject <PBMessageObserverDelegate>
{
    NSString *_m_crtNo;
    id <WCPayDeleteDigitalCertCgiDelegate> _m_delegate;
    WCPayIdKeyRegularReporter *_m_cgiReporter;
}

@property(retain, nonatomic) WCPayIdKeyRegularReporter *m_cgiReporter; // @synthesize m_cgiReporter=_m_cgiReporter;
@property(nonatomic) __weak id <WCPayDeleteDigitalCertCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *m_crtNo; // @synthesize m_crtNo=_m_crtNo;
- (void).cxx_destruct;
- (void)localCertDeleteWithCertNo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (void)callErrorDelegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

