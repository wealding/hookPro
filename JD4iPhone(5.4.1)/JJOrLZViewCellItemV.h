//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FinalSearchGiftModel, JDImageView, JDPriceLabel, JDSKUModel, UIImageView, UILabel;

@interface JJOrLZViewCellItemV : UIView
{
    _Bool _hasSelected;
    _Bool _showElidePrice;
    _Bool _isReachCondition;
    JDImageView *_productImgV;
    UILabel *_productNameLabel;
    JDPriceLabel *_priceLabel;
    UIImageView *_selectedTipImgV;
    long long _itemIndex;
    JDSKUModel *_skuModel;
    FinalSearchGiftModel *_giftModel;
    UILabel *_conditionLabel;
}

@property(retain, nonatomic) UILabel *conditionLabel; // @synthesize conditionLabel=_conditionLabel;
@property(nonatomic) _Bool isReachCondition; // @synthesize isReachCondition=_isReachCondition;
@property(retain, nonatomic) FinalSearchGiftModel *giftModel; // @synthesize giftModel=_giftModel;
@property(retain, nonatomic) JDSKUModel *skuModel; // @synthesize skuModel=_skuModel;
@property(nonatomic) _Bool showElidePrice; // @synthesize showElidePrice=_showElidePrice;
@property(nonatomic) _Bool hasSelected; // @synthesize hasSelected=_hasSelected;
@property(nonatomic) long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property(retain, nonatomic) UIImageView *selectedTipImgV; // @synthesize selectedTipImgV=_selectedTipImgV;
@property(retain, nonatomic) JDPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *productNameLabel; // @synthesize productNameLabel=_productNameLabel;
@property(retain, nonatomic) JDImageView *productImgV; // @synthesize productImgV=_productImgV;
- (void).cxx_destruct;
- (void)layoutContentV;
- (id)initWithFrame:(struct CGRect)arg1;

@end

