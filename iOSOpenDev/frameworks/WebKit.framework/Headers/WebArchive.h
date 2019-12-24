/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/XXUnknownSuperclass.h>
#import <WebKit/NSCoding.h>
#import <WebKit/NSCopying.h>
#import <WebKit/WebArchive.h>

@class WebArchivePrivate;

@interface WebArchive : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	WebArchivePrivate *_private;	// 4 = 0x4
}
- (id)init;	// 0x3484d
- (id)initWithMainResource:(id)mainResource subresources:(id)subresources subframeArchives:(id)archives;	// 0x3560d
- (id)initWithData:(id)data;	// 0x353c9
- (id)initWithCoder:(id)coder;	// 0x351d5
- (void)encodeWithCoder:(id)coder;	// 0x3513d
- (void)dealloc;	// 0x350f1
- (id)copyWithZone:(NSZone *)zone;	// 0x350e1
- (id)mainResource;	// 0x34f11
- (id)subresources;	// 0x34c4d
- (id)subframeArchives;	// 0x349b9
- (id)data;	// 0x348b1
@end

@interface WebArchive (WebInternal)
- (id)_initWithCoreLegacyWebArchive:(PassRefPtr<WebCore::LegacyWebArchive>)coreLegacyWebArchive;	// 0x35c9d
- (LegacyWebArchive *)_coreLegacyWebArchive;	// 0x35e1d
@end
