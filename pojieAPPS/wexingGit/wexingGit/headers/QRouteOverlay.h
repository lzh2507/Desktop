//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QMapKit/QPolyline.h>

@class NSMutableArray;

@interface QRouteOverlay : QPolyline
{
    NSMutableArray *_arrLine;
}

@property(retain, nonatomic) NSMutableArray *arrLine; // @synthesize arrLine=_arrLine;
- (void).cxx_destruct;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2 arrLine:(id)arg3;

@end
