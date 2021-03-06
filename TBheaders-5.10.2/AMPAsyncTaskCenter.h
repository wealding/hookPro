//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol AMPDataGroup, OS_dispatch_queue;

@interface AMPAsyncTaskCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_asyncTaskConcurrentQueue;	// 8 = 0x8
    id <AMPDataGroup> _taskCache;	// 16 = 0x10
}

+ (id)defualtCenter;
@property(retain, nonatomic) id <AMPDataGroup> taskCache; // @synthesize taskCache=_taskCache;
- (void).cxx_destruct;
- (id)generateTaskId;
- (void)reset;
- (_Bool)isTaskFinished:(id)arg1;
- (void)cancelTask:(id)arg1;
- (id)performTaskBlock:(CDUnknownBlockType)arg1 delay:(double)arg2;
- (id)performTaskBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

