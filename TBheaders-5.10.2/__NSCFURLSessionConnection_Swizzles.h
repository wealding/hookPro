//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURLSessionTask;

@interface __NSCFURLSessionConnection_Swizzles : NSObject
{
}

- (void)PD__didFinishWithError:(id)arg1;
- (void)PD__didReceiveResponse:(id)arg1 sniff:(_Bool)arg2;
- (void)PD__didReceiveData:(id)arg1;
- (void)PD__redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(id)arg3;

// Remaining properties
@property(copy) NSURLSessionTask *task; // @dynamic task;

@end

