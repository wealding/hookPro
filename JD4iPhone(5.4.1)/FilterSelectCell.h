//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FinalSearchHistoryHotItemsViewDelegate.h"

@class FinalSearchHistoryHotItemsView, JDButton, JDImageView, NSArray, NSString, UIImageView, UILabel, UIView;

@interface FilterSelectCell : UITableViewCell <FinalSearchHistoryHotItemsViewDelegate>
{
    UILabel *titleLabel;
    UILabel *selectedLabel_;
    UILabel *wareNumLabel_;
    JDImageView *cellSeparator_;
    JDImageView *separatorView_;
    UIView *longSeparatorView_;
    UIView *topSeparatorView_;
    JDImageView *hookImageView_;
    JDImageView *titleRithtImgView_;
    JDImageView *checkView_;
    JDButton *switchView_;
    UIImageView *accessoryView_;
    UIView *separatorViewNew_;
    UIView *longSeparatorViewNew_;
    UIView *topSeparatorViewNew_;
    FinalSearchHistoryHotItemsView *hotItemView;
    id _delegate;
    double titleMargin_;
    UILabel *_hotItem;
    NSArray *_hotItemArray;
}

@property(retain, nonatomic) NSArray *hotItemArray; // @synthesize hotItemArray=_hotItemArray;
@property(retain, nonatomic) UILabel *hotItem; // @synthesize hotItem=_hotItem;
@property(nonatomic) __weak id <FilterSelectCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) JDButton *switchView; // @synthesize switchView=switchView_;
@property(retain, nonatomic) JDImageView *checkView; // @synthesize checkView=checkView_;
@property(retain, nonatomic) UILabel *wareNumLabel; // @synthesize wareNumLabel=wareNumLabel_;
@property(retain, nonatomic) JDImageView *cellSeparator; // @synthesize cellSeparator=cellSeparator_;
@property(retain, nonatomic) JDImageView *titleRithtImgView; // @synthesize titleRithtImgView=titleRithtImgView_;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=accessoryView_;
@property(retain, nonatomic) JDImageView *hookImageView; // @synthesize hookImageView=hookImageView_;
@property(retain, nonatomic) UIView *topSeparatorViewNew; // @synthesize topSeparatorViewNew=topSeparatorViewNew_;
@property(retain, nonatomic) UIView *separatorViewNew; // @synthesize separatorViewNew=separatorViewNew_;
@property(retain, nonatomic) UIView *longSeparatorViewNew; // @synthesize longSeparatorViewNew=longSeparatorViewNew_;
@property(retain, nonatomic) UIView *longSeparatorView; // @synthesize longSeparatorView=longSeparatorView_;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=topSeparatorView_;
@property(retain, nonatomic) JDImageView *separatorView; // @synthesize separatorView=separatorView_;
@property(nonatomic) double titleMargin; // @synthesize titleMargin=titleMargin_;
@property(retain, nonatomic) UILabel *selectedLabel; // @synthesize selectedLabel=selectedLabel_;
- (void).cxx_destruct;
- (void)searchHistoryHotButtonClick:(id)arg1;
- (void)layoutSubviews;
- (void)switchUpdate:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

