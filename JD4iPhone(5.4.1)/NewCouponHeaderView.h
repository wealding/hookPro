//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class NSArray, UIButton;

@interface NewCouponHeaderView : JDView
{
    UIButton *_selectedButton;
    id <NewCouponHeaderViewDelegate> _selectMenuDelegate;
    NSArray *_items;
    long long _selectedSegmentIndex;
}

@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <NewCouponHeaderViewDelegate> selectMenuDelegate; // @synthesize selectMenuDelegate=_selectMenuDelegate;
- (void).cxx_destruct;
- (void)updateBottomSelectLineRect:(id)arg1 index:(long long)arg2;
- (void)selectAction:(id)arg1;
- (void)updateBtnTitle:(id)arg1 index:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
