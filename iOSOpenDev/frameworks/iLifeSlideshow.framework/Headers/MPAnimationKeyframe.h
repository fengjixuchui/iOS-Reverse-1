/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/MPAnimationKeyframe.h>
#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/NSCoding.h>
#import <iLifeSlideshow/NSCopying.h>
#import <iLifeSlideshow/XXUnknownSuperclass.h>

@class NSMutableDictionary, MCAnimationKeyframe, MPKeyframeInternal, MPAnimationPath;

@interface MPAnimationKeyframe : XXUnknownSuperclass <NSCoding, NSCopying> {
	NSMutableDictionary *_attributes;	// 4 = 0x4
	MPAnimationPath *_parentPath;	// 8 = 0x8
	MCAnimationKeyframe *_keyframe;	// 12 = 0xc
	MPKeyframeInternal *_internal;	// 16 = 0x10
}
@property(assign) double time;	// G=0x1c889; S=0x1c6e5; converted property
@property(assign) int offset;	// G=0x1c6c5; S=0x1c531; converted property
@property(assign) double preControl;	// G=0x1c4d1; S=0x1c335; converted property
@property(assign) double postControl;	// G=0x1c2d5; S=0x1c139; converted property
@property(readonly, retain) MPAnimationPath *parentPath;	// G=0x1b8e5; converted property
- (id)init;	// 0x1c021
- (void)encodeWithCoder:(id)coder;	// 0x1cb21
- (id)initWithCoder:(id)coder;	// 0x1c999
- (id)copyWithZone:(NSZone *)zone;	// 0x1c939
- (void)dealloc;	// 0x1c8a9
// converted property getter: - (id)parentPath;	// 0x1b8e5
// converted property getter: - (double)time;	// 0x1c889
// converted property setter: - (void)setTime:(double)time;	// 0x1c6e5
// converted property getter: - (int)offset;	// 0x1c6c5
// converted property setter: - (void)setOffset:(int)offset;	// 0x1c531
// converted property getter: - (double)preControl;	// 0x1c4d1
// converted property setter: - (void)setPreControl:(double)control;	// 0x1c335
// converted property getter: - (double)postControl;	// 0x1c2d5
// converted property setter: - (void)setPostControl:(double)control;	// 0x1c139
@end

@interface MPAnimationKeyframe (AppleScript)
@end

@interface MPAnimationKeyframe (Internal)
- (void)setParentPath:(id)path;	// 0x1e32d
- (void)setKeyframe:(id)keyframe;	// 0x1e045
- (void)recreateWithKeyframe:(id)keyframe;	// 0x1e151
- (void)copyStruct:(id)aStruct;	// 0x1e23d
@end

@interface MPAnimationKeyframe (Private)
- (int)relativeTimeCompare:(id)compare;	// 0x1df9d
- (void)dump;	// 0x1e305
- (id)fullDebugLog;	// 0x1e001
@end
