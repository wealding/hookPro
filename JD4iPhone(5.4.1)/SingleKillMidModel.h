//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SingleKillListModel.h"

@class NSArray, NSNumber, NSString;

@interface SingleKillMidModel : SingleKillListModel
{
    NSNumber *_seckillType;
    NSNumber *_jumpType;
    NSString *_jumpUrl;
    NSString *_shopName;
    NSArray *_goodsList;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *goodsList; // @synthesize goodsList=_goodsList;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSNumber *jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSNumber *seckillType; // @synthesize seckillType=_seckillType;
- (void).cxx_destruct;

@end

