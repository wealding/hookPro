//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSCharacterSet, NXASTextKitContext;

@protocol NXASTextKitTruncating <NSObject>
@property(readonly, nonatomic) struct CGRect truncationStringRect;
@property(readonly, nonatomic) vector_d5f79a51 visibleRanges;
- (id)initWithContext:(NXASTextKitContext *)arg1 truncationAttributedString:(NSAttributedString *)arg2 avoidTailTruncationSet:(NSCharacterSet *)arg3 constrainedSize:(struct CGSize)arg4;
@end

