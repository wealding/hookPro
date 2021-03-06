//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WQCall.h"

@class NSString, WQPermission;
@protocol WQHandlerCallback;

@interface WQHandler : WQCall
{
    _Bool _shouldOpenUI;	// 8 = 0x8
    id <WQHandlerCallback> callback;	// 16 = 0x10
    CDUnknownBlockType syncCallbackBlock;	// 24 = 0x18
    CDUnknownBlockType asyncCallbackBlock;	// 32 = 0x20
    NSString *handlerEvent;	// 40 = 0x28
    WQPermission *_eventPermission;	// 48 = 0x30
    NSString *_bindAppKey;	// 56 = 0x38
}

@property(nonatomic) _Bool shouldOpenUI; // @synthesize shouldOpenUI=_shouldOpenUI;
@property(retain, nonatomic) NSString *bindAppKey; // @synthesize bindAppKey=_bindAppKey;
@property(retain, nonatomic) WQPermission *eventPermission; // @synthesize eventPermission=_eventPermission;
@property(retain, nonatomic) NSString *handlerEvent; // @synthesize handlerEvent;
@property(copy, nonatomic) CDUnknownBlockType asyncCallbackBlock; // @synthesize asyncCallbackBlock;
@property(copy, nonatomic) CDUnknownBlockType syncCallbackBlock; // @synthesize syncCallbackBlock;
@property(retain, nonatomic) id <WQHandlerCallback> callback; // @synthesize callback;
- (void).cxx_destruct;
- (void)onRemovedFromConnector;
- (void)onAddedToConnector;
- (_Bool)enable;
- (id)initWithEvent:(id)arg1 withAsyncBlock:(CDUnknownBlockType)arg2 needRunInMainThread:(_Bool)arg3 shouldOpenUI:(_Bool)arg4;
- (id)initWithEvent:(id)arg1 withSyncBlock:(CDUnknownBlockType)arg2 needRunInMainThread:(_Bool)arg3 shouldOpenUI:(_Bool)arg4;
- (id)initWithEvent:(id)arg1 withCallback:(id)arg2 withContext:(id)arg3 needRunInMainThread:(_Bool)arg4 shouldOpenUI:(_Bool)arg5;
- (id)initWithEvent:(id)arg1 shouldOpenUI:(_Bool)arg2;
- (id)initWithEvent:(id)arg1;

@end

