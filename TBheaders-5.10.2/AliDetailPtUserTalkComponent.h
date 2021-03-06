//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliProductDetailComponent.h"

@class AliDetailPtUserTalkModel, TBTextLabel, UIImageView, UILabel;

@interface AliDetailPtUserTalkComponent : AliProductDetailComponent
{
    AliDetailPtUserTalkModel *_userTalkModel;	// 8 = 0x8
    UIImageView *_thumbnailsImg;	// 16 = 0x10
    TBTextLabel *_contentLabel;	// 24 = 0x18
    UIImageView *_tagImg;	// 32 = 0x20
    UIImageView *_authorAvatarImg;	// 40 = 0x28
    UILabel *_authorLabel;	// 48 = 0x30
    UILabel *_updateTimeLabel;	// 56 = 0x38
    UILabel *_likeNumLabel;	// 64 = 0x40
}

+ (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) UILabel *likeNumLabel; // @synthesize likeNumLabel=_likeNumLabel;
@property(retain, nonatomic) UILabel *updateTimeLabel; // @synthesize updateTimeLabel=_updateTimeLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UIImageView *authorAvatarImg; // @synthesize authorAvatarImg=_authorAvatarImg;
@property(retain, nonatomic) UIImageView *tagImg; // @synthesize tagImg=_tagImg;
@property(retain, nonatomic) TBTextLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *thumbnailsImg; // @synthesize thumbnailsImg=_thumbnailsImg;
@property(retain, nonatomic) AliDetailPtUserTalkModel *userTalkModel; // @synthesize userTalkModel=_userTalkModel;
- (void).cxx_destruct;
- (void)showUpdateTimeAndLikeNum;
- (void)showAuthorInfo;
- (void)showTagImg;
- (void)showThumbnailsImg;
- (void)setObject:(id)arg1;
- (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;

@end

