//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponent.h"

#import "IFavoritesExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"

@class FavoritesItem, MMFavImgComponent, MMFavNameComponent, MMFavThumbComponent, MMFavUrlComponent, MMFavVoiceComponent, MMUIImageView, MMUIView, NSString, UIView;
@protocol MyFavoritesBaseCellDelegate;

@interface MMFavCellComponent : MMComponent <IFavoritesExt, INetworkStatusMgrExt>
{
    MMFavNameComponent *_nameCom;
    MMFavThumbComponent *_thumbCom;
    MMFavUrlComponent *_urlCom;
    MMFavVoiceComponent *_voiceCom;
    MMFavImgComponent *_imgCom;
    MMUIView *_imgTextView;
    MMUIImageView *m_selectedView;
    MMUIImageView *m_deselectedView;
    UIView *m_contentView;
    _Bool m_editing;
    id <MyFavoritesBaseCellDelegate> _favBaseCellDelegate;
    FavoritesItem *_favItem;
}

+ (double)calHeightWithComData:(id)arg1;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(nonatomic) __weak id <MyFavoritesBaseCellDelegate> favBaseCellDelegate; // @synthesize favBaseCellDelegate=_favBaseCellDelegate;
- (void).cxx_destruct;
- (id)getIconView;
- (id)getThumbImageView;
- (id)getThumbComponent;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)changeEditingStatus:(_Bool)arg1 animated:(_Bool)arg2;
- (void)changeSelectStatu:(_Bool)arg1;
- (void)configSelectView;
- (void)OnHeadImgLongPress:(id)arg1;
- (void)configContentLayout;
- (_Bool)isPadStyle;
- (void)configFavCell;
- (void)setHighlightWord:(id)arg1 Detail:(id)arg2;
- (void)configVoiceComponent;
- (void)configImgTextView;
- (void)configImgComponent;
- (void)configThumbAndUrlComponent;
- (void)configNameComponent;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

