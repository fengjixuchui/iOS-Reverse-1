/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>
#import <DAEAS/ASFetchAttachmentTaskProtocol.h>

@class NSString;

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {
	NSString *_messageServerID;	// 104 = 0x68
	NSString *_attachmentName;	// 108 = 0x6c
}
@property(readonly, retain) NSString *attachmentName;	// G=0x9fe5; converted property
- (BOOL)shouldLogIncomingData;	// 0xa0d9
- (void)dealloc;	// 0xa079
- (id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;	// 0xa005
- (id)messageID;	// 0x9ff5
// converted property getter: - (id)attachmentName;	// 0x9fe5
- (BOOL)processContext:(id)context;	// 0x9e0d
- (id)contentType;	// 0x9e09
- (id)command;	// 0x9d99
- (id)parameterData;	// 0x9cd9
- (int)commandCode;	// 0x9cd5
- (int)connectionActionForResponse:(id)response;	// 0x9cd1
- (BOOL)expectsWBXML;	// 0x9ccd
- (id)requestBody;	// 0x9cc9
- (void)finishWithError:(id)error;	// 0x9b21
@end