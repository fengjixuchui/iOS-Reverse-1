/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramShapeMapper.h>
#import <OfficeImport/OfficeImport-Structs.h>


__attribute__((visibility("hidden")))
@interface CMDiagramChevronMapper : CMDiagramShapeMapper {
@private
	BOOL mHChevron;	// 112 = 0x70
}
- (void)setIsHChevron:(BOOL)chevron;	// 0x202c85
- (void)mapAt:(id)at withState:(id)state;	// 0x1f1115
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x1f13e1
- (id)_suggestedBoundsForNodeAtIndex:(unsigned)index;	// 0x1f1261
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x1f1205
@end
