/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/XXUnknownSuperclass.h>
#import <iLifeSlideshow/MPVector.h>
#import <iLifeSlideshow/iLifeSlideshow-Structs.h>


@interface MPVector : XXUnknownSuperclass {
	XXStruct_Te64nB _vector;	// 4 = 0x4
}
@property(retain) id values;	// G=0x1bcc5; S=0x1bc21; converted property
+ (id)vectorFromString:(id)string;	// 0x1bb09
+ (id)vectorWithValues:(id)values;	// 0x1bab9
+ (id)vectorFromColor:(id)color;	// 0x1ba05
- (id)init;	// 0x1b9d9
- (id)copyWithZone:(NSZone *)zone;	// 0x1bfb9
- (void)encodeWithCoder:(id)coder;	// 0x1bf7d
- (id)initWithCoder:(id)coder;	// 0x1bf15
- (float)valueAtIndex:(int)index;	// 0x1b91d
- (int)count;	// 0x1b935
- (id)string;	// 0x1bee9
- (id)CIColorString;	// 0x1bdb1
- (id)color;	// 0x1bd65
// converted property getter: - (id)values;	// 0x1bcc5
// converted property setter: - (void)setValues:(id)values;	// 0x1bc21
- (BOOL)isEqualTo:(id)to;	// 0x1bb91
@end

@interface MPVector (Private)
@property(assign) XXStruct_Te64nB vector;	// G=0x1b96d; S=0x1b945; converted property
+ (id)vectorFromMCVector:(XXStruct_Te64nB)mcvector;	// 0x1d891
// converted property setter: - (void)setVector:(XXStruct_Te64nB)vector;	// 0x1b945
// converted property getter: - (XXStruct_Te64nB)vector;	// 0x1b96d
@end
