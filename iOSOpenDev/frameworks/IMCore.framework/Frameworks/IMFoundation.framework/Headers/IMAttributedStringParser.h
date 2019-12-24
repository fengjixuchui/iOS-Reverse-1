/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/XXUnknownSuperclass.h>

@class IMAttributedStringParserContext;

@interface IMAttributedStringParser : XXUnknownSuperclass {
	IMAttributedStringParserContext *_context;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x44c1
- (void)parseContext:(id)context;	// 0x1655d
- (void)_preprocessWithContext:(id)context string:(id *)string;	// 0x53dd
- (BOOL)retainWeakReference;	// 0x16559
- (BOOL)allowsWeakReference;	// 0x16555
@end
