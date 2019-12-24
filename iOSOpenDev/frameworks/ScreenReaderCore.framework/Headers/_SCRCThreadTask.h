/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/XXUnknownSuperclass.h>

@class NSConditionLock;

__attribute__((visibility("hidden")))
@interface _SCRCThreadTask : XXUnknownSuperclass {
@private
	id _target;	// 4 = 0x4
	SEL _selector;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
	void *_objects[4];	// 16 = 0x10
	NSConditionLock *_waitLock;	// 32 = 0x20
	unsigned _mask;	// 36 = 0x24
}
- (id)initWithTarget:(id)target selector:(SEL)selector cancelMask:(unsigned long)mask count:(unsigned long)count firstObject:(id)object moreObjects:(void *)objects;	// 0x1e01
- (void)dealloc;	// 0x2811
- (void)setWaitLock:(id)lock;	// 0x4735
- (void)fire;	// 0x259d
@end