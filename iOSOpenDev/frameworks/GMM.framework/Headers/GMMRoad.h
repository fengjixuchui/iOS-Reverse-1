/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>
#import <GMM/GMM-Structs.h>


__attribute__((visibility("hidden")))
@interface GMMRoad : XXUnknownSuperclass {
	unsigned long numPoints;	// 4 = 0x4
	Point *points;	// 8 = 0x8
}
- (void)getPoints:(Point **)points count:(unsigned *)count;	// 0x3cb9
- (void)dealloc;	// 0x3c79
- (id)initWithPoints:(Point *)points count:(unsigned long)count;	// 0x3c29
@end