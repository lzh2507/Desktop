//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAPIV2Request.h"

@interface MRTConsumerCommunicationOptionsAPIRequest : MRTAPIV2Request
{
}

- (id)transformResponse:(id)arg1 error:(id *)arg2;
- (id)parametersForCommunicationOptions:(id)arg1;
- (void)loginRequestFinished:(id)arg1;
- (id)initUpdateWithCustomerID:(id)arg1 communicationOptions:(id)arg2;
- (id)initWithConsumerIdentifier:(id)arg1;

@end
