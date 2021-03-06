//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDProfileBaseCell2.h"

#import "MDProfileBaseProtocol.h"

@class MDUserProfile, NSString, UILabel;

@interface MDProfileOtherInfoCell : MDProfileBaseCell2 <MDProfileBaseProtocol>
{
    UILabel *_sinaLabelTitle;
    UILabel *_sinaLabelText;
    MDUserProfile *_userProfile;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) MDUserProfile *userProfile; // @synthesize userProfile=_userProfile;
@property(retain, nonatomic) UILabel *sinaLabelText; // @synthesize sinaLabelText=_sinaLabelText;
@property(retain, nonatomic) UILabel *sinaLabelTitle; // @synthesize sinaLabelTitle=_sinaLabelTitle;
- (void).cxx_destruct;
- (void)tapLookSina;
- (id)getRelationShipWithUPI:(id)arg1;
- (void)bindModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

