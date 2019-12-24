/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSArray, SUMessage, NSMutableSet;

@interface SUScriptMessage : SUScriptObject {
	NSMutableSet *_callbacks;	// 36 = 0x24
}
@property(copy) NSString *postURL;	// G=0xce3d1; S=0xce615; 
@property(copy) NSArray *messageParts;	// G=0xce29d; S=0xce409; 
@property(retain, nonatomic) SUMessage *nativeMessage;	// G=0xcdb2d; S=0xcdb55; 
+ (void)initialize;	// 0xcecf9
+ (id)webScriptNameForSelector:(SEL)selector;	// 0xcec41
+ (id)webScriptNameForKey:(const char *)key;	// 0xceb9d
- (id)scriptAttributeKeys;	// 0xcec99
- (id)attributeKeys;	// 0xcec89
- (void)_removeCallback:(id)callback;	// 0xceb4d
- (id)_newTextMessagePartWithObject:(id)object;	// 0xcea69
- (id)_newPlistMessagePartWithObject:(id)object;	// 0xce8fd
- (id)_newJSONMessagePartWithObject:(id)object;	// 0xce7c5
- (void)_addCallback:(id)callback;	// 0xce73d
// declared property setter: - (void)setPostURL:(id)url;	// 0xce615
// declared property setter: - (void)setMessageParts:(id)parts;	// 0xce409
// declared property getter: - (id)postURL;	// 0xce3d1
// declared property getter: - (id)messageParts;	// 0xce29d
- (id)_className;	// 0xce291
- (id)uploadURLForAttachmentType:(id)attachmentType;	// 0xce1f1
- (void)setUploadURL:(id)url forAttachmentType:(id)attachmentType;	// 0xce0a5
- (void)sendWithCompletionHandler:(id)completionHandler;	// 0xcddb9
- (id)makeMessagePartWithObject:(id)object mimeType:(id)type;	// 0xcdca9
- (id)makeMessagePartWithMediaObject:(id)mediaObject;	// 0xcdb9d
// declared property setter: - (void)setNativeMessage:(id)message;	// 0xcdb55
// declared property getter: - (id)nativeMessage;	// 0xcdb2d
- (void)dealloc;	// 0xcdabd
- (id)init;	// 0xcda41
@end