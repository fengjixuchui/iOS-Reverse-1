/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

#import <DataAccessUI/UIModalViewDelegate.h>
#import <DataAccessUI/XXUnknownSuperclass.h>


@interface ASSettingsSyncController : XXUnknownSuperclass <UIModalViewDelegate> {
	BOOL _haveRegisteredForAccountsChanged;	// 353 = 0x161
	BOOL _isHotmailAccount;	// 354 = 0x162
}
- (void)viewDidLoad;	// 0xbf05
- (void)loadView;	// 0xbe9d
- (id)_navTitle;	// 0xbdc1
- (BOOL)backgroundDeleteAccountData;	// 0xbb75
- (void)cancelButtonClicked:(id)clicked;	// 0xbb2d
- (void)setAccountIntegerProperty:(id)property withSpecifier:(id)specifier;	// 0xba51
- (id)accountIntegerPropertyWithSpecifier:(id)specifier;	// 0xb9d1
- (id)numFoldersToPushString:(id)pushString;	// 0xb851
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0xb6a5
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0xb5cd
- (void)setAccount:(id)account;	// 0xb525
- (void)saveSyncSettings:(id)settings forAccount:(id)account;	// 0xb441
- (id)otherSpecifiers;	// 0xa8b9
- (Class)accountInfoControllerClass;	// 0xa89d
- (void)dealloc;	// 0xa7e5
- (id)specifiers;	// 0xa5f5
- (void)viewWillAppear:(BOOL)view;	// 0xa4f1
- (void)viewWillDisappear:(BOOL)view;	// 0xa2f9
- (void)_folderHierarchyChanged;	// 0xa2b9
- (void)_foldersToPushChanged;	// 0xa279
- (id)_foldersToPushSpecifierAccount;	// 0xa245
- (void)_reloadFoldersToPushSpecifier;	// 0xa1e9
- (void)_accountsChanged:(id)changed;	// 0xa005
- (id)_accountFromManager;	// 0x9fa1
- (id)_accountInSpecifier;	// 0x9f59
- (void)reloadAccountOnSpecifier;	// 0x9ead
@end