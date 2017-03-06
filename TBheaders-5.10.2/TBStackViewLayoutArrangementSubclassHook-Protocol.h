//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TBStackViewLayoutArrangementSubclassHook <NSObject>

@optional
@property(readonly, nonatomic) long long centerAttributeForCanvasConnections;
@property(readonly, nonatomic) long long maxAttributeForCanvasConnections;
@property(readonly, nonatomic) long long minAttributeForCanvasConnections;
@property(readonly, nonatomic) long long dimensionAttributeForCurrentAxis;
- (long long)layoutRelationForCanvasConnectionForAttribute:(long long)arg1;
- (void)updateCanvasConnectionConstraintsIfNecessary;
- (void)removeDeprecatedConstraints;
@end
