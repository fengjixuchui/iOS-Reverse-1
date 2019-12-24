/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class TSUFlushingManager;

__attribute__((visibility("hidden")))
@interface TSUMemoryWatcher : XXUnknownSuperclass {
@private
	TSUFlushingManager *_flushingManager;	// 4 = 0x4
	BOOL _going;	// 8 = 0x8
	BOOL _stop;	// 9 = 0x9
}
- (id)initWithFlushingManager:(id)flushingManager;	// 0xee24d
- (void)dealloc;	// 0x2d3fd5
- (void)beginObserving;	// 0xee28d
- (void)stopObserving;	// 0x2d3fc1
@end
