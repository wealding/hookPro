//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliDetailSkuInnerProtocol-Protocol.h"
#import "AliDetailSkuProtocol-Protocol.h"
#import "AliTradeSKUViewDelegate-Protocol.h"

@class AliDetailDataEngine, AliDetailModel, AliDetailServiceContext, AliTradeSKUView, NSString, NSTimer, UIActivityIndicatorView, UITapGestureRecognizer, UIView, UIViewController;

@interface AliDetailSkuControl : NSObject <AliTradeSKUViewDelegate, AliDetailSkuProtocol, AliDetailSkuInnerProtocol>
{
    _Bool _isDetailCalled;	// 8 = 0x8
    CDUnknownBlockType UPDATEBLOCK;	// 16 = 0x10
    _Bool willShowTopCartAnimation;	// 24 = 0x18
    CDUnknownBlockType TradeCallBack;	// 32 = 0x20
    CDUnknownBlockType CARTBLOCK;	// 40 = 0x28
    CDUnknownBlockType buyBlock;	// 48 = 0x30
    UIActivityIndicatorView *_loading;	// 56 = 0x38
    _Bool _needReleaseJS;	// 64 = 0x40
    AliDetailModel *_detailModel;	// 72 = 0x48
    AliDetailDataEngine *_dataEngine;	// 80 = 0x50
    AliTradeSKUView *_skuView;	// 88 = 0x58
    unsigned long long _sourceType;	// 96 = 0x60
    NSString *_areaId;	// 104 = 0x68
    UIViewController *_contentViewController;	// 112 = 0x70
    AliDetailServiceContext *_detailContext;	// 120 = 0x78
    NSString *_itemId;	// 128 = 0x80
    NSString *_selectSkuId;	// 136 = 0x88
    UIView *_maskView;	// 144 = 0x90
    UITapGestureRecognizer *_defaultTapGesture;	// 152 = 0x98
    NSTimer *_timer;	// 160 = 0xa0
    unsigned long long _requestSeconds;	// 168 = 0xa8
}

@property(nonatomic) _Bool needReleaseJS; // @synthesize needReleaseJS=_needReleaseJS;
@property(nonatomic) unsigned long long requestSeconds; // @synthesize requestSeconds=_requestSeconds;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UITapGestureRecognizer *defaultTapGesture; // @synthesize defaultTapGesture=_defaultTapGesture;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSString *selectSkuId; // @synthesize selectSkuId=_selectSkuId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) AliDetailServiceContext *detailContext; // @synthesize detailContext=_detailContext;
@property(nonatomic) __weak UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) NSString *areaId; // @synthesize areaId=_areaId;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) AliTradeSKUView *skuView; // @synthesize skuView=_skuView;
@property(retain, nonatomic) AliDetailDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(retain, nonatomic) AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)dismissSkuViewHandleBlock:(CDUnknownBlockType)arg1;
- (void)showSkuViewWhenSuccess;
- (void)setSkuComponentValue:(id)arg1 components:(id)arg2;
- (_Bool)isSKUSelected;
- (void)buyNow;
- (void)addCart;
- (void)tradeSkuAddCartButtonClicked:(id)arg1;
- (void)tradeSkuBuyButtonClicked:(id)arg1;
- (void)tradeSkuDidFinishChooseSku:(id)arg1 selectedSkuId:(id)arg2;
- (void)tradeSkuView:(id)arg1 dismissSkuViewHandleBlock:(CDUnknownBlockType)arg2;
- (void)skuComplete;
- (void)isSkuClosed:(id)arg1;
- (void)areaChanged:(id)arg1;
- (id)viewForAnimationInSkuView:(id)arg1;
- (void)addCartFailed:(id)arg1;
- (void)registCartEngine;
- (void)cleanLoading;
- (void)postLoading;
- (void)dismissWithCallBack;
- (void)dismissSkuView;
- (void)presentSKUView;
- (void)loadDetailExistDetailData:(unsigned long long)arg1;
- (void)loadDetailSuccesWithSourceType:(unsigned long long)arg1 originSku:(id)arg2;
- (void)stopTimer;
- (void)startTimer;
- (void)timerLoop;
- (void)overTimeOrError;
- (void)presentSKUViewWithItemId:(id)arg1 data:(id)arg2 sourceType:(unsigned long long)arg3 areaId:(id)arg4 selectedSKU:(id)arg5 callBack:(CDUnknownBlockType)arg6;
- (void)presentSKUViewWithItemId:(id)arg1 containerVC:(id)arg2 data:(id)arg3 sourceType:(unsigned long long)arg4 areaId:(id)arg5 updateCallBack:(CDUnknownBlockType)arg6;
- (void)presentSKUViewWithItemId:(id)arg1 areaId:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)changeSKUWithItemId:(id)arg1 areaId:(id)arg2 selectedSKU:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)presentSKUViewWithItemId:(id)arg1 containerVC:(id)arg2 needShowTopCartAnimation:(_Bool)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)presentSKUWithItemId:(id)arg1 containerVC:(id)arg2 selectedSKU:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)ensureLoginedWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)cartIsOnTop:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)loading;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

