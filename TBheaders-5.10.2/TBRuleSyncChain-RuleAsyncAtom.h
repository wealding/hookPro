//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRuleSyncChain.h"

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TBRuleSyncChain (RuleAsyncAtom)
- (void)generateAsyncChain:(id)arg1 andHandleAtomBlock:(CDUnknownBlockType)arg2 andAtomReslutBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lockSemaphore; // @dynamic lockSemaphore;
@end

