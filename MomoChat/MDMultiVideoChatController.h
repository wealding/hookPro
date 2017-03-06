//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AgoraRtcEngineDelegate.h"
#import "MDMultiVideoChatSessionDelegate.h"
#import "MDMultiVideoChatWatchSingleViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class AgoraRtcEngineKit, AgoraYuvEnhancerObjc, MDChatGroupHandler, MDMultiVideoChatSuspensionView, MDMultiVideoChatView, MDMultiVideoChatWatchSingleView, MDMultiVideoRequestHandler, MomoGroupProfileInfo, NSMutableArray, NSMutableDictionary, NSString, UILabel, UIWindow;

@interface MDMultiVideoChatController : NSObject <AgoraRtcEngineDelegate, MDMultiVideoChatSessionDelegate, MDMultiVideoChatWatchSingleViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate>
{
    _Bool _isBroadcaster;
    _Bool _isAudioMuted;
    _Bool _isVideoMuted;
    _Bool _needHideSuspensionView;
    _Bool _anchorListTimerFired;
    NSString *_currentGid;
    unsigned long long _mediaType;
    long long _clientRole;
    AgoraRtcEngineKit *_rtcEngine;
    AgoraYuvEnhancerObjc *_agoraEnhancer;
    NSString *_channelId;
    NSString *_channelKey;
    unsigned long long _uid;
    MomoGroupProfileInfo *_gpi;
    NSMutableDictionary *_videoSessions;
    MDMultiVideoChatView *_chatView;
    UILabel *_cidLabel;
    UIWindow *_videoChatWindow;
    MDMultiVideoChatSuspensionView *_suspensionView;
    MDMultiVideoChatWatchSingleView *_singleView;
    MDMultiVideoRequestHandler *_requestHandler;
    unsigned long long _status;
    NSMutableDictionary *_videoStateUsers;
    id <MDVideoChannelFinishDelegate> _delegate;
    NSMutableDictionary *_broadcasterTable;
    NSMutableArray *_broadcasterList;
    NSMutableArray *_agoraBroadcasterList;
    id _tempStronger;
    unsigned long long _currentAudienceCount;
    MDChatGroupHandler *_chatHandler;
    NSString *_targetId;
}

+ (id)GroupVideoChatGuideView;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) MDChatGroupHandler *chatHandler; // @synthesize chatHandler=_chatHandler;
@property(nonatomic) unsigned long long currentAudienceCount; // @synthesize currentAudienceCount=_currentAudienceCount;
@property(retain, nonatomic) id tempStronger; // @synthesize tempStronger=_tempStronger;
@property(nonatomic) _Bool anchorListTimerFired; // @synthesize anchorListTimerFired=_anchorListTimerFired;
@property(nonatomic) _Bool needHideSuspensionView; // @synthesize needHideSuspensionView=_needHideSuspensionView;
@property(retain, nonatomic) NSMutableArray *agoraBroadcasterList; // @synthesize agoraBroadcasterList=_agoraBroadcasterList;
@property(retain, nonatomic) NSMutableArray *broadcasterList; // @synthesize broadcasterList=_broadcasterList;
@property(retain, nonatomic) NSMutableDictionary *broadcasterTable; // @synthesize broadcasterTable=_broadcasterTable;
@property(nonatomic) __weak id <MDVideoChannelFinishDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *videoStateUsers; // @synthesize videoStateUsers=_videoStateUsers;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) MDMultiVideoRequestHandler *requestHandler; // @synthesize requestHandler=_requestHandler;
@property(retain, nonatomic) MDMultiVideoChatWatchSingleView *singleView; // @synthesize singleView=_singleView;
@property(retain, nonatomic) MDMultiVideoChatSuspensionView *suspensionView; // @synthesize suspensionView=_suspensionView;
@property(retain, nonatomic) UIWindow *videoChatWindow; // @synthesize videoChatWindow=_videoChatWindow;
@property(retain, nonatomic) UILabel *cidLabel; // @synthesize cidLabel=_cidLabel;
@property(retain, nonatomic) MDMultiVideoChatView *chatView; // @synthesize chatView=_chatView;
@property(nonatomic) _Bool isVideoMuted; // @synthesize isVideoMuted=_isVideoMuted;
@property(nonatomic) _Bool isAudioMuted; // @synthesize isAudioMuted=_isAudioMuted;
@property(retain, nonatomic) NSMutableDictionary *videoSessions; // @synthesize videoSessions=_videoSessions;
@property(retain, nonatomic) MomoGroupProfileInfo *gpi; // @synthesize gpi=_gpi;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *channelKey; // @synthesize channelKey=_channelKey;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) AgoraYuvEnhancerObjc *agoraEnhancer; // @synthesize agoraEnhancer=_agoraEnhancer;
@property(retain, nonatomic) AgoraRtcEngineKit *rtcEngine; // @synthesize rtcEngine=_rtcEngine;
@property(nonatomic) long long clientRole; // @synthesize clientRole=_clientRole;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool isBroadcaster; // @synthesize isBroadcaster=_isBroadcaster;
@property(retain, nonatomic) NSString *currentGid; // @synthesize currentGid=_currentGid;
- (void).cxx_destruct;
- (id)currentGroupProfile;
- (void)didTappedKickUser:(id)arg1;
- (void)exitFromSingleView:(id)arg1;
- (void)showTips:(id)arg1 goodOrNot:(_Bool)arg2;
- (void)leaveSession;
- (void)resignSuspensionView;
- (void)enterSession:(id)arg1;
- (void)switchToSuspensionView;
- (id)groupInfoWithGroupId:(id)arg1;
- (void)destroyChannel;
- (void)setAgoraClientRole:(long long)arg1;
- (void)changeToBroadcasterRole;
- (void)changeToAudienceRole;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleVirtualGift;
- (void)aimAtOne:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didTapBottomLookersView;
- (void)cameraSwichButtonTapped;
- (void)joinButtonTapped;
- (void)inviteButtonTapped;
- (void)settingButtonTapped;
- (void)quitButtonTapped;
- (void)muteLocalAudioStream:(_Bool)arg1;
- (void)muteVideo:(_Bool)arg1;
- (void)muteVideoButtonTapped;
- (void)didLongPressedVideoView:(id)arg1;
- (void)didTappedVideoView:(id)arg1;
- (void)rtcEngineConnectionDidLost:(id)arg1;
- (void)rtcEngine:(id)arg1 didVideoMuted:(_Bool)arg2 byUid:(unsigned long long)arg3;
- (void)rtcEngine:(id)arg1 didAudioMuted:(_Bool)arg2 byUid:(unsigned long long)arg3;
- (void)rtcEngine:(id)arg1 didJoinedOfUid:(unsigned long long)arg2 elapsed:(long long)arg3;
- (void)rtcEngine:(id)arg1 didJoinChannel:(id)arg2 withUid:(unsigned long long)arg3 elapsed:(long long)arg4;
- (void)rtcEngine:(id)arg1 didOccurError:(long long)arg2;
- (void)rtcEngine:(id)arg1 didOfflineOfUid:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)rtcEngine:(id)arg1 firstRemoteVideoDecodedOfUid:(unsigned long long)arg2 size:(struct CGSize)arg3 elapsed:(long long)arg4;
- (void)failRecvKeepAliveRetPacket:(id)arg1;
- (void)didRecvKeepAliveRetPacket:(id)arg1;
- (void)updateVideoStateUsers:(id)arg1 mute:(_Bool)arg2;
- (void)updateVideoStatus;
- (_Bool)checkEqualBroadcasterList:(id)arg1;
- (void)updateBroadcasterList:(id)arg1;
- (void)updateBroadcastersTable:(id)arg1;
- (id)broadcasterSessions;
- (void)updateVideoSessionView:(id)arg1;
- (void)updateChatViewInterface;
- (void)resetToDefault;
- (void)leaveChannel;
- (id)uidString:(unsigned long long)arg1;
- (id)videoSessionOfUid:(unsigned long long)arg1;
- (id)localSession;
- (void)addLocalSession;
- (int)joinVideoChat:(id)arg1 channelId:(id)arg2 channelKey:(id)arg3 uid:(unsigned long long)arg4 isBroadcaster:(_Bool)arg5;
- (_Bool)isBusy;
- (struct CGRect)multiVideoChatViewFrame;
- (_Bool)isInMultiVideoChatView;
- (void)muteRemoteVideoStreamPlay:(_Bool)arg1;
- (void)muteRemoteAudioStreamPlay:(_Bool)arg1;
- (unsigned long long)currentRole;
- (unsigned long long)currentAnchorCount;
- (void)dealloc;
- (id)initWithVideoChannelDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
