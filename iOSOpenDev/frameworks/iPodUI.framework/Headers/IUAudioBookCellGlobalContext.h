/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUDetailedCellGlobalContext.h>


@interface IUAudioBookCellGlobalContext : IUDetailedCellGlobalContext {
	unsigned _numberOfParts;	// 8 = 0x8
	unsigned _showAuthors : 1;	// 12 = 0xc
	unsigned _showChapterIndices : 1;	// 12 = 0xc
	unsigned _usePartIndicesForTitle : 1;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL usePartIndicesForTitle;	// G=0xc1b41; S=0xc1af1; 
@property(assign, nonatomic) BOOL showChapterIndices;	// G=0xc1b2d; S=0xc1ac9; 
@property(assign, nonatomic) BOOL showAuthors;	// G=0xc1b19; S=0xc1aa5; 
@property(assign, nonatomic) unsigned numberOfParts;	// G=0xc1b55; S=0xc1b65; @synthesize=_numberOfParts
// declared property setter: - (void)setNumberOfParts:(unsigned)parts;	// 0xc1b65
// declared property getter: - (unsigned)numberOfParts;	// 0xc1b55
// declared property getter: - (BOOL)usePartIndicesForTitle;	// 0xc1b41
// declared property getter: - (BOOL)showChapterIndices;	// 0xc1b2d
// declared property getter: - (BOOL)showAuthors;	// 0xc1b19
// declared property setter: - (void)setUsePartIndicesForTitle:(BOOL)title;	// 0xc1af1
// declared property setter: - (void)setShowChapterIndices:(BOOL)indices;	// 0xc1ac9
// declared property setter: - (void)setShowAuthors:(BOOL)authors;	// 0xc1aa5
@end
