//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface POPAnimationEvent : NSObject
{
    unsigned long long _type;
    double _time;
    NSString *_animationDescription;
}

@property(copy, nonatomic) NSString *animationDescription; // @synthesize animationDescription=_animationDescription;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_appendDescription:(id)arg1;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 time:(double)arg2;

@end
