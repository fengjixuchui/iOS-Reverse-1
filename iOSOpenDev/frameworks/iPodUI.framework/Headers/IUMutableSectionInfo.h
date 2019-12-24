/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUSectionInfo.h>

@class NSMutableArray;

@interface IUMutableSectionInfo : IUSectionInfo {
	NSMutableArray *_info;	// 8 = 0x8
}
- (id)titleOfSectionAtIndex:(unsigned)index;	// 0xa3ff9
- (unsigned)numberOfSections;	// 0xa3fb9
- (unsigned)indexOfSectionAtIndex:(unsigned)index;	// 0xa3f61
- (void)addSectionWithTitle:(id)title index:(unsigned)index;	// 0xa3ec9
- (void)dealloc;	// 0xa3e75
@end
