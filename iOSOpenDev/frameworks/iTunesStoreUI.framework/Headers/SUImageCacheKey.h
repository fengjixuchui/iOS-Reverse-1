/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCopying.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class SUImageDataProvider, NSURL;

@interface SUImageCacheKey : XXUnknownSuperclass <NSCopying> {
	SUImageDataProvider *_dataProvider;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
}
- (BOOL)isEqual:(id)equal;	// 0xa1b41
- (unsigned)hash;	// 0xa1b01
- (id)copyWithZone:(NSZone *)zone;	// 0xa1a75
- (void)dealloc;	// 0xa1a15
@end
