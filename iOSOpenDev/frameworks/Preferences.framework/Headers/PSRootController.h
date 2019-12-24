/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/PSController.h>
#import <Preferences/UINavigationControllerDelegate.h>
#import <Preferences/XXUnknownSuperclass.h>

@class PSSpecifier, NSMutableSet;

@interface PSRootController : XXUnknownSuperclass <PSController, UINavigationControllerDelegate> {
	PSSpecifier *_specifier;	// 232 = 0xe8
	NSMutableSet *_tasks;	// 236 = 0xec
	BOOL _deallocating;	// 240 = 0xf0
	unsigned char _hasTelephony;	// 241 = 0xf1
}
@property(retain) id parentController;	// G=0x10ab1; S=0x10a81; converted property
@property(retain) PSSpecifier *specifier;	// G=0x10a85; S=0x12631; converted property
@property(retain) id rootController;	// G=0x10ab9; S=0x10ab5; converted property
@property(readonly, assign) BOOL deallocating;	// G=0x10aa1; converted property
+ (void)writePreference:(id)preference;	// 0x113cd
+ (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x11345
+ (id)readPreferenceValue:(id)value;	// 0x10fe9
+ (BOOL)processedBundle:(id)bundle parentController:(id)controller parentSpecifier:(id)specifier bundleControllers:(id *)controllers settings:(id)settings;	// 0x10ae1
- (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x10ac1
- (id)readPreferenceValue:(id)value;	// 0x12a69
- (id)initWithTitle:(id)title identifier:(id)identifier;	// 0x12911
- (id)tasksDescription;	// 0x12819
- (BOOL)taskIsRunning:(id)running;	// 0x127f1
- (void)addTask:(id)task;	// 0x1279d
- (void)taskFinished:(id)finished;	// 0x126e5
- (BOOL)busy;	// 0x126b5
- (id)contentViewForTopController;	// 0x12679
- (id)specifiers;	// 0x10a79
- (void)statusBarWillAnimateByHeight:(float)statusBar;	// 0x10a7d
// converted property setter: - (void)setParentController:(id)controller;	// 0x10a81
// converted property setter: - (void)setSpecifier:(id)specifier;	// 0x12631
// converted property getter: - (id)specifier;	// 0x10a85
- (void)pushController:(id)controller;	// 0x125c1
- (void)handleURL:(id)url;	// 0x10a95
- (void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;	// 0x1243d
- (void)statusBarWillChangeHeight:(id)statusBar;	// 0x12275
- (void)willResignActive;	// 0x10a99
- (void)willBecomeActive;	// 0x10a9d
- (void)sendWillResignActive;	// 0x1222d
- (void)sendWillBecomeActive;	// 0x121e5
- (void)suspend;	// 0x121b1
- (void)didLock;	// 0x1217d
- (void)willUnlock;	// 0x12149
- (void)didUnlock;	// 0x12115
- (void)didWake;	// 0x120e1
// converted property getter: - (BOOL)deallocating;	// 0x10aa1
- (void)dealloc;	// 0x11ef1
// converted property getter: - (id)parentController;	// 0x10ab1
- (void)lazyLoadBundle:(id)bundle;	// 0x11d39
// converted property setter: - (void)setRootController:(id)controller;	// 0x10ab5
// converted property getter: - (id)rootController;	// 0x10ab9
- (void)willDismissPopupView;	// 0x11cd5
- (void)didDismissPopupView;	// 0x11c71
- (void)willDismissFormSheetView;	// 0x11c0d
- (void)didDismissFormSheetView;	// 0x11ba9
- (BOOL)canBeShownFromSuspendedState;	// 0x10abd
- (void)_delayedControllerReleaseAfterPop:(id)pop;	// 0x11b35
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x11acd
- (id)popToViewController:(id)viewController animated:(BOOL)animated;	// 0x119cd
- (id)popToRootViewControllerAnimated:(BOOL)rootViewControllerAnimated;	// 0x118cd
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;	// 0x116ed
- (void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;	// 0x115d5
@end
