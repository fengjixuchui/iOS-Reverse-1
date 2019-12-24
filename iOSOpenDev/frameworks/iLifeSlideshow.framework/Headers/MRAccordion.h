/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/XXUnknownSuperclass.h>
#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MRTransition.h>


@interface MRAccordion : XXUnknownSuperclass <MRTransition> {
	unsigned char mDirection;	// 4 = 0x4
	unsigned char mNumberOfFoldingsOut;	// 5 = 0x5
	unsigned char mNumberOfFoldingsIn;	// 6 = 0x6
	float mPixelUnit;	// 8 = 0x8
}
@property(assign) float pixelUnit;	// G=0x765ad; S=0x765bd; @synthesize=mPixelUnit
- (id)initWithAttributes:(id)attributes;	// 0x765cd
- (void)renderAtTime:(double)time andSize:(CGSize)size withSourcePatchwork:(id)sourcePatchwork andTargetPatchwork:(id)patchwork;	// 0x766a5
// declared property getter: - (float)pixelUnit;	// 0x765ad
// declared property setter: - (void)setPixelUnit:(float)unit;	// 0x765bd
@end
