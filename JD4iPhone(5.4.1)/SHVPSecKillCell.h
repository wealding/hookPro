//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SHVPTableViewCell.h"

@class NewFinderImageView, SHVPProgressView, UILabel;

@interface SHVPSecKillCell : SHVPTableViewCell
{
    NewFinderImageView *_skuImageView;
    UILabel *_titleLabel;
    UILabel *_miaoShaPriceLabel;
    UILabel *_jdPriceLabel;
    UILabel *_buyLabel;
    SHVPProgressView *_progressView;
}

@property(retain, nonatomic) SHVPProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *buyLabel; // @synthesize buyLabel=_buyLabel;
@property(retain, nonatomic) UILabel *jdPriceLabel; // @synthesize jdPriceLabel=_jdPriceLabel;
@property(retain, nonatomic) UILabel *miaoShaPriceLabel; // @synthesize miaoShaPriceLabel=_miaoShaPriceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NewFinderImageView *skuImageView; // @synthesize skuImageView=_skuImageView;
- (void).cxx_destruct;
- (id)jdAttrributedPriceWithText:(id)arg1 Font:(id)arg2 Corssed:(_Bool)arg3;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end
