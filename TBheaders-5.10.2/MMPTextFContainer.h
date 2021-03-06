//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MMPTextFFieldDelegate-Protocol.h"

@class MMPTextFField, NSString, UIButton, UILabel, UIView;
@protocol MMPTextFContainerDelegate;

@interface MMPTextFContainer : NSObject <MMPTextFFieldDelegate>
{
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_scanPID;	// 8 = 0x8
    _Bool _fromMiniPay;	// 16 = 0x10
    _Bool _showClearButtonWhileEditting;	// 17 = 0x11
    _Bool _shouldHiddenAlways;	// 18 = 0x12
    NSObject<MMPTextFContainerDelegate> *_textDelegate;	// 24 = 0x18
    UILabel *_leftView;	// 32 = 0x20
    UIView *_backView;	// 40 = 0x28
    MMPTextFField *_pwdField;	// 48 = 0x30
    UIButton *_clearButton;	// 56 = 0x38
}

+ (void)load;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) MMPTextFField *pwdField; // @synthesize pwdField=_pwdField;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) _Bool shouldHiddenAlways; // @synthesize shouldHiddenAlways=_shouldHiddenAlways;
@property(nonatomic) _Bool showClearButtonWhileEditting; // @synthesize showClearButtonWhileEditting=_showClearButtonWhileEditting;
@property(nonatomic) _Bool fromMiniPay; // @synthesize fromMiniPay=_fromMiniPay;
@property(retain, nonatomic) UILabel *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) __weak NSObject<MMPTextFContainerDelegate> *textDelegate; // @synthesize textDelegate=_textDelegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (long long)getValueLength;
- (void)setKeyboard:(long long)arg1;
- (id)getFont;
- (_Bool)hasText;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)textinputDidBecomeFirstResponder;
- (void)textinputDidResignFirstResponder;
- (void)textDeleted;
- (void)textInput:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)showClearButton;
- (void)setHidden:(_Bool)arg1;
- (void)clearTextTouched:(id)arg1;
- (void)clear;
- (id)initWithFrame:(struct CGRect)arg1 onHost:(id)arg2;
@property(nonatomic) int allowedMaxNum;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

