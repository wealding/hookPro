//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol TBCDNImageConfigProtocol;

@protocol TBCDNImageConfigProtocol <NSObject>
- (NSString *)getConfigUpdateNoticeName;
- (NSDictionary *)getConfigContent;

@optional
- (id <TBCDNImageConfigProtocol>)initWithGroupFileName:(NSString *)arg1;
@end

