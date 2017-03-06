//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASPagerDataSource.h"

@class ASPagerNode, JDSHHdxBannerNode, NSArray, NSString;

@interface JDSHHdxPagerDataSource : NSObject <ASPagerDataSource>
{
    id <ASTableDelegate> _tableDelegate;
    NSArray *_data;
    ASPagerNode *_pagerNode;
    JDSHHdxBannerNode *_bannerNode;
}

@property(nonatomic) __weak JDSHHdxBannerNode *bannerNode; // @synthesize bannerNode=_bannerNode;
@property(nonatomic) __weak ASPagerNode *pagerNode; // @synthesize pagerNode=_pagerNode;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) __weak id <ASTableDelegate> tableDelegate; // @synthesize tableDelegate=_tableDelegate;
- (void).cxx_destruct;
- (long long)numberOfPagesInPagerNode:(id)arg1;
- (id)pagerNode:(id)arg1 nodeAtIndex:(long long)arg2;
- (void)updateBannerNode:(id)arg1;
- (id)initWithDelegate:(id)arg1 pagerNode:(id)arg2;
- (id)init;
- (void)updateData:(id)arg1;
- (_Bool)isIndexValid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
