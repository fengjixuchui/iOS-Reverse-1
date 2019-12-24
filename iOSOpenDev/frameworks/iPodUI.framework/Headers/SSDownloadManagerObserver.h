/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */




@protocol SSDownloadManagerObserver <NSObject>
@optional
- (void)downloadManagerNetworkUsageDidChange:(id)downloadManagerNetworkUsage;
- (void)downloadManagerDownloadsDidChange:(id)downloadManagerDownloads;
- (void)downloadManagerActiveDownloadsDidChange:(id)downloadManagerActiveDownloads;
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;
@end

