//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, customSegment;

@interface MDTitleSegment : UIView
{
    UILabel *title;
    customSegment *segment;
}

@property(retain, nonatomic) customSegment *segment; // @synthesize segment;
@property(retain, nonatomic) UILabel *title; // @synthesize title;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
