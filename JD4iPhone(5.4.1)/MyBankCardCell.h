//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CircleBankIcon, UIImageView, UILabel, UIView;

@interface MyBankCardCell : UITableViewCell
{
    UIView *_cardBgView;
    UIImageView *_backgroundImageView;
    CircleBankIcon *_cardIcon;
    UILabel *_cardNameLabel;
    UILabel *_cardTypeLabel;
    UILabel *_cardNOLabel;
}

+ (double)cellHeight;
@property(retain, nonatomic) UILabel *cardNOLabel; // @synthesize cardNOLabel=_cardNOLabel;
@property(retain, nonatomic) UILabel *cardTypeLabel; // @synthesize cardTypeLabel=_cardTypeLabel;
@property(retain, nonatomic) UILabel *cardNameLabel; // @synthesize cardNameLabel=_cardNameLabel;
@property(retain, nonatomic) CircleBankIcon *cardIcon; // @synthesize cardIcon=_cardIcon;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *cardBgView; // @synthesize cardBgView=_cardBgView;
- (void).cxx_destruct;
- (void)configCellWithModel:(id)arg1 row:(long long)arg2;
- (void)setup;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

