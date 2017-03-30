//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBase.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSURL;
@protocol APAccessDelegate;

__attribute__((visibility("hidden")))
@interface APAccess : APBase <PBMessageObserverDelegate>
{
    NSURL *_thirdPartyUrl;
    id <APAccessDelegate> _delegate;
}

@property(nonatomic) __weak id <APAccessDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *thirdPartyUrl; // @synthesize thirdPartyUrl=_thirdPartyUrl;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onAPAccess:(id)arg1;
- (void)sendToWeixinSvrToAPAccess;
- (void)didFail;
- (void)didSuccess;
- (void)cancel;
- (void)start;
- (id)initWithSsid:(id)arg1 mac:(id)arg2 thirdPartyUrl:(id)arg3 delegate:(id)arg4;
- (void)dealloc;

@end
