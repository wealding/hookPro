//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XTInfiniteScrollView;

@protocol XTInfiniteScrollViewDelegate <NSObject>

@optional
- (void)infiniteScrollView:(XTInfiniteScrollView *)arg1 didShowImageAtIndex:(unsigned long long)arg2;
- (void)infiniteScrollView:(XTInfiniteScrollView *)arg1 didSelectImageAtIndex:(unsigned long long)arg2;
@end

