/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUSubtitledButton.h>

@class UIView, UIBezierPath;

@interface SURoundedCornersButton : SUSubtitledButton {
	UIBezierPath *_bezierPath;	// 148 = 0x94
	UIView *_highlightedBackgroundView;	// 152 = 0x98
	UIBezierPath *_shadowPath;	// 156 = 0x9c
}
- (id)_highlightedBackgroundView;	// 0x35d91
- (void)setFrame:(CGRect)frame;	// 0x35cbd
- (void)drawRect:(CGRect)rect;	// 0x35a09
- (void)dealloc;	// 0x35995
- (id)initWithFrame:(CGRect)frame;	// 0x358f5
@end
