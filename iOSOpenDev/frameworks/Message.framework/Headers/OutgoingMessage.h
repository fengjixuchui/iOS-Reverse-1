/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MailMessage.h>

@class MessageBody, MutableMessageHeaders;

@interface OutgoingMessage : MailMessage {
	MessageBody *messageBody;	// 108 = 0x6c
	MutableMessageHeaders *messageHeaders;	// 112 = 0x70
}
@property(retain) MessageBody *messageBody;	// G=0x24ba5; S=0x24ef1; converted property
@property(retain) id mutableHeaders;	// G=0x250fd; S=0x25149; converted property
- (void)dealloc;	// 0x263e1
// converted property setter: - (void)setMessageBody:(id)body;	// 0x24ef1
- (id)messageStore;	// 0x24ba1
// converted property getter: - (id)messageBody;	// 0x24ba5
- (id)messageBodyIfAvailable;	// 0x24bb5
- (id)messageData;	// 0x24f39
- (BOOL)messageData:(id *)data messageSize:(unsigned *)size isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x24ffd
// converted property getter: - (id)mutableHeaders;	// 0x250fd
// converted property setter: - (void)setMutableHeaders:(id)headers;	// 0x25149
- (id)headers;	// 0x25189
- (unsigned)messageSize;	// 0x25199
@end
