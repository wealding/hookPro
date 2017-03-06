//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDContentItem.h"

@class NSMutableArray, NewInVoiceModel, UILabel, UIView;

@interface InvoiceTypeView : JDContentItem
{
    SEL _action;
    UILabel *titleLabel_;
    UILabel *tipLabel_;
    UIView *lineView_;
    NSMutableArray *subViews_;
    _Bool _isSolidCard;
    NewInVoiceModel *invoiceModel;
    double _finalHeight;
    id _target;
}

@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) double finalHeight; // @synthesize finalHeight=_finalHeight;
@property(nonatomic) _Bool isSolidCard; // @synthesize isSolidCard=_isSolidCard;
@property(retain, nonatomic) NewInVoiceModel *invoiceModel; // @synthesize invoiceModel;
- (void).cxx_destruct;
- (struct CGSize)sizeWithStr:(id)arg1 andFont:(id)arg2;
- (void)btnAction:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 Target:(id)arg2 Action:(SEL)arg3;

@end
