//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailApiUnit : TBJSONModel
{
    NSString *_name;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (id)getApiName:(id)arg1;
+ (id)createApiUnit:(id)arg1 value:(id)arg2;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
