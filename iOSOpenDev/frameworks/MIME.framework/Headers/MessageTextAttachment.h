/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <MIME/MessageTextAttachment.h>
#import <MIME/XXUnknownSuperclass.h>

@class NSMutableDictionary, MessageFileWrapper;

@interface MessageTextAttachment : XXUnknownSuperclass {
@private
	NSMutableDictionary *_cache;	// 4 = 0x4
}
@property(retain, nonatomic) MessageFileWrapper *fileWrapper;	// G=0x21e9d; S=0x21eb9; 
- (id)init;	// 0x21d01
- (id)initWithWrapper:(id)wrapper;	// 0x22309
- (void)dealloc;	// 0x22405
- (id)description;	// 0x22399
- (id)cachedValueForKey:(id)key;	// 0x21d65
- (void)setCachedValue:(id)value forKey:(id)key;	// 0x21ddd
// declared property getter: - (id)fileWrapper;	// 0x21e9d
// declared property setter: - (void)setFileWrapper:(id)wrapper;	// 0x21eb9
- (unsigned)approximateSize;	// 0x21ed5
- (BOOL)hasBeenDownloaded;	// 0x22071
- (void)download;	// 0x21cf5
- (BOOL)isPlaceholder;	// 0x22095
- (void)inlineDisplayData:(id *)data mimeType:(id *)type;	// 0x220bd
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x22115
@end

@interface MessageTextAttachment (MFMailMimeTextAttachmentExtras)
- (BOOL)shouldDownloadAttachmentOnDisplay;	// 0x21cf9
- (id)textEncodingGuess;	// 0x21cfd
@end

@interface MessageTextAttachment (MimeTextAttachmentExtras)
@property(retain) id mimePart;	// G=0x222d1; S=0x222ed; converted property
// converted property getter: - (id)mimePart;	// 0x222d1
// converted property setter: - (void)setMimePart:(id)part;	// 0x222ed
@end
