//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TMNativeCacheCenterData : NSObject
{
    NSString *_key;	// 8 = 0x8
    NSString *_jsonString;	// 16 = 0x10
    NSString *_keyHash;	// 24 = 0x18
    NSString *_listName;	// 32 = 0x20
    NSString *_md5Str;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *md5Str; // @synthesize md5Str=_md5Str;
@property(retain, nonatomic) NSString *listName; // @synthesize listName=_listName;
@property(retain, nonatomic) NSString *keyHash; // @synthesize keyHash=_keyHash;
@property(retain, nonatomic) NSString *jsonString; // @synthesize jsonString=_jsonString;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end
