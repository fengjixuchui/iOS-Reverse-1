/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, DOMValidityState, DOMNodeList, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLKeygenElement : DOMHTMLElement {
}
@property(readonly, retain) DOMNodeList *labels;	// G=0x3268c5; 
@property(readonly, copy) NSString *validationMessage;	// G=0x326779; 
@property(readonly, retain) DOMValidityState *validity;	// G=0x3266ad; 
@property(readonly, assign) BOOL willValidate;	// G=0x325ac5; 
@property(readonly, copy) NSString *type;	// G=0x326159; 
@property(copy) NSString *name;	// G=0x326085; S=0x326575; 
@property(copy) NSString *keytype;	// G=0x325fa5; S=0x326375; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x3264b9; 
@property(assign) BOOL disabled;	// G=0x325c4d; S=0x325ded; 
@property(copy) NSString *challenge;	// G=0x325ec5; S=0x326231; 
@property(assign) BOOL autofocus;	// G=0x325b85; S=0x325d15; 
// declared property getter: - (BOOL)autofocus;	// 0x325b85
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x325d15
// declared property getter: - (id)challenge;	// 0x325ec5
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x326231
// declared property getter: - (BOOL)disabled;	// 0x325c4d
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x325ded
// declared property getter: - (id)form;	// 0x3264b9
// declared property getter: - (id)keytype;	// 0x325fa5
// declared property setter: - (void)setKeytype:(id)keytype;	// 0x326375
// declared property getter: - (id)name;	// 0x326085
// declared property setter: - (void)setName:(id)name;	// 0x326575
// declared property getter: - (id)type;	// 0x326159
// declared property getter: - (BOOL)willValidate;	// 0x325ac5
// declared property getter: - (id)validity;	// 0x3266ad
// declared property getter: - (id)validationMessage;	// 0x326779
// declared property getter: - (id)labels;	// 0x3268c5
- (BOOL)checkValidity;	// 0x326a0d
- (void)setCustomValidity:(id)validity;	// 0x326acd
@end
