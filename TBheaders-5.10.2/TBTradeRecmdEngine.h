//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBTradeRecmdConfiguration, TBTradeRecmdProcessor;

@interface TBTradeRecmdEngine : NSObject
{
    NSString *_sourceChannel;	// 8 = 0x8
    TBTradeRecmdProcessor *_processor;	// 16 = 0x10
}

@property(retain, nonatomic) TBTradeRecmdProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) NSString *sourceChannel; // @synthesize sourceChannel=_sourceChannel;
- (void).cxx_destruct;
- (id)latestQueryResponse;
- (id)extralModel;
- (unsigned long long)recmdItemCount;
- (id)groupModelArray;
- (id)groupManagerArray;
- (id)recmdBrandModel;
- (id)recmdBrandManager;
- (void)removeActionBlockForKey:(unsigned long long)arg1;
- (void)registerActionBlock:(CDUnknownBlockType)arg1 forKey:(unsigned long long)arg2;
- (void)queryTradeRecommendWithCurrentPage:(unsigned long long)arg1 pageSize:(unsigned long long)arg2 specailParam:(id)arg3;
- (void)free;
- (void)setPageName:(id)arg1;
- (id)initWithSoureChannel:(id)arg1;
- (id)init;
@property(retain, nonatomic) TBTradeRecmdConfiguration *config;

@end
