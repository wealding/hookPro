//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMMQRCodeExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class MMAnimationTipView, MMLoadingView, MMScrollView, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface SendWeiboCardController : MMUIViewController <scrollViewDelegate, UIAlertViewDelegate, IMMQRCodeExt, WCActionSheetDelegate>
{
    MMAnimationTipView *m_tipView;
    MMScrollView *m_viewBG;
    struct stWeixinEntryRow *m_weixinEntry;
    MMLoadingView *m_loadingView;
    UIImageView *m_imageView;
}

@property(nonatomic) struct stWeixinEntryRow *m_weixinEntry; // @synthesize m_weixinEntry;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)Operate:(id)arg1;
- (void)saveToAlbum;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)done:(id)arg1;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2;
- (void)getNextQRCode;
- (void)willAppear;
- (void)initQRCode;
- (void)initLoadingView;
- (void)scrollToNormal;
- (void)onNextStep:(id)arg1;
- (void)showFacebookBindView;
- (void)onFacebookWall;
- (void)onSinaMicroBlog;
- (void)onTxMicroBlog;
- (void)onCancel:(id)arg1;
- (void)didFinishSavingImage:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)CloseLoadingView:(id)arg1;
- (void)popToTop;
- (void)initTipView;
- (void)dealloc;
- (id)init;
- (_Bool)isMicroBlogOpen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

