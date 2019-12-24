/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUMediaListViewController.h>

@class IUSharedLibraryCellLayoutManager, MPMediaLibrary, NSDate, NSIndexPath;

@interface IUSharedLibrariesViewController : IUMediaListViewController {
@private
	NSDate *_connectionStartDate;	// 276 = 0x114
	IUSharedLibraryCellLayoutManager *_layoutManager;	// 280 = 0x118
	NSIndexPath *_selectedIndexPath;	// 284 = 0x11c
	MPMediaLibrary *_selectedLibrary;	// 288 = 0x120
	BOOL _showsSectionHeader;	// 292 = 0x124
}
@property(assign, nonatomic) BOOL showsSectionHeader;	// G=0x135c5; S=0x135d5; @synthesize=_showsSectionHeader
// declared property setter: - (void)setShowsSectionHeader:(BOOL)header;	// 0x135d5
// declared property getter: - (BOOL)showsSectionHeader;	// 0x135c5
- (void)_updateNoSharedLibrariesViewAnimated:(BOOL)animated;	// 0x13525
- (void)_selectLibrary:(id)library;	// 0x134a5
- (void)_updateConnectionProgressForCellAtIndexPath:(id)indexPath;	// 0x131e9
- (void)_mediaLibraryConnectionProgressDidChangeNotification:(id)_mediaLibraryConnectionProgress;	// 0x13121
- (void)_availableMediaLibrariesDidChangeNotification:(id)_availableMediaLibraries;	// 0x1310d
- (void)performDefaultActionForRow:(int)row;	// 0x12949
- (void)performActionForActionRow:(id)actionRow animated:(BOOL)animated;	// 0x128cd
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x128b9
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x12845
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x127bd
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x12745
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x126d9
- (BOOL)hideActionRowsOnAppear;	// 0x126d5
- (BOOL)hasSearchBar;	// 0x126d1
- (BOOL)shouldBeCustomizableInTabBar;	// 0x126cd
- (void)_cancelAndDismiss:(id)dismiss;	// 0x126a1
- (void)viewWillDisappear:(BOOL)view;	// 0x125f1
- (void)viewDidLoad;	// 0x125ad
- (void)dealloc;	// 0x124f9
- (id)init;	// 0x123b5
@end
