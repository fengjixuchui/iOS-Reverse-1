/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramListMapper.h>
#import <OfficeImport/CMDiagramShapeMapper.h>
#import <OfficeImport/OfficeImport-Structs.h>


__attribute__((visibility("hidden")))
@interface CMDiagramListMapper : CMDiagramShapeMapper {
@private
	float mMaxLineCount;	// 112 = 0x70
}
- (void)mapAt:(id)at withState:(id)state;	// 0x1f4eed
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x1f5601
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x2f2ba1
- (void)setDefaultFonSize;	// 0x1f51e5
- (float)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index level:(int)level;	// 0x1f537d
@end

@interface CMDiagramListMapper (Private)
- (id)suggestedBoundsForHListItemWithIndex:(int)index;	// 0x1f5739
- (void)mapListItemAt:(id)at index:(int)index withState:(id)state;	// 0x1f5659
- (CGSize)textSize;	// 0x1f5545
@end
