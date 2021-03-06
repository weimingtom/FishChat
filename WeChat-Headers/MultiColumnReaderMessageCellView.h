//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

#import "WATemplateMsgManagerExt.h"

@class MMBrandHeadImageView, MMUILabel, MultiColumnReaderMessageViewModel, NSString, UIImageView, UILabel, WAContactGetter;

@interface MultiColumnReaderMessageCellView : ReaderMessageCellView <WATemplateMsgManagerExt>
{
    UIImageView *m_bgImageView;
    MMBrandHeadImageView *m_headerView;
    UILabel *m_nickNameLabel;
    MMUILabel *m_muteSloganView;
    _Bool m_isMuted;
    WAContactGetter *m_contactGetter;
}

- (void).cxx_destruct;
- (id)operationMenuItems;
- (void)banListStatusChanged:(id)arg1;
- (void)updateMuteState:(_Bool)arg1;
- (void)syncMuteStateToServerWithState:(_Bool)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onExpose;
- (void)getWeappContactForUsername:(id)arg1 handler:(CDUnknownBlockType)arg2 timeout:(unsigned int)arg3;
- (void)onMoreButton:(id)arg1;
- (void)layoutWeappViewIfNeed;
- (void)onDelete:(id)arg1;
- (void)addFavorite;
- (void)forwardMessage;
- (void)onClicked;
- (void)onOPButtonClicked:(id)arg1;
- (void)onHeadImageClick;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)layoutContentView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MultiColumnReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

