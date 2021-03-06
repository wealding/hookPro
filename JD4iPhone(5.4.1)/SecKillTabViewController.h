//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

@class BrandKillViewController, JDImageView, JDStoreNetwork, NSString, SSSCategoryMenuListView, SSSGroupBuyingViewController, SSSTabModel, SSSTotalTabModel, SecKillBaseViewController, SecKillTabBarView, SecKillTimerManger, SingleKillViewController;

@interface SecKillTabViewController : JDViewController
{
    NSString *_tapUr;
    unsigned long long _tabIndex;
    _Bool _isTransViewController;
    _Bool _isFromLiangFanCell;
    JDStoreNetwork *_netRequest;
    SSSTotalTabModel *_totalTabModel;
    NSString *_seckillID;
    NSString *_jumpGid;
    SecKillTimerManger *_timerManager;
    SecKillTabBarView *_tabBarView;
    SingleKillViewController *_singleKillViewController;
    BrandKillViewController *_brandKillViewController;
    SSSGroupBuyingViewController *_groupBuyingiewController;
    SecKillBaseViewController *_currentViewController;
    JDImageView *_titleImageView;
    SSSCategoryMenuListView *_cateMenuView;
    SSSTabModel *_tabModel;
}

@property(nonatomic) _Bool isFromLiangFanCell; // @synthesize isFromLiangFanCell=_isFromLiangFanCell;
@property(retain, nonatomic) SSSTabModel *tabModel; // @synthesize tabModel=_tabModel;
@property(retain, nonatomic) SSSCategoryMenuListView *cateMenuView; // @synthesize cateMenuView=_cateMenuView;
@property(retain, nonatomic) JDImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(nonatomic) _Bool isTransViewController; // @synthesize isTransViewController=_isTransViewController;
@property(nonatomic) SecKillBaseViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) SSSGroupBuyingViewController *groupBuyingiewController; // @synthesize groupBuyingiewController=_groupBuyingiewController;
@property(retain, nonatomic) BrandKillViewController *brandKillViewController; // @synthesize brandKillViewController=_brandKillViewController;
@property(retain, nonatomic) SingleKillViewController *singleKillViewController; // @synthesize singleKillViewController=_singleKillViewController;
@property(retain, nonatomic) SecKillTabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(retain, nonatomic) SecKillTimerManger *timerManager; // @synthesize timerManager=_timerManager;
@property(copy, nonatomic) NSString *jumpGid; // @synthesize jumpGid=_jumpGid;
@property(copy, nonatomic) NSString *seckillID; // @synthesize seckillID=_seckillID;
@property(retain, nonatomic) SSSTotalTabModel *totalTabModel; // @synthesize totalTabModel=_totalTabModel;
@property(retain, nonatomic) JDStoreNetwork *netRequest; // @synthesize netRequest=_netRequest;
- (void).cxx_destruct;
- (struct CGRect)getViewFrame;
- (struct CGRect)p_getTabbarViewFrame;
- (id)getTimerManger;
- (void)changeSingleKillTabToBrandKill:(_Bool)arg1;
- (void)currentViewControllerViewScrollsToTop;
- (void)changeVCFrom:(id)arg1 toViewController:(id)arg2;
- (void)changedViewController:(unsigned long long)arg1 isFromLiangFanCell:(_Bool)arg2;
- (void)p_goToCateView:(id)arg1 select:(unsigned long long)arg2;
- (void)p_goToTabIndex:(unsigned long long)arg1 isFromLiangFanCell:(_Bool)arg2;
- (void)goToLiangTab;
- (void)viewWillLayoutSubviews;
- (void)goToTabIndex:(unsigned long long)arg1;
- (void)initViewController;
- (void)initTimer;
- (void)initView;
- (void)initData;
- (void)clockNoti:(id)arg1;
- (void)moreShop:(id)arg1;
- (void)removeNotifaction;
- (void)addNotifaction;
- (void)showCategoryView;
- (void)info;
- (void)share;
- (void)toRemindView;
- (void)updateRightItem;
- (void)updateTitleView;
- (void)updateView;
- (void)backButtonClicked;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTabIndex:(unsigned long long)arg1;
- (id)initWithGid:(id)arg1;
- (id)initWithPara:(id)arg1;
- (void)startTabRequest;

@end

