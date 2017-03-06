//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTakeoutViewModel.h"

@class NSString, TBTakeoutMyFavDelAPI, TBTakeoutMyFavDelModel;

@interface TBTakeoutMyFavDelViewModel : TBTakeoutViewModel
{
    int _type;	// 8 = 0x8
    NSString *_storeIds;	// 16 = 0x10
    TBTakeoutMyFavDelModel *_delModel;	// 24 = 0x18
    TBTakeoutMyFavDelAPI *_favDelApi;	// 32 = 0x20
}

@property(retain, nonatomic) TBTakeoutMyFavDelAPI *favDelApi; // @synthesize favDelApi=_favDelApi;
@property(retain, nonatomic) TBTakeoutMyFavDelModel *delModel; // @synthesize delModel=_delModel;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *storeIds; // @synthesize storeIds=_storeIds;
- (void).cxx_destruct;
- (void)onError:(id)arg1;
- (void)onSuccess;
- (void)parseResult:(id)arg1;
- (id)buildRequestParams;
- (id)serviceApi;
- (id)init;

@end
