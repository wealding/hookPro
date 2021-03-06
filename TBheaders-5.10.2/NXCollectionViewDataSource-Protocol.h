//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "NXCommonCollectionViewDataSource-Protocol.h"

@class NSIndexPath, NSString, NXCellNode, NXCollectionView;

@protocol NXCollectionViewDataSource <NXCommonCollectionViewDataSource, NSObject>
- (NXCellNode *)collectionView:(NXCollectionView *)arg1 nodeForItemAtIndexPath:(NSIndexPath *)arg2;

@optional
- (void)collectionViewUnlockDataSource:(NXCollectionView *)arg1;
- (void)collectionViewLockDataSource:(NXCollectionView *)arg1;
- (CDStruct_42a63532)collectionView:(NXCollectionView *)arg1 constrainedSizeForNodeAtIndexPath:(NSIndexPath *)arg2;
- (NXCellNode *)collectionView:(NXCollectionView *)arg1 nodeForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

