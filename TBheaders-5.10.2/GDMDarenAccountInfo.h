//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GDMDarenAccountInfo : NSObject
{
    _Bool _isV;	// 8 = 0x8
    NSString *_accountName;	// 16 = 0x10
    NSString *_accountPic;	// 24 = 0x18
    NSString *_accountId;	// 32 = 0x20
}

@property _Bool isV; // @synthesize isV=_isV;
@property(retain) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain) NSString *accountPic; // @synthesize accountPic=_accountPic;
@property(retain) NSString *accountName; // @synthesize accountName=_accountName;
- (void).cxx_destruct;

@end

