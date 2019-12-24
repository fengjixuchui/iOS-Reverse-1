/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface EDPageSetup : XXUnknownSuperclass {
@private
	int mOrientation;	// 4 = 0x4
	int mPageOrder;	// 8 = 0x8
	bool mCustomFirstPageNumber;	// 12 = 0xc
	unsigned mFirstPageNumber;	// 16 = 0x10
	unsigned mCopies;	// 20 = 0x14
	unsigned mFitToHeight;	// 24 = 0x18
	unsigned mFitToWidth;	// 28 = 0x1c
	unsigned mScale;	// 32 = 0x20
	float mLeftMargin;	// 36 = 0x24
	float mRightMargin;	// 40 = 0x28
	float mTopMargin;	// 44 = 0x2c
	float mBottomMargin;	// 48 = 0x30
	float mHeaderMargin;	// 52 = 0x34
	float mFooterMargin;	// 56 = 0x38
}
@property(assign) int orientation;	// G=0x250af9; S=0xec7b9; converted property
@property(assign) int order;	// G=0x250b09; S=0xec7c9; converted property
@property(assign) bool customFirstPageNumber;	// G=0x250b19; S=0xec7f9; converted property
@property(assign) unsigned firstPageNumber;	// G=0x250b29; S=0xec7d9; converted property
@property(assign) unsigned fitToHeight;	// G=0x250b39; S=0xec809; converted property
@property(assign) unsigned fitToWidth;	// G=0x250b49; S=0xec819; converted property
@property(assign) unsigned scale;	// G=0x250b59; S=0xec889; converted property
@property(assign) float leftMargin;	// G=0x250b69; S=0xec829; converted property
@property(assign) float rightMargin;	// G=0x250b79; S=0xec839; converted property
@property(assign) float topMargin;	// G=0x250b89; S=0xec849; converted property
@property(assign) float bottomMargin;	// G=0x250b99; S=0xec859; converted property
@property(assign) float headerMargin;	// G=0x250ba9; S=0xec869; converted property
@property(assign) float footerMargin;	// G=0x250bb9; S=0xec879; converted property
+ (id)pageSetup;	// 0xec6c1
- (id)init;	// 0xec709
// converted property getter: - (int)orientation;	// 0x250af9
// converted property setter: - (void)setOrientation:(int)orientation;	// 0xec7b9
// converted property getter: - (int)order;	// 0x250b09
// converted property setter: - (void)setOrder:(int)order;	// 0xec7c9
// converted property getter: - (bool)customFirstPageNumber;	// 0x250b19
// converted property setter: - (void)setCustomFirstPageNumber:(bool)number;	// 0xec7f9
// converted property getter: - (unsigned)firstPageNumber;	// 0x250b29
// converted property setter: - (void)setFirstPageNumber:(unsigned)number;	// 0xec7d9
// converted property getter: - (unsigned)fitToHeight;	// 0x250b39
// converted property setter: - (void)setFitToHeight:(unsigned)height;	// 0xec809
// converted property getter: - (unsigned)fitToWidth;	// 0x250b49
// converted property setter: - (void)setFitToWidth:(unsigned)width;	// 0xec819
// converted property getter: - (unsigned)scale;	// 0x250b59
// converted property setter: - (void)setScale:(unsigned)scale;	// 0xec889
// converted property getter: - (float)leftMargin;	// 0x250b69
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0xec829
// converted property getter: - (float)rightMargin;	// 0x250b79
// converted property setter: - (void)setRightMargin:(float)margin;	// 0xec839
// converted property getter: - (float)topMargin;	// 0x250b89
// converted property setter: - (void)setTopMargin:(float)margin;	// 0xec849
// converted property getter: - (float)bottomMargin;	// 0x250b99
// converted property setter: - (void)setBottomMargin:(float)margin;	// 0xec859
// converted property getter: - (float)headerMargin;	// 0x250ba9
// converted property setter: - (void)setHeaderMargin:(float)margin;	// 0xec869
// converted property getter: - (float)footerMargin;	// 0x250bb9
// converted property setter: - (void)setFooterMargin:(float)margin;	// 0xec879
@end
