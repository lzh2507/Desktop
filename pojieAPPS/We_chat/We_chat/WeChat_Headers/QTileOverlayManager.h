//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, QMapContext;

@interface QTileOverlayManager : NSObject
{
    QMapContext *_mapContext;
    NSMutableArray *_tileOverlayRenders;
}

@property(retain, nonatomic) NSMutableArray *tileOverlayRenders; // @synthesize tileOverlayRenders=_tileOverlayRenders;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
- (void).cxx_destruct;
- (id)init;
@property(readonly, nonatomic) NSArray *tileOverlays;
- (void)reloadTileOverlay:(id)arg1;
- (void)removeTileOverlay:(id)arg1;
- (void)addTileOverlay:(id)arg1;
- (void)refresh;
- (id)renderForOverlay:(id)arg1;
- (_Bool)containsTileOverlay:(id)arg1;

@end

