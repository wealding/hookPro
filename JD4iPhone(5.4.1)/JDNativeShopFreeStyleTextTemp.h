//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface JDNativeShopFreeStyleTextTemp : UIView
{
    UILabel *txtLabel;
    UIImageView *arrowImageView;
    id _delegate;
    int templeType;
}

@property(nonatomic) int templeType; // @synthesize templeType;
@property(nonatomic) id <JDNativeShopTempDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *txtLabel; // @synthesize txtLabel;
- (void)updateLayoutFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)productClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

