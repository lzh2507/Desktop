//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, WCTTable;

@protocol WCTTable
- (_Bool)dropIndex:(NSString *)arg1;
- (_Bool)dropTable:(NSString *)arg1;
- (_Bool)createVirtualTable:(NSString *)arg1 withClass:(Class)arg2;
- (WCTTable *)getTable:(NSString *)arg1 withClass:(Class)arg2;
- (_Bool)createTable:(NSString *)arg1 withClass:(Class)arg2;
- (struct WCTOptionalBool)tableExists:(NSString *)arg1;
@end

