//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSNSFeedItemTag : TBJSONModel
{
    float _x;	// 8 = 0x8
    float _y;	// 12 = 0xc
    float _widthL;	// 16 = 0x10
    NSString *_tagName;	// 24 = 0x18
    unsigned long long _direction;	// 32 = 0x20
}

@property(nonatomic) float widthL; // @synthesize widthL=_widthL;
@property(nonatomic) float y; // @synthesize y=_y;
@property(nonatomic) float x; // @synthesize x=_x;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

