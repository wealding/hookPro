//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, TBShareContactMoreHeaderView, UISearchDisplayController, UITableView;
@protocol TBShareContactMoreViewDelegate;

@interface TBShareContactMoreViewController : TBViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate>
{
    UITableView *_tableView;	// 16 = 0x10
    id <TBShareContactMoreViewDelegate> _delegate;	// 24 = 0x18
    TBShareContactMoreHeaderView *_headerView;	// 32 = 0x20
    UISearchDisplayController *_searchDisplayController;	// 40 = 0x28
    NSMutableArray *_moreContactSections;	// 48 = 0x30
    NSMutableDictionary *_moreContacts;	// 56 = 0x38
    NSMutableArray *_recommendContacts;	// 64 = 0x40
    NSMutableArray *_searchContacts;	// 72 = 0x48
}

+ (_Bool)tbNeedNavibar;
@property(retain, nonatomic) NSMutableArray *searchContacts; // @synthesize searchContacts=_searchContacts;
@property(retain, nonatomic) NSMutableArray *recommendContacts; // @synthesize recommendContacts=_recommendContacts;
@property(retain, nonatomic) NSMutableDictionary *moreContacts; // @synthesize moreContacts=_moreContacts;
@property(retain, nonatomic) NSMutableArray *moreContactSections; // @synthesize moreContactSections=_moreContactSections;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(retain, nonatomic) TBShareContactMoreHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <TBShareContactMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)cancelSearch;
- (_Bool)isSearchText:(id)arg1 inName:(id)arg2 orPinyin:(id)arg3;
- (_Bool)searchText:(id)arg1 isMatchForModel:(id)arg2;
- (_Bool)isChinese:(id)arg1;
- (void)updateSearchContactsWithText:(id)arg1 scope:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)configCell:(id)arg1 withType:(unsigned long long)arg2 atIndexPath:(id)arg3;
- (void)initData;
- (void)initTableView;
- (void)initHeaderView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

