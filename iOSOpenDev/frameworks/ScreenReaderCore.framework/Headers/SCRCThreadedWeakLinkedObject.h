/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/XXUnknownSuperclass.h>

@class NSLock;

@interface SCRCThreadedWeakLinkedObject : XXUnknownSuperclass {
	NSLock *_releaseLock;	// 4 = 0x4
	int _referenceCount;	// 8 = 0x8
	BOOL _calledDealloc;	// 12 = 0xc
}
- (id)init;	// 0x3945
- (unsigned)retainCount;	// 0x11add
- (id)retain;	// 0x3335
- (void)invalidateThreadsWithWeakLinks;	// 0x3de9
- (oneway void)release;	// 0x34d1
- (void)dealloc;	// 0x3ded
@end
