//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "InvoiceInputValidator.h"

@class NSString;

@interface InvoiceEmailInputValidator : InvoiceInputValidator
{
    NSString *_lastEmailStr;
}

@property(retain, nonatomic) NSString *lastEmailStr; // @synthesize lastEmailStr=_lastEmailStr;
- (void).cxx_destruct;
- (_Bool)validateInput:(id)arg1;

@end
