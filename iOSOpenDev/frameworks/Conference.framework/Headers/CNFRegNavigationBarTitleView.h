/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <Conference/XXUnknownSuperclass.h>
#import <Conference/Conference-Structs.h>

@class UINavigationItem, UIActivityIndicatorView, UILabel;

@interface CNFRegNavigationBarTitleView : XXUnknownSuperclass {
@private
	UINavigationItem *_item;	// 48 = 0x30
	UILabel *_titleLabel;	// 52 = 0x34
	UIActivityIndicatorView *_activityIndicator;	// 56 = 0x38
}
@property(assign, nonatomic) UINavigationItem *item;	// G=0x35f25; S=0x35f35; @synthesize=_item
- (id)initWithNavigationItem:(id)navigationItem;	// 0x35f45
- (id)initWithFrame:(CGRect)frame;	// 0x362d9
- (void)dealloc;	// 0x36879
- (id)_defaultFont;	// 0x36075
- (BOOL)_useSilverLookForBarStyle:(int)barStyle;	// 0x360ad
- (id)_currentTextColorForBarStyle:(int)barStyle;	// 0x36139
- (id)_currentTextShadowColorForBarStyle:(int)barStyle;	// 0x361f9
- (CGSize)_currentTextShadowOffsetForBarStyle:(int)barStyle;	// 0x36295
- (void)setFrame:(CGRect)frame;	// 0x367e1
- (void)_updateTitleLabel;	// 0x3663d
- (void)layoutSubviews;	// 0x36545
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x363e1
// declared property getter: - (id)item;	// 0x35f25
// declared property setter: - (void)setItem:(id)item;	// 0x35f35
@end
