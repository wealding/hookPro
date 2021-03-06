//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMMessageAdapter-Protocol.h"

@class NSString, TBMCDetailItem;

@interface TBIMMessageOffical : NSObject <TBIMMessageAdapter>
{
    TBMCDetailItem *_data;	// 8 = 0x8
    NSString *_sessionId;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) TBMCDetailItem *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)accessibleLabel;
- (long long)Compare:(id)arg1;
- (_Bool)isSilent;
- (id)getSenderName;
- (id)getSender;
- (id)getSession;
- (_Bool)needSecurityNotice;
- (_Bool)isEqual:(id)arg1;
- (id)summary;
- (id)getSendTime;
- (id)getImageUrl;
- (id)getSessionId;
- (unsigned long long)getReadStatus;
- (unsigned long long)getSendStatus;
- (unsigned long long)getDirection;
- (id)getContent;
- (int)getMessageType;
- (id)getMessageID;
- (id)initWithData:(id)arg1;
- (id)getInerData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

