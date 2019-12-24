/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */




@protocol BrowserPanel <NSObject>
- (int)panelType;
- (int)panelState;
- (int)pausesPages;
- (BOOL)ignoresPrivateBrowsingStyle;
@optional
- (id)toolbarItems;
- (void)panelWillSuspend;
- (BOOL)shouldResumePanel;
@end

