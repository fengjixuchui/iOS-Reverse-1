/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/XXUnknownSuperclass.h>

@class GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDWPStorage : XXUnknownSuperclass {
@private
	GQDSStylesheet *mStylesheet;	// 4 = 0x4
	CFArrayRef mBody;	// 8 = 0x8
	CFArrayRef mAttachments;	// 12 = 0xc
}
- (void)dealloc;	// 0x240e1
- (id)stylesheet;	// 0x23fdd
- (CFArrayRef)attachments;	// 0x23fed
@end
