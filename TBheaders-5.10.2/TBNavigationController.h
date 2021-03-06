//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, UIPanGestureRecognizer, UISwipeGestureRecognizer, UIView, UIViewController;
@protocol TBNavigationControllerDelegate;

@interface TBNavigationController : TBViewController
{
    NSMutableArray *_viewControllers;	// 16 = 0x10
    UIView *_transitionView;	// 24 = 0x18
    UIViewController *_wrapperTopViewController;	// 32 = 0x20
    _Bool _isUpdateVisibleController;	// 40 = 0x28
    int _visibleViewControllerTransition;	// 44 = 0x2c
    UIViewController *_visibleViewController;	// 48 = 0x30
    UIViewController *_visibleWrapperController;	// 56 = 0x38
    UIView *panToWrapperView;	// 64 = 0x40
    UIView *panFromWrapperView;	// 72 = 0x48
    UIView *panMaskView;	// 80 = 0x50
    UIViewController *panTopViewController;	// 88 = 0x58
    UIViewController *panToWrapperController;	// 96 = 0x60
    UIViewController *panFromWrapperController;	// 104 = 0x68
    NSDate *panGestureBeganDate;	// 112 = 0x70
    NSDate *panGestureEndDate;	// 120 = 0x78
    double beginPanX;	// 128 = 0x80
    double beginPanY;	// 136 = 0x88
    _Bool panToCtrlHidesBottom;	// 144 = 0x90
    _Bool panFromCtrlHidesBottom;	// 145 = 0x91
    _Bool isResponseBackPanGesture;	// 146 = 0x92
    _Bool _isAnimating;	// 147 = 0x93
    _Bool _isPanGestureAnimating;	// 148 = 0x94
    float _screenWidth;	// 152 = 0x98
    id <TBNavigationControllerDelegate> _delegate;	// 160 = 0xa0
    NSMutableDictionary *_wrapperRelationShip;	// 168 = 0xa8
    UISwipeGestureRecognizer *_swapGesture;	// 176 = 0xb0
    UIPanGestureRecognizer *_panGesture;	// 184 = 0xb8
    NSMutableArray *_operationQueue;	// 192 = 0xc0
    NSDate *_animateBeginDate;	// 200 = 0xc8
    NSDate *_animateEndDate;	// 208 = 0xd0
}

+ (void)setSwapGestureEndPostion:(double)arg1;
+ (void)setSwapGestureStartPostion:(double)arg1;
+ (void)setAnimationTime:(double)arg1;
+ (double)animationTime;
+ (_Bool)tbNeedToolbar;
@property(retain, nonatomic) NSDate *animateEndDate; // @synthesize animateEndDate=_animateEndDate;
@property(retain, nonatomic) NSDate *animateBeginDate; // @synthesize animateBeginDate=_animateBeginDate;
@property(nonatomic) float screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) NSMutableArray *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) _Bool isPanGestureAnimating; // @synthesize isPanGestureAnimating=_isPanGestureAnimating;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UISwipeGestureRecognizer *swapGesture; // @synthesize swapGesture=_swapGesture;
@property(retain, nonatomic) NSMutableDictionary *wrapperRelationShip; // @synthesize wrapperRelationShip=_wrapperRelationShip;
@property(nonatomic) __weak id <TBNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *visibleViewController; // @synthesize visibleViewController=_visibleViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *topViewController;
@property(retain, nonatomic) NSArray *viewControllers;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIView *transitionView;
- (void)popToRootViewControllerAnimated:(_Bool)arg1;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 transitionStyle:(int)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)monitorPopFromVC:(id)arg1 toVC:(id)arg2;
- (void)monitorPushFromVC:(id)arg1 toVC:(id)arg2;
- (void)synchronizeMoreState;
- (void)setNeedUpdateVisibleController;
- (void)updateVisibleViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIViewController *wrapperTopViewController;
- (id)initWithRootViewController:(id)arg1;
- (id)wrapperController:(id)arg1;
- (void)clearPanGestureVC;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (id)sharedMaskView;
- (void)popVCForward;
- (void)pushVCBack;
- (void)swapGestureRecognized:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

@end

