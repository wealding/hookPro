//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSMapTable, UIActivityIndicatorView;

@interface TMCCollectionViewCell : UICollectionViewCell
{
    UIActivityIndicatorView *_activityIndicatorView;	// 8 = 0x8
    int _cellStats;	// 16 = 0x10
    NSMapTable *_delegates;	// 24 = 0x18
}

@property(retain, nonatomic) NSMapTable *delegates; // @synthesize delegates=_delegates;
- (void).cxx_destruct;
- (void)reloadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

