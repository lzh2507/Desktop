//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString;

@interface WCSessionBusinessInfoHandler : MMService <MMService>
{
}

- (_Bool)getVariableWithClass:(Class)arg1 withVariableName:(id)arg2;
- (_Bool)getPropertyWithClass:(Class)arg1 withPropertyName:(id)arg2;
- (id)getDataPathFieldType:(id)arg1;
- (id)getDataPathFieldName:(id)arg1;
- (id)getDataPathFieldIndexOrKey:(id)arg1;
- (id)getBusinessInfoForDataPath:(id)arg1 withDataPath:(id)arg2;
- (id)obtainBusinessInfo:(id)arg1 withDataPathConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

