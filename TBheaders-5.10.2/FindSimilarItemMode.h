//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SearchReusableViewData-Protocol.h"

@class NSString;

@interface FindSimilarItemMode : NSObject <SearchReusableViewData>
{
    unsigned long long dataType;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long dataType; // @synthesize dataType;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

