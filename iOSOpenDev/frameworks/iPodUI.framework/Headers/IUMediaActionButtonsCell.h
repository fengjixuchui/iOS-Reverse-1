/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/IUMediaTableCell.h>

@class NSMutableArray, UIColor;

@interface IUMediaActionButtonsCell : IUMediaTableCell {
	id _delegate;	// 284 = 0x11c
	NSMutableArray *_buttons;	// 288 = 0x120
	UIColor *_bottomSeparatorColor;	// 292 = 0x124
}
@property(retain, nonatomic) UIColor *bottomSeparatorColor;	// G=0x2348d; S=0x2349d; @synthesize=_bottomSeparatorColor
@property(assign, nonatomic) id delegate;	// G=0x2346d; S=0x2347d; @synthesize=_delegate
// declared property setter: - (void)setBottomSeparatorColor:(id)color;	// 0x2349d
// declared property getter: - (id)bottomSeparatorColor;	// 0x2348d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2347d
// declared property getter: - (id)delegate;	// 0x2346d
- (id)_buttonImageForControlState:(unsigned)controlState stretchable:(BOOL)stretchable;	// 0x233ed
- (void)_buttonAction:(id)action;	// 0x23385
- (BOOL)supportsSpinning;	// 0x23381
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x23351
- (void)drawRect:(CGRect)rect;	// 0x232b9
- (void)layoutSubviews;	// 0x23139
- (void)_didCreateContentView;	// 0x2310d
- (id)createButtonWithTitle:(id)title action:(SEL)action;	// 0x22f3d
- (void)_buttonFadeDidStop:(id)_buttonFade finished:(id)finished context:(void *)context;	// 0x22e9d
- (void)reconfigureWithButtonTitles:(id)buttonTitles animated:(BOOL)animated;	// 0x22af9
- (void)dealloc;	// 0x22a05
- (id)initWithTitles:(id)titles;	// 0x228a9
@end
