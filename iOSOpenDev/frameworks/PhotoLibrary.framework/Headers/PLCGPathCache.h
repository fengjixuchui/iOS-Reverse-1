/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>


@interface PLCGPathCache : XXUnknownSuperclass {
	CFDictionaryRef _pathCache;	// 4 = 0x4
}
+ (id)sharedPathCache;	// 0xa2115
- (CGPathRef)pathForKey:(CGRect)key;	// 0xa2271
- (void)setPath:(CGPathRef)path forKey:(CGRect)key;	// 0xa2211
- (void)dealloc;	// 0xa21c9
- (id)init;	// 0xa215d
@end
