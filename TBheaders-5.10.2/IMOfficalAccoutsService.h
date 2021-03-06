//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPMsgBusHelp.h"

#import "TBAMPServiceDelegate-Protocol.h"

@class AMPLRUDataGroup, NSString, YHMuticastDelegate;
@protocol IMOfficalAccoutsServiceDelegate;

@interface IMOfficalAccoutsService : AMPMsgBusHelp <TBAMPServiceDelegate>
{
    AMPLRUDataGroup *_accoutsCache;	// 8 = 0x8
    YHMuticastDelegate<IMOfficalAccoutsServiceDelegate> *_mutiCastDelegate;	// 16 = 0x10
}

+ (id)sharedService;
@property(retain, nonatomic) YHMuticastDelegate<IMOfficalAccoutsServiceDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
@property(retain, nonatomic) AMPLRUDataGroup *accoutsCache; // @synthesize accoutsCache=_accoutsCache;
- (void).cxx_destruct;
- (id)dateFromString:(id)arg1;
- (void)ampOfficalHeadUpdatedWithMsgTypeId:(id)arg1;
- (void)ampServiceDidInitBase:(id)arg1;
- (void)innerOfficalAccountMessagesWithArray:(id)arg1 messageTypeId:(id)arg2 fromMessageId:(id)arg3 size:(long long)arg4;
- (void)innerUpdateSubcribeRelationsWithArray:(id)arg1;
- (void)saveMemeoryAndDBWithAccountInfo:(id)arg1;
- (id)readFromDBAndSaveMemeoryWithMsgTypeId:(id)arg1 isInvalid:(_Bool *)arg2;
- (void)deletedMemeoryAndDBWithMsgTypeId:(id)arg1;
- (void)checkIfNeedAndFetchOfficalAccountImageForAccountInfo:(id)arg1;
- (void)cancheAccountsServiceFromDB;
- (void)onPushMessageArrived:(id)arg1;
- (void)clearOfficalAccountNewFriendUnreadedAndExt;
- (id)officalAccountNewFriendExtsFromJsonString:(id)arg1;
- (id)officalAccountNewFriendMsgTypeId;
- (void)deleteMessageFromMessageTypeId:(id)arg1 withMessageIds:(id)arg2;
- (void)messageListWithMessageTypeId:(id)arg1 fromMessageId:(id)arg2 size:(long long)arg3;
- (void)getOffcialRecentContactList;
- (void)updateOfficalAccountLastMessageWithMCDetailItem:(id)arg1 forMessageTypeId:(id)arg2;
- (void)clearOfficalLastMessageWithMessageTypeId:(id)arg1;
- (void)clearOfficalUnreadedWithMessageTypeId:(id)arg1;
- (void)updateOfficalAccountWithMessageTypeId:(id)arg1 isSubscribe:(_Bool)arg2 isPush:(_Bool)arg3;
- (id)officalAccountInfoWithMessageTypeId:(id)arg1;
- (void)updateSubcribeRelations;
- (id)sortSubscribeRelations;
- (id)subscribeRelations;
- (void)updateOfficalAccountsStatus:(id)arg1 needCompensate:(_Bool)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)resetService;
- (void)startService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

