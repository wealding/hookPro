//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPDataRequest.h"

@interface AMPBlacklistRequest : AMPDataRequest
{
    long long _pageNo;	// 8 = 0x8
    long long _pageSize;	// 16 = 0x10
}

@property(readonly, nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(readonly, nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
- (id)generatePacket;
- (id)parseMtopData:(id)arg1;
- (id)initWithPageNo:(long long)arg1 pageSize:(long long)arg2;

@end
