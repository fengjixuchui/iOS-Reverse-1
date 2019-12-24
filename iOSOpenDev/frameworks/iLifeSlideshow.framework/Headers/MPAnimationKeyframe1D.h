/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/MPAnimationKeyframe1D.h>
#import <iLifeSlideshow/MPAnimationKeyframe.h>
#import <iLifeSlideshow/iLifeSlideshow-Structs.h>


@interface MPAnimationKeyframe1D : MPAnimationKeyframe {
@private
	float _scalar;	// 20 = 0x14
}
@property(assign) float scalar;	// G=0x1b8f5; S=0x1ce5d; converted property
+ (id)keyframe1DWithScalar:(float)scalar atTime:(double)time;	// 0x1ce11
+ (id)keyframe1DWithScalar:(float)scalar atTime:(double)time offset:(int)offset;	// 0x1cdc5
- (id)initKeyframe1DWithScalar:(float)scalar atTime:(double)time offset:(int)offset;	// 0x1cd29
- (void)encodeWithCoder:(id)coder;	// 0x1d2a9
- (id)initWithCoder:(id)coder;	// 0x1d231
- (id)copyWithZone:(NSZone *)zone;	// 0x1d1e1
- (id)description;	// 0x1d0cd
// converted property getter: - (float)scalar;	// 0x1b8f5
// converted property setter: - (void)setScalar:(float)scalar;	// 0x1ce5d
@end

@interface MPAnimationKeyframe1D (Private)
- (id)keyframe;	// 0x1b9a9
@end
