//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSNumber, NSString;

@interface JDShopDynamicCommentModel : JDModel
{
    NSNumber *_cId;
    NSNumber *_pCId;
    NSString *_headPic;
    NSString *_pHeadPic;
    NSString *_userName;
    NSString *_pUserName;
    NSString *_comment;
    NSString *_pComment;
    NSString *_cTime;
    NSString *_pCTime;
    NSNumber *_mySelf;
    NSNumber *_pmySelf;
}

@property(retain, nonatomic) NSNumber *pmySelf; // @synthesize pmySelf=_pmySelf;
@property(retain, nonatomic) NSNumber *mySelf; // @synthesize mySelf=_mySelf;
@property(retain, nonatomic) NSString *pCTime; // @synthesize pCTime=_pCTime;
@property(retain, nonatomic) NSString *cTime; // @synthesize cTime=_cTime;
@property(retain, nonatomic) NSString *pComment; // @synthesize pComment=_pComment;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *pUserName; // @synthesize pUserName=_pUserName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *pHeadPic; // @synthesize pHeadPic=_pHeadPic;
@property(retain, nonatomic) NSString *headPic; // @synthesize headPic=_headPic;
@property(retain, nonatomic) NSNumber *pCId; // @synthesize pCId=_pCId;
@property(retain, nonatomic) NSNumber *cId; // @synthesize cId=_cId;
- (void).cxx_destruct;
- (_Bool)praseDataWithDic:(id)arg1;

@end

