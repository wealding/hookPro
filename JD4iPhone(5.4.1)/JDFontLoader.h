//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDFontLoaderOperation, NSString, NSURL;

@interface JDFontLoader : NSObject
{
    NSURL *_url;
    NSString *_loadId;
    JDFontLoaderOperation *_loaderOperation;
}

@property(retain, nonatomic) JDFontLoaderOperation *loaderOperation; // @synthesize loaderOperation=_loaderOperation;
@property(copy, nonatomic) NSString *loadId; // @synthesize loadId=_loadId;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getFontsFolderPath;
- (_Bool)fileExist:(id)arg1;
@property(readonly, nonatomic) NSString *filePath;
- (void)cancel;
- (void)startWithProgress:(CDUnknownBlockType)arg1 completed:(CDUnknownBlockType)arg2;
- (id)initWithId:(id)arg1 url:(id)arg2;

@end

