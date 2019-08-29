//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTConvenient-Protocol.h"
#import "WCTCrossTableChainCall-Protocol.h"
#import "WCTTransaction-Protocol.h"

@class NSString;

@interface WCTDatabase : NSObject <WCTTransaction, WCTConvenient, WCTCrossTableChainCall>
{
    struct Recyclable<WCDB::Database *> _databaseHolder;
    struct Database *_database;
}

+ (void)simulateIOError:(unsigned long long)arg1;
+ (void)purgeAll;
+ (void)globalTraceSQL:(CDUnknownBlockType)arg1;
+ (void)globalTracePerformance:(CDUnknownBlockType)arg1;
+ (void)globalTraceError:(CDUnknownBlockType)arg1;
+ (id)sourceId;
+ (id)version;
+ (void)registerTokenizer:(const struct TokenizerModule *)arg1 named:(id)arg2;
+ (id)dbPathsFrom:(id)arg1;
+ (id)backupPathsFrom:(id)arg1;
+ (struct NSObject *)extractOneObjectOfClass:(Class)arg1 fromColumn:(struct sqliterk_column *)arg2;
+ (int)mappedColumnOrder:(const unordered_map_de91ee6a *)arg1 index:(int)arg2;
+ (id)databaseWithRouterInfo:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct RecyclableHandle)generateHandle;
- (id)error;
- (void)unblockade;
- (void)blockade;
- (_Bool)isBlockaded;
- (void)close:(CDUnknownBlockType)arg1;
- (void)close;
- (_Bool)isOpened;
- (_Bool)canOpen;
@property(readonly, nonatomic) NSString *path;
@property(nonatomic) int tag;
- (id)initWithPathOfAlivingDatabase:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithUnsafeDatabase:(struct Database *)arg1;
- (_Bool)runNestedTransaction:(CDUnknownBlockType)arg1;
- (void)rollbackNestedTransaction;
- (_Bool)commitOrRollbackNestedTransaction;
- (_Bool)beginNestedTransaction;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)rollbackTransaction;
- (_Bool)commitOrRollbackTransaction;
- (_Bool)beginTransaction;
- (_Bool)isInTransaction;
- (_Bool)dropIndex:(id)arg1;
- (_Bool)dropTable:(id)arg1;
- (_Bool)createVirtualTable:(id)arg1 withClass:(Class)arg2;
- (id)getTable:(id)arg1 withClass:(Class)arg2;
- (_Bool)createTable:(id)arg1 withClass:(Class)arg2;
- (struct WCTOptionalBool)tableExists:(id)arg1;
- (void)enableAutoCheckpoint:(_Bool)arg1;
- (void)purge;
- (struct WCTOptionalSize)getFilesSize;
- (id)paths;
- (_Bool)moveFilesToDirectory:(id)arg1;
- (_Bool)removeFiles;
- (void)traceSQL:(CDUnknownBlockType)arg1;
- (void)tracePerformance:(CDUnknownBlockType)arg1;
- (void)addTokenizer:(id)arg1;
- (struct NSArray *)getRowsFromStatement:(const struct Statement *)arg1;
- (struct NSArray *)getColumnFromStatement:(const struct Statement *)arg1;
- (struct NSArray *)getRowFromStatement:(const struct Statement *)arg1;
- (struct NSObject *)getValueFromStatement:(const struct Statement *)arg1;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5 offset:(const struct Expression *)arg6;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 limit:(const struct Expression *)arg3 offset:(const struct Expression *)arg4;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 limit:(const struct Expression *)arg4;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 limit:(const struct Expression *)arg4;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 limit:(const struct Expression *)arg3;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3;
- (struct NSArray *)getRowsOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5 offset:(const struct Expression *)arg6;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 limit:(const struct Expression *)arg3 offset:(const struct Expression *)arg4;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 limit:(const struct Expression *)arg4;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 limit:(const struct Expression *)arg4;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 limit:(const struct Expression *)arg3;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3;
- (struct NSArray *)getColumnOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2;
- (struct NSArray *)getRowOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 offset:(const struct Expression *)arg5;
- (struct NSArray *)getRowOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 offset:(const struct Expression *)arg4;
- (struct NSArray *)getRowOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 offset:(const struct Expression *)arg4;
- (struct NSArray *)getRowOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4;
- (struct NSArray *)getRowOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 offset:(const struct Expression *)arg3;
- (struct NSArray *)getRowOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3;
- (struct NSArray *)getRowOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3;
- (struct NSArray *)getRowOnResultColumns:(const SyntaxList_cba58f96 *)arg1 fromTable:(id)arg2;
- (struct NSObject *)getValueOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 offset:(const struct Expression *)arg5;
- (struct NSObject *)getValueOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 offset:(const struct Expression *)arg4;
- (struct NSObject *)getValueOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 offset:(const struct Expression *)arg4;
- (struct NSObject *)getValueOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4;
- (struct NSObject *)getValueOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 offset:(const struct Expression *)arg3;
- (struct NSObject *)getValueOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3;
- (struct NSObject *)getValueOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3;
- (struct NSObject *)getValueOnResultColumn:(const struct ResultColumn *)arg1 fromTable:(id)arg2;
- (_Bool)deleteFromTable:(id)arg1 where:(const struct Expression *)arg2 orders:(const SyntaxList_64caf671 *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (_Bool)deleteFromTable:(id)arg1 orders:(const SyntaxList_64caf671 *)arg2 limit:(const struct Expression *)arg3 offset:(const struct Expression *)arg4;
- (_Bool)deleteFromTable:(id)arg1 where:(const struct Expression *)arg2 limit:(const struct Expression *)arg3 offset:(const struct Expression *)arg4;
- (_Bool)deleteFromTable:(id)arg1 where:(const struct Expression *)arg2 orders:(const SyntaxList_64caf671 *)arg3 limit:(const struct Expression *)arg4;
- (_Bool)deleteFromTable:(id)arg1 limit:(const struct Expression *)arg2 offset:(const struct Expression *)arg3;
- (_Bool)deleteFromTable:(id)arg1 orders:(const SyntaxList_64caf671 *)arg2 limit:(const struct Expression *)arg3;
- (_Bool)deleteFromTable:(id)arg1 where:(const struct Expression *)arg2 limit:(const struct Expression *)arg3;
- (_Bool)deleteFromTable:(id)arg1 limit:(const struct Expression *)arg2;
- (_Bool)deleteFromTable:(id)arg1 where:(const struct Expression *)arg2;
- (_Bool)deleteFromTable:(id)arg1;
- (_Bool)updateTable:(id)arg1 setProperty:(const struct WCTProperty *)arg2 toValue:(struct NSObject *)arg3 where:(const struct Expression *)arg4 orders:(const SyntaxList_64caf671 *)arg5 limit:(const struct Expression *)arg6 offset:(const struct Expression *)arg7;
- (_Bool)updateTable:(id)arg1 setProperty:(const struct WCTProperty *)arg2 toValue:(struct NSObject *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5 offset:(const struct Expression *)arg6;
- (_Bool)updateTable:(id)arg1 setProperty:(const struct WCTProperty *)arg2 toValue:(struct NSObject *)arg3 where:(const struct Expression *)arg4 limit:(const struct Expression *)arg5 offset:(const struct Expression *)arg6;
- (_Bool)updateTable:(id)arg1 setProperty:(const struct WCTProperty *)arg2 toValue:(struct NSObject *)arg3 where:(const struct Expression *)arg4 orders:(const SyntaxList_64caf671 *)arg5 limit:(const struct Expression *)arg6;
- (_Bool)updateTable:(id)arg1 setProperty:(const struct WCTProperty *)arg2 toValue:(struct NSObject *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (_Bool)updateTable:(id)arg1 setProperty:(const struct WCTProperty *)arg2 toValue:(struct NSObject *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5;
- (_Bool)updateTable:(id)arg1 setProperty:(const struct WCTProperty *)arg2 toValue:(struct NSObject *)arg3 where:(const struct Expression *)arg4 limit:(const struct Expression *)arg5;
- (_Bool)updateTable:(id)arg1 setProperty:(const struct WCTProperty *)arg2 toValue:(struct NSObject *)arg3 limit:(const struct Expression *)arg4;
- (_Bool)updateTable:(id)arg1 setProperty:(const struct WCTProperty *)arg2 toValue:(struct NSObject *)arg3 where:(const struct Expression *)arg4;
- (_Bool)updateTable:(id)arg1 setProperty:(const struct WCTProperty *)arg2 toValue:(struct NSObject *)arg3;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toRow:(struct NSArray *)arg3 where:(const struct Expression *)arg4 orders:(const SyntaxList_64caf671 *)arg5 limit:(const struct Expression *)arg6 offset:(const struct Expression *)arg7;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toRow:(struct NSArray *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5 offset:(const struct Expression *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toRow:(struct NSArray *)arg3 where:(const struct Expression *)arg4 limit:(const struct Expression *)arg5 offset:(const struct Expression *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toRow:(struct NSArray *)arg3 where:(const struct Expression *)arg4 orders:(const SyntaxList_64caf671 *)arg5 limit:(const struct Expression *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toRow:(struct NSArray *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toRow:(struct NSArray *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toRow:(struct NSArray *)arg3 where:(const struct Expression *)arg4 limit:(const struct Expression *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toRow:(struct NSArray *)arg3 limit:(const struct Expression *)arg4;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toRow:(struct NSArray *)arg3 where:(const struct Expression *)arg4;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toRow:(struct NSArray *)arg3;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toObject:(struct NSObject *)arg3 where:(const struct Expression *)arg4 orders:(const SyntaxList_64caf671 *)arg5 limit:(const struct Expression *)arg6 offset:(const struct Expression *)arg7;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toObject:(struct NSObject *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5 offset:(const struct Expression *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toObject:(struct NSObject *)arg3 where:(const struct Expression *)arg4 limit:(const struct Expression *)arg5 offset:(const struct Expression *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toObject:(struct NSObject *)arg3 where:(const struct Expression *)arg4 orders:(const SyntaxList_64caf671 *)arg5 limit:(const struct Expression *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toObject:(struct NSObject *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toObject:(struct NSObject *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toObject:(struct NSObject *)arg3 where:(const struct Expression *)arg4 limit:(const struct Expression *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toObject:(struct NSObject *)arg3 limit:(const struct Expression *)arg4;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toObject:(struct NSObject *)arg3 where:(const struct Expression *)arg4;
- (_Bool)updateTable:(id)arg1 setProperties:(const SyntaxList_7f15fe8c *)arg2 toObject:(struct NSObject *)arg3;
- (_Bool)insertOrReplaceObjects:(id)arg1 onProperties:(const SyntaxList_7f15fe8c *)arg2 intoTable:(id)arg3;
- (_Bool)insertOrReplaceObject:(struct NSObject *)arg1 onProperties:(const SyntaxList_7f15fe8c *)arg2 intoTable:(id)arg3;
- (_Bool)insertObjects:(id)arg1 onProperties:(const SyntaxList_7f15fe8c *)arg2 intoTable:(id)arg3;
- (_Bool)insertObject:(struct NSObject *)arg1 onProperties:(const SyntaxList_7f15fe8c *)arg2 intoTable:(id)arg3;
- (_Bool)insertOrReplaceObjects:(id)arg1 intoTable:(id)arg2;
- (_Bool)insertOrReplaceObject:(struct NSObject *)arg1 intoTable:(id)arg2;
- (_Bool)insertObjects:(id)arg1 intoTable:(id)arg2;
- (_Bool)insertObject:(struct NSObject *)arg1 intoTable:(id)arg2;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5 offset:(const struct Expression *)arg6;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 limit:(const struct Expression *)arg3 offset:(const struct Expression *)arg4;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 limit:(const struct Expression *)arg4;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 limit:(const struct Expression *)arg4;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 limit:(const struct Expression *)arg3;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3;
- (id)getObjectsOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2;
- (id)getObjectOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 offset:(const struct Expression *)arg5;
- (id)getObjectOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 offset:(const struct Expression *)arg4;
- (id)getObjectOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 offset:(const struct Expression *)arg4;
- (id)getObjectOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4;
- (id)getObjectOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 offset:(const struct Expression *)arg3;
- (id)getObjectOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3;
- (id)getObjectOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3;
- (id)getObjectOnResultColumns:(const SyntaxList_d92903c3 *)arg1 fromTable:(id)arg2;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5 offset:(const struct Expression *)arg6;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 limit:(const struct Expression *)arg4 offset:(const struct Expression *)arg5;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 limit:(const struct Expression *)arg5;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 limit:(const struct Expression *)arg3 offset:(const struct Expression *)arg4;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 limit:(const struct Expression *)arg4;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 limit:(const struct Expression *)arg4;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 limit:(const struct Expression *)arg3;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4 offset:(const struct Expression *)arg5;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3 offset:(const struct Expression *)arg4;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 offset:(const struct Expression *)arg4;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3 orders:(const SyntaxList_64caf671 *)arg4;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 offset:(const struct Expression *)arg3;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 orders:(const SyntaxList_64caf671 *)arg3;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct Expression *)arg3;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2;
- (_Bool)execute:(const struct Statement *)arg1;
- (id)getHandle;
- (_Bool)isMigrated;
- (void)setNotificationWhenMigrated:(CDUnknownBlockType)arg1;
- (void)enableAutoMigration:(_Bool)arg1;
- (_Bool)stepMigration;
- (void)filterMigration:(CDUnknownBlockType)arg1;
- (void)removeConfigForName:(id)arg1;
- (void)setConfig:(CDUnknownBlockType)arg1 withUninvocation:(CDUnknownBlockType)arg2 forName:(id)arg3;
- (void)setConfig:(CDUnknownBlockType)arg1 withUninvocation:(CDUnknownBlockType)arg2 forName:(id)arg3 withPriority:(long long)arg4;
- (void)setCipherKey:(id)arg1 andCipherPageSize:(int)arg2;
- (void)setCipherKey:(id)arg1;
- (_Bool)containsDeposited;
- (_Bool)removeDeposited;
- (double)retrieve:(CDUnknownBlockType)arg1;
- (_Bool)backup;
- (void)enableAutoBackup:(_Bool)arg1;
- (_Bool)deposit;
- (void)filterBackup:(CDUnknownBlockType)arg1;
- (_Bool)isAlreadyCorrupted;
- (_Bool)checkIfCorrupted;
- (void)setNotificationWhenCorrupted:(CDUnknownBlockType)arg1;
- (id)prepareMultiSelect;
- (id)prepareSelect;
- (id)prepareUpdate;
- (id)prepareDelete;
- (id)prepareInsert;
- (id)backupPaths;
- (void)clearBackup;
- (_Bool)backupWithOldLogic;
- (id)getRestoreInfos;
- (id)accquireRestoreInfos;
- (id)accquireSortedBackupInfos;
- (_Bool)restoreFromSourceDB:(id)arg1 withDelegate:(id)arg2 error:(id *)arg3;
- (void)showSize;
- (void)showUsage;
- (id)getFileDescription:(id)arg1 ofRoot:(id)arg2;
- (_Bool)lazyRunTransaction:(CDUnknownBlockType)arg1;
- (void)enablePerformanceTrace:(_Bool)arg1;
- (void)enableSQLTrace:(_Bool)arg1;
- (void)enableSecureDelete;

@end

