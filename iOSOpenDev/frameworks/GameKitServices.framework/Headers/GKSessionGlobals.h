/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <GameKitServices/GameKitServices-Structs.h>
#import <GameKitServices/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface GKSessionGlobals : XXUnknownSuperclass {
@private
	unsigned *_activePIDList;	// 4 = 0x4
	unsigned _activePIDListSize;	// 8 = 0x8
	unsigned _activePIDListCount;	// 12 = 0xc
	opaque_pthread_mutex_t _lock;	// 16 = 0x10
}
- (id)init;	// 0x29f95
- (void)registerPID:(unsigned)pid;	// 0x2a139
- (void)unregisterPID:(unsigned)pid;	// 0x2a0c1
- (BOOL)hasActivePID:(unsigned)pid;	// 0x21581
- (void)lock;	// 0x2a071
- (void)unlock;	// 0x2a021
@end
