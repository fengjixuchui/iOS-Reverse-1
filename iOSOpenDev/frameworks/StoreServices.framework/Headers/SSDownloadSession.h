/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/XXUnknownSuperclass.h>

@class SSDownload, SSXPCConnection, SSDownloadAsset;

@interface SSDownloadSession : XXUnknownSuperclass {
@private
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	long long _sessionID;	// 12 = 0xc
}
@property(readonly, assign) SSDownloadAsset *downloadAsset;	// G=0x41c95; 
@property(readonly, assign) SSDownload *download;	// G=0x41bdd; 
- (void *)_copySessionPropertyWithKey:(const char *)key;	// 0x41dbd
- (BOOL)isEqual:(id)equal;	// 0x41d5d
- (unsigned)hash;	// 0x41d4d
// declared property getter: - (id)downloadAsset;	// 0x41c95
// declared property getter: - (id)download;	// 0x41bdd
- (void)dealloc;	// 0x41b7d
- (id)_initWithSessionIdentifier:(long long)sessionIdentifier controlConnection:(id)connection;	// 0x41b29
- (id)init;	// 0x41b19
- (id)_initSSDownloadSession;	// 0x41ac9
@end
