//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDPackModel, JDSKUModel, NSMutableArray, NSString;

@interface SynCartPromotionView : UIView
{
    struct CGRect _titleRect;
    struct CGRect _tipRect;
    NSString *_title;
    JDSKUModel *_skuModel;
    JDPackModel *_packModel;
    NSMutableArray *_accessElements;
}

@property(retain, nonatomic) NSMutableArray *accessElements; // @synthesize accessElements=_accessElements;
@property(retain, nonatomic) JDPackModel *packModel; // @synthesize packModel=_packModel;
@property(retain, nonatomic) JDSKUModel *skuModel; // @synthesize skuModel=_skuModel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)__drawPromotionButton;
- (void)drawRect:(struct CGRect)arg1;
- (id)initUI;

@end

