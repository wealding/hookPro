//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface CContactVerifyLogic

{
    NSArray *m_arrVerifyContactWrap;
}


@property(nonatomic) BOOL m_bNotShowAlert; // @synthesize m_bNotShowAlert;

- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;	// IMP=0x01169533
- (BOOL)isBrandAccount;	// IMP=0x01169495
- (BOOL)isEnterpriseBrand;	// IMP=0x011693f7
- (void)ProcessStrangerContactTagByName:(id)arg1;	// IMP=0x011691bf
- (void)handleVerifyOk:(id)arg1;	// IMP=0x01168e3d
- (id)getErrorTitle;	// IMP=0x01168b81
- (void)startForSendVerifyMsg:(id)arg1 parentView:(id)arg2 verifyMsg:(id)arg3;	// IMP=0x01168a79
- (void)startWithVerifyContactWrap:(id)arg1 opCode:(unsigned long)arg2 parentView:(id)arg3 fromChatRoom:(BOOL)arg4;	// IMP=0x01168915
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0116886f
- (void)updateWordCount:(id)arg1;	// IMP=0x01168721
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;	// IMP=0x011685e1
- (void)showVerifyAlert;	// IMP=0x01168401
- (void)addTextField:(id)arg1;	// IMP=0x0116821d
- (float)getTextFieldTopMargin;	// IMP=0x0116813d
- (id)getAlertMessage;	// IMP=0x01167e61
- (id)getAlertTitle;	// IMP=0x01167b87
- (void)onSendContactVerify:(id)arg1;	// IMP=0x01167b33
- (void)doVerifyByAlertView:(id)arg1;	// IMP=0x01167abd
- (void)dealloc;	// IMP=0x01167a0f
- (BOOL)doVerify:(id)arg1;	// IMP=0x011672a5
- (void)SaveToLocalDB;	// IMP=0x01166f6d
- (BOOL)needSetSayHelloStatus;	// IMP=0x01166e4b
- (BOOL)needSaveToLocalDB;	// IMP=0x01166e19
- (id)filterString:(id)arg1;	// IMP=0x01166cef
- (void)stopLoadingAndShowOK;	// IMP=0x01166ca7
- (void)stopLoading;	// IMP=0x01166c89
- (void)startLoading;	// IMP=0x01166b83
- (id)getLoadingOkText;	// IMP=0x0116694d
- (id)getLoadingText;	// IMP=0x01166715
- (void)reset;	// IMP=0x011666e1
- (id)init;	// IMP=0x01166629

@end

