//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TQRichTextViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class CNLogisticOrderListItem, CNLogisticService, CNLogisticsNewComplainItem, NSString, UIButton;

@interface CNLogisticsTraceDetailsView : UIView <TQRichTextViewDelegate, UIActionSheetDelegate>
{
    _Bool _show_Sheet;	// 8 = 0x8
    _Bool _goComplain;	// 9 = 0x9
    float _traceHeight;	// 12 = 0xc
    CNLogisticOrderListItem *_bagItem;	// 16 = 0x10
    CNLogisticService *_complainService;	// 24 = 0x18
    UIButton *_complainButton;	// 32 = 0x20
    CNLogisticsNewComplainItem *_h5Complain;	// 40 = 0x28
}

@property(retain, nonatomic) CNLogisticsNewComplainItem *h5Complain; // @synthesize h5Complain=_h5Complain;
@property(retain, nonatomic) UIButton *complainButton; // @synthesize complainButton=_complainButton;
@property(nonatomic) _Bool goComplain; // @synthesize goComplain=_goComplain;
@property(retain, nonatomic) CNLogisticService *complainService; // @synthesize complainService=_complainService;
@property(nonatomic) float traceHeight; // @synthesize traceHeight=_traceHeight;
@property(nonatomic) CNLogisticOrderListItem *bagItem; // @synthesize bagItem=_bagItem;
@property(nonatomic) _Bool show_Sheet; // @synthesize show_Sheet=_show_Sheet;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize)calcTextSize:(id)arg1 fontSize:(int)arg2 width:(float)arg3;
- (float)getTraceHeight;
- (void)complain:(id)arg1;
- (void)setupTraceInfoView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)richTextView:(id)arg1 phone:(id)arg2;
- (float)configLogisticsTraceCell:(id)arg1 index:(int)arg2 yPos:(float)arg3;
- (void)setupView;
- (void)checkComplain;
- (void)clearDelegatesAndCancel;
- (id)initWithY:(float)arg1 addView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
