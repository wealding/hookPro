//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AgoraRtcVideoCanvas, NSString, UIImageView, UIView;

@interface MDMultiVideoChatSession : NSObject
{
    _Bool _isVideoMuted;
    _Bool _isAudioMuted;
    unsigned long long _uid;
    AgoraRtcVideoCanvas *_canvas;
    NSString *_momoId;
    UIView *_holdingView;
    UIImageView *_avatarView;
    UIImageView *_audioStatusView;
}

+ (id)localSessionWithUid:(unsigned long long)arg1;
@property(nonatomic) _Bool isAudioMuted; // @synthesize isAudioMuted=_isAudioMuted;
@property(nonatomic) _Bool isVideoMuted; // @synthesize isVideoMuted=_isVideoMuted;
@property(retain, nonatomic) UIImageView *audioStatusView; // @synthesize audioStatusView=_audioStatusView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *holdingView; // @synthesize holdingView=_holdingView;
@property(retain, nonatomic) NSString *momoId; // @synthesize momoId=_momoId;
@property(retain, nonatomic) AgoraRtcVideoCanvas *canvas; // @synthesize canvas=_canvas;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)initWithUid:(unsigned long long)arg1;

@end
