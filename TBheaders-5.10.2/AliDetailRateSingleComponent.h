//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailRateSingleModel, NSMutableArray;

@interface AliDetailRateSingleComponent : AliDetailComponent
{
    AliDetailRateSingleModel *_singleRateModel;	// 8 = 0x8
    NSMutableArray *_itemViews;	// 16 = 0x10
}

+ (double)rateItemHeightForObject:(id)arg1 preferredWidth:(double)arg2;
+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) __weak AliDetailRateSingleModel *singleRateModel; // @synthesize singleRateModel=_singleRateModel;
- (void).cxx_destruct;
- (void)gotoRatePage:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
