/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>


@interface PSEditableListController : PSListController {
	BOOL _editable;	// 240 = 0xf0
}
@property(assign) BOOL editable;	// G=0x14bd1; S=0x14f15; converted property
- (id)init;	// 0x14be1
- (id)_editButtonBarItem;	// 0x15165
- (void)_updateNavigationBar;	// 0x15125
- (void)setEditingButtonHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x150a9
- (BOOL)_showEditButtonUponAppearing;	// 0x14bcd
- (void)viewWillAppear:(BOOL)view;	// 0x15051
- (void)pushController:(id)controller;	// 0x14fe5
- (void)editDoneTapped;	// 0x14fbd
// converted property getter: - (BOOL)editable;	// 0x14bd1
- (void)_setEditable:(BOOL)editable animated:(BOOL)animated;	// 0x14f45
// converted property setter: - (void)setEditable:(BOOL)editable;	// 0x14f15
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x14e89
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;	// 0x14e25
- (BOOL)performDeletionActionForSpecifier:(id)specifier;	// 0x14d01
- (void)suspend;	// 0x14cbd
- (void)didLock;	// 0x14c79
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x14c0d
@end
