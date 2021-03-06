//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveCircleView.h"

@class TBLiveAnimationView, TBLiveLikeCounterView, UIButton;

@interface TBLiveLikeView : TBLiveCircleView
{
    long long _currentLikeCount;	// 8 = 0x8
    _Bool _isHost;	// 16 = 0x10
    UIButton *_iconfontBtn;	// 24 = 0x18
    TBLiveLikeCounterView *_likeCounterView;	// 32 = 0x20
    TBLiveAnimationView *_starsView;	// 40 = 0x28
}

@property(retain, nonatomic) TBLiveAnimationView *starsView; // @synthesize starsView=_starsView;
@property(retain, nonatomic) TBLiveLikeCounterView *likeCounterView; // @synthesize likeCounterView=_likeCounterView;
@property(retain, nonatomic) UIButton *iconfontBtn; // @synthesize iconfontBtn=_iconfontBtn;
@property _Bool isHost; // @synthesize isHost=_isHost;
- (void).cxx_destruct;
- (void)onClickLikeBtn:(id)arg1;
- (void)setHost;
- (void)updateLayoutConstraints;
- (id)initWithFrameWithColor:(struct CGRect)arg1 color:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

