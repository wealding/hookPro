//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface MDMomentVideoResult : NSObject
{
    _Bool _needExpire;
    _Bool _hasGraffiti;
    NSString *_decoratorText;
    NSString *_themeID;
    double _duration;
    long long _expireTime;
    long long _hideMode;
    long long _cameraPosition;
    NSString *_filterID;
    NSMutableArray *_stickerIds;
    NSString *_faceID;
    NSString *_topicID;
    NSString *_originVideoUrl;
    NSString *_originVideoCoverUrl;
    NSString *_mosaicFilterImageUrl;
    NSString *_textAndStickerImageUrl;
    NSString *_complexVideoUrl;
    NSString *_complexVideoCoverUrl;
    NSString *_serverVideoUUID;
    long long _momentStep;
    long long _momentStatus;
    NSString *_publishSource;
    NSString *_publishFailMsg;
}

@property(retain, nonatomic) NSString *publishFailMsg; // @synthesize publishFailMsg=_publishFailMsg;
@property(retain, nonatomic) NSString *publishSource; // @synthesize publishSource=_publishSource;
@property(nonatomic) long long momentStatus; // @synthesize momentStatus=_momentStatus;
@property(nonatomic) long long momentStep; // @synthesize momentStep=_momentStep;
@property(retain, nonatomic) NSString *serverVideoUUID; // @synthesize serverVideoUUID=_serverVideoUUID;
@property(retain, nonatomic) NSString *complexVideoCoverUrl; // @synthesize complexVideoCoverUrl=_complexVideoCoverUrl;
@property(retain, nonatomic) NSString *complexVideoUrl; // @synthesize complexVideoUrl=_complexVideoUrl;
@property(retain, nonatomic) NSString *textAndStickerImageUrl; // @synthesize textAndStickerImageUrl=_textAndStickerImageUrl;
@property(retain, nonatomic) NSString *mosaicFilterImageUrl; // @synthesize mosaicFilterImageUrl=_mosaicFilterImageUrl;
@property(retain, nonatomic) NSString *originVideoCoverUrl; // @synthesize originVideoCoverUrl=_originVideoCoverUrl;
@property(retain, nonatomic) NSString *originVideoUrl; // @synthesize originVideoUrl=_originVideoUrl;
@property(retain, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
@property(retain, nonatomic) NSString *faceID; // @synthesize faceID=_faceID;
@property(retain, nonatomic) NSMutableArray *stickerIds; // @synthesize stickerIds=_stickerIds;
@property(nonatomic) _Bool hasGraffiti; // @synthesize hasGraffiti=_hasGraffiti;
@property(retain, nonatomic) NSString *filterID; // @synthesize filterID=_filterID;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(nonatomic) long long hideMode; // @synthesize hideMode=_hideMode;
@property(nonatomic) _Bool needExpire; // @synthesize needExpire=_needExpire;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *themeID; // @synthesize themeID=_themeID;
@property(retain, nonatomic) NSString *decoratorText; // @synthesize decoratorText=_decoratorText;
- (void).cxx_destruct;
- (id)paramsForPublishMoment;
- (id)paramsForUploadVideo;
- (id)momentDraftCoverFileUrl;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

