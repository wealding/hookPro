//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDLikeTopicListHandlerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ClickMoreView, MDLikeTopicListHandler, NSString, UITableView;

@interface MDLikeTopicListController : MDViewController <UITableViewDataSource, UITableViewDelegate, MDLikeTopicListHandlerDelegate>
{
    NSString *_feedid;
    MDLikeTopicListHandler *_likeHandler;
    NSString *_requestUrl;
    UITableView *_tableView;
    ClickMoreView *_moreView;
}

@property(retain, nonatomic) ClickMoreView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(retain, nonatomic) MDLikeTopicListHandler *likeHandler; // @synthesize likeHandler=_likeHandler;
@property(retain, nonatomic) NSString *feedid; // @synthesize feedid=_feedid;
- (void).cxx_destruct;
- (void)loadLikedUserSuccess:(_Bool)arg1 message:(id)arg2 hasMore:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)clickReturn;
- (void)loadMoreUsers:(id)arg1;
- (void)configureNavBar;
- (void)configureTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFeedid:(id)arg1 requestUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

