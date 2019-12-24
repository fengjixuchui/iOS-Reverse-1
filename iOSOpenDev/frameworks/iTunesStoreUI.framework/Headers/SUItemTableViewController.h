/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUTableViewController.h>
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>

@class SUDocumentInteractionSession;

@interface SUItemTableViewController : SUTableViewController {
	SUDocumentInteractionSession *_documentInteractionSession;	// 240 = 0xf0
}
- (void)_showPurchaseConfirmationForButton:(id)button;	// 0x895d5
- (void)_removeTouchCaptureView;	// 0x8957d
- (void)_promptToOpenUTI:(id)openUTI fromIndexPath:(id)indexPath withCompletionHandler:(id)completionHandler;	// 0x89341
- (id)_preferredApplicationFromCandidates:(id)candidates;	// 0x891ed
- (void)_hidePurchaseConfirmationForButton:(id)button;	// 0x89059
- (void)_chooseApplicationToOpenDocumentAtIndexPath:(id)indexPath withCompletionHandler:(id)completionHandler;	// 0x88f35
- (void)_restrictionsChangedNotification:(id)notification;	// 0x88f0d
- (void)_purchasedItemSetChangedNotification:(id)notification;	// 0x88ee5
- (void)_touchCaptureAction:(id)action;	// 0x88ea1
- (void)itemOfferButtonAction:(id)action;	// 0x88b59
- (void)viewWillDisappear:(BOOL)view;	// 0x88b15
- (void)reloadData;	// 0x88ad5
- (BOOL)purchaseItemAtIndexPath:(id)indexPath;	// 0x88a81
- (BOOL)openDocumentForItemAtIndexPath:(id)indexPath withApplication:(id)application;	// 0x88a2d
- (id)itemAtIndexPath:(id)indexPath;	// 0x88a29
- (void)dealloc;	// 0x88971
- (id)init;	// 0x888b5
@end
