//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NewOrderInvoiceBaseView.h"

@class JDButton, UILabel;

@interface NewOrderInvoiceNormalView : NewOrderInvoiceBaseView
{
    JDButton *_accessoryBtn;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)show;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)addDistributeLabel:(id)arg1 offY:(double)arg2 width:(double)arg3;
- (id)addNoInvoiceTitleLabel:(double)arg1 andWidth:(double)arg2;
- (void)showWithData:(id)arg1;
- (void)setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
