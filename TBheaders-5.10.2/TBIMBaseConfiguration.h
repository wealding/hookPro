//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMConfigAdapter-Protocol.h"

@class NSString;
@protocol TBIMAttributedStringHandlerAdapter;

@interface TBIMBaseConfiguration : NSObject <TBIMConfigAdapter>
{
    id <TBIMAttributedStringHandlerAdapter> _imAttributedStringHandlerAdapter;	// 8 = 0x8
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <TBIMAttributedStringHandlerAdapter> imAttributedStringHandlerAdapter; // @synthesize imAttributedStringHandlerAdapter=_imAttributedStringHandlerAdapter;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

