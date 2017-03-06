//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface DTBaseResp : NSObject <NSCoding>
{
    long long _errorCode;	// 8 = 0x8
    NSString *_errorMessage;	// 16 = 0x10
    long long _reqType;	// 24 = 0x18
    NSString *_appId;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) long long reqType; // @synthesize reqType=_reqType;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
