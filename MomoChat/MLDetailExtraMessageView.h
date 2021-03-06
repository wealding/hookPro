//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MLGroupMessage, UIImageView, UILabel;

@interface MLDetailExtraMessageView : UIView
{
    _Bool _isTapped;
    CDUnknownBlockType _stopBlock;
    MLGroupMessage *_message;
    CDUnknownBlockType _deleteMessageBlock;
    UIImageView *_backgroundImageView;
    UIImageView *_markImageView;
    UIImageView *_arrowImageView;
    UILabel *_descLabel;
}

+ (long long)extraMessageViewWidth:(id)arg1 maxWidth:(double)arg2;
+ (double)extraMessageViewHeight;
@property(nonatomic) _Bool isTapped; // @synthesize isTapped=_isTapped;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *markImageView; // @synthesize markImageView=_markImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) CDUnknownBlockType deleteMessageBlock; // @synthesize deleteMessageBlock=_deleteMessageBlock;
@property(retain, nonatomic) MLGroupMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) CDUnknownBlockType stopBlock; // @synthesize stopBlock=_stopBlock;
- (void).cxx_destruct;
- (void)hideViewAfter;
- (void)hideViewNoAfter;
- (void)setupWithMessage:(id)arg1 lineNumber:(long long)arg2;
- (void)touchUpInside:(id)arg1;
- (void)addTapGes;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

