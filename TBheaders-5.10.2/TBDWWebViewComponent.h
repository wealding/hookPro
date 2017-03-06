//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DWComponent.h"

#import "WVWebViewDelegate-Protocol.h"

@class DWWebBaseView, NSString, TBDWWebBaseController;

@interface TBDWWebViewComponent : DWComponent <WVWebViewDelegate>
{
    DWWebBaseView *_baseView;	// 8 = 0x8
    TBDWWebBaseController *_webViewVC;	// 16 = 0x10
}

@property(retain, nonatomic) TBDWWebBaseController *webViewVC; // @synthesize webViewVC=_webViewVC;
@property(retain, nonatomic) DWWebBaseView *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (void)onHidden;
- (void)onShow;
- (void)destroy;
- (id)getView;
- (void)refreshComponent:(id)arg1;
- (void)renderView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)setInstanceFrame:(struct CGRect)arg1;
- (void)initWebView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
