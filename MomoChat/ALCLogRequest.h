//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALCBaseRequest.h"

@class ALCLogCoder;

@interface ALCLogRequest : ALCBaseRequest
{
    ALCLogCoder *_coder;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setLogParams:(id)arg1;
- (void)processRequestFinishBlock:(CDUnknownBlockType)arg1;

@end

