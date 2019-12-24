/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/XXUnknownSuperclass.h>
#import <AppStoreUI/AppStoreUI-Structs.h>
#import <AppStoreUI/UITextContentViewDelegate.h>

@class UIScrollView, SUTextContentView;
@protocol ASTextViewCellDelegate;

@interface ASTextViewCell : XXUnknownSuperclass <UITextContentViewDelegate> {
	id<ASTextViewCellDelegate> _delegate;	// 280 = 0x118
	UIScrollView *_scrollView;	// 284 = 0x11c
	SUTextContentView *_textContentView;	// 288 = 0x120
}
@property(readonly, assign, nonatomic) SUTextContentView *textContentView;	// G=0x9a99; @synthesize=_textContentView
@property(assign, nonatomic) id<ASTextViewCellDelegate> delegate;	// G=0x9a79; S=0x9a89; @synthesize=_delegate
// declared property getter: - (id)textContentView;	// 0x9a99
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x9a89
// declared property getter: - (id)delegate;	// 0x9a79
- (BOOL)textContentViewShouldEndEditing:(id)textContentView;	// 0x9a39
- (BOOL)textContentViewShouldBeginEditing:(id)textContentView;	// 0x99f9
- (void)textContentViewDidChange:(id)textContentView;	// 0x9949
- (BOOL)textContentView:(id)view shouldScrollForPendingContentSize:(CGSize)pendingContentSize;	// 0x9945
- (BOOL)textContentView:(id)view shouldChangeSizeForContentSize:(CGSize)contentSize;	// 0x9941
- (void)textContentView:(id)view didChangeSize:(CGSize)size;	// 0x9919
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x98e9
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x98b9
- (void)setFrame:(CGRect)frame;	// 0x9885
- (void)setBackgroundColor:(id)color;	// 0x983d
- (BOOL)resignFirstResponder;	// 0x9819
- (void)layoutSubviews;	// 0x96b5
- (void)dealloc;	// 0x9629
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x94c9
@end