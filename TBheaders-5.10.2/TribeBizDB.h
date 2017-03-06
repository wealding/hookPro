//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TribeBizDB : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)updateComplexTribeMessage:(id)arg1 imageUrl:(id)arg2 save:(_Bool)arg3;
- (id)getImageUrlOfComplexTribeMessage:(id)arg1;
- (id)getExtDataOfTribeMessage:(id)arg1;
- (_Bool)updateTribeMembers:(id)arg1 andTribeId:(id)arg2 andSave:(_Bool)arg3;
- (_Bool)removeAllSysDBTribe:(_Bool)arg1;
- (_Bool)removeAllDBTribeMsg:(_Bool)arg1;
- (_Bool)removeDBTribe:(id)arg1 andSave:(_Bool)arg2;
- (_Bool)clearTribeMessagesWithSave:(_Bool)arg1;
- (_Bool)clearLocalTribeMsgs:(id)arg1;
- (_Bool)removeDBTribeMessage:(id)arg1 andSave:(_Bool)arg2;
- (_Bool)deleteDBTribeMessage:(id)arg1 andSave:(_Bool)arg2;
- (id)getAllTribeMessagesWithTribeId:(id)arg1 andFromTime:(id)arg2 andSortDescriptors:(id)arg3;
- (id)getAllTribeMessagesWithTribeId:(id)arg1 andFromTime:(id)arg2 andOrderByTime:(_Bool)arg3 andOrderByIndex:(_Bool)arg4;
- (_Bool)updateTribeLists:(id)arg1 withSave:(_Bool)arg2;
- (id)insertTribeMessage:(id)arg1 toTribe:(id)arg2 withType:(int)arg3 extData:(id)arg4;
- (id)insertTribeMessage:(id)arg1 toTribe:(id)arg2 withType:(int)arg3;
- (id)insertTribeMessage:(id)arg1 toTribe:(id)arg2;

@end
