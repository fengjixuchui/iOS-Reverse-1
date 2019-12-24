/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

#import <DataDetectorsUI/EKEventEditViewDelegate.h>
#import <DataDetectorsUI/XXUnknownSuperclass.h>
#import <DataDetectorsUI/DataDetectorsUI-Structs.h>

@class UILabel, UIButton;

__attribute__((visibility("hidden")))
@interface DDLinksEventController : XXUnknownSuperclass <EKEventEditViewDelegate> {
@private
	DDResult *_result;	// 152 = 0x98
	UILabel *_label;	// 156 = 0x9c
	UIButton *_button;	// 160 = 0xa0
}
- (void)eventEditViewController:(id)controller didCompleteWithAction:(int)action;	// 0xa081
- (void)buttonClicked:(id)clicked;	// 0xa019
- (void)dealloc;	// 0x9fd1
- (void)viewDidUnload;	// 0x9fcd
- (void)didReceiveMemoryWarning;	// 0x9fa1
- (id)nibBundle;	// 0x9f69
- (id)nibName;	// 0x9f5d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x9f59
- (void)viewDidLoad;	// 0x9e51
- (id)initWithResult:(DDResult *)result;	// 0x9dfd
@end
