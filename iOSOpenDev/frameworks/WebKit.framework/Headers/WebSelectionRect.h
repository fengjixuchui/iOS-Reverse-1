/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/XXUnknownSuperclass.h>
#import <WebKit/NSCopying.h>


@interface WebSelectionRect : XXUnknownSuperclass <NSCopying> {
@private
	CGRect m_rect;	// 4 = 0x4
	int m_writingDirection;	// 20 = 0x14
	BOOL m_isLineBreak;	// 24 = 0x18
	BOOL m_isFirstOnLine;	// 25 = 0x19
	BOOL m_isLastOnLine;	// 26 = 0x1a
	BOOL m_containsStart;	// 27 = 0x1b
	BOOL m_containsEnd;	// 28 = 0x1c
	BOOL m_isInFixedPosition;	// 29 = 0x1d
}
@property(assign, nonatomic) CGRect rect;	// G=0x74009; S=0x7402d; @synthesize=m_rect
@property(assign, nonatomic) int writingDirection;	// G=0x73fe9; S=0x73ff9; @synthesize=m_writingDirection
@property(assign, nonatomic) BOOL isLineBreak;	// G=0x73fc9; S=0x73fd9; @synthesize=m_isLineBreak
@property(assign, nonatomic) BOOL isFirstOnLine;	// G=0x73fa9; S=0x73fb9; @synthesize=m_isFirstOnLine
@property(assign, nonatomic) BOOL isLastOnLine;	// G=0x73f89; S=0x73f99; @synthesize=m_isLastOnLine
@property(assign, nonatomic) BOOL containsStart;	// G=0x73f69; S=0x73f79; @synthesize=m_containsStart
@property(assign, nonatomic) BOOL containsEnd;	// G=0x73f49; S=0x73f59; @synthesize=m_containsEnd
@property(assign, nonatomic) BOOL isInFixedPosition;	// G=0x73f29; S=0x73f39; @synthesize=m_isInFixedPosition
+ (id)selectionRect;	// 0x743f5
+ (CGRect)startEdge:(id)edge;	// 0x74299
+ (CGRect)endEdge:(id)edge;	// 0x74141
- (id)init;	// 0x74051
- (id)copyWithZone:(NSZone *)zone;	// 0x74609
- (id)description;	// 0x7442d
// declared property getter: - (BOOL)isInFixedPosition;	// 0x73f29
// declared property setter: - (void)setIsInFixedPosition:(BOOL)fixedPosition;	// 0x73f39
// declared property getter: - (BOOL)containsEnd;	// 0x73f49
// declared property setter: - (void)setContainsEnd:(BOOL)end;	// 0x73f59
// declared property getter: - (BOOL)containsStart;	// 0x73f69
// declared property setter: - (void)setContainsStart:(BOOL)start;	// 0x73f79
// declared property getter: - (BOOL)isLastOnLine;	// 0x73f89
// declared property setter: - (void)setIsLastOnLine:(BOOL)line;	// 0x73f99
// declared property getter: - (BOOL)isFirstOnLine;	// 0x73fa9
// declared property setter: - (void)setIsFirstOnLine:(BOOL)line;	// 0x73fb9
// declared property getter: - (BOOL)isLineBreak;	// 0x73fc9
// declared property setter: - (void)setIsLineBreak:(BOOL)aBreak;	// 0x73fd9
// declared property getter: - (int)writingDirection;	// 0x73fe9
// declared property setter: - (void)setWritingDirection:(int)direction;	// 0x73ff9
// declared property getter: - (CGRect)rect;	// 0x74009
// declared property setter: - (void)setRect:(CGRect)rect;	// 0x7402d
@end
