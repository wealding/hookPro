//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZDMRequest.h"

@class NSArray, NSString, ShareModel;

@interface ZDMTabsRequest : ZDMRequest
{
    NSString *_titleImagePath;
    ShareModel *_shareInfo;
    NSArray *_tabs;
}

@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) ShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) NSString *titleImagePath; // @synthesize titleImagePath=_titleImagePath;
- (void).cxx_destruct;
- (void)responseTabs:(CDUnknownBlockType)arg1;
- (id)init;

@end
