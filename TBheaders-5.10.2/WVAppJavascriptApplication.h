//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, WVThreadSafeMutableDictionary;
@protocol OS_dispatch_queue, WVJSBridgeCallbackDelegate;

@interface WVAppJavascriptApplication : NSObject
{
    id <WVJSBridgeCallbackDelegate> _callbackDelegate;	// 8 = 0x8
    NSMutableDictionary *_dynamicHandlers;	// 16 = 0x10
    NSMutableDictionary *_dynamicHandlerCache;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dynamicHandlerQueue;	// 32 = 0x20
    WVThreadSafeMutableDictionary *_handlers;	// 40 = 0x28
    WVThreadSafeMutableDictionary *_alias;	// 48 = 0x30
    WVThreadSafeMutableDictionary *_resetHandlers;	// 56 = 0x38
    WVThreadSafeMutableDictionary *_deallocHandlers;	// 64 = 0x40
}

+ (id)sharedInstance;
@property(retain, nonatomic) WVThreadSafeMutableDictionary *deallocHandlers; // @synthesize deallocHandlers=_deallocHandlers;
@property(retain, nonatomic) WVThreadSafeMutableDictionary *resetHandlers; // @synthesize resetHandlers=_resetHandlers;
@property(retain, nonatomic) WVThreadSafeMutableDictionary *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) WVThreadSafeMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dynamicHandlerQueue; // @synthesize dynamicHandlerQueue=_dynamicHandlerQueue;
@property(retain, nonatomic) NSMutableDictionary *dynamicHandlerCache; // @synthesize dynamicHandlerCache=_dynamicHandlerCache;
@property(retain, nonatomic) NSMutableDictionary *dynamicHandlers; // @synthesize dynamicHandlers=_dynamicHandlers;
@property(nonatomic) __weak id <WVJSBridgeCallbackDelegate> callbackDelegate; // @synthesize callbackDelegate=_callbackDelegate;
- (void).cxx_destruct;
- (void)deallocHandlers:(id)arg1 withWebView:(id)arg2;
- (void)resetHandlers:(id)arg1 withWebView:(id)arg2;
- (void)registerHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3 withResetHandler:(CDUnknownBlockType)arg4 withDeallocHandler:(CDUnknownBlockType)arg5;
- (void)registerHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3 withResetHandler:(CDUnknownBlockType)arg4;
- (_Bool)isTargetDynamicHandler:(Class)arg1 withMethod:(SEL)arg2;
- (Class)findDynamicHandler:(id)arg1 withClassName:(id)arg2;
- (Class)findDynamicHandler:(id)arg1;
- (CDUnknownBlockType)findHandler:(id *)arg1;
- (void)registerHandlerAlias:(id)arg1;
- (void)registerClass:(Class)arg1 withClassName:(id)arg2;
- (void)registerHandler:(id)arg1 withClassName:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)registerHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;

@end

