/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

#import <MMCSServices/MMCSServices-Structs.h>


@class NSMutableDictionary;

@interface MMCSController : NSObject {
	int _connectionBehavior;	// 4 = 0x4
	MMCSEngineRef _engine;	// 8 = 0x8
	CFURLRef _chunkStoreURL;	// 12 = 0xc
	unsigned long long _currentItemID;	// 16 = 0x10
	NSMutableDictionary *_transfers;	// 24 = 0x18
	NSMutableDictionary *_requestIDToBlockMap;	// 28 = 0x1c
	NSMutableDictionary *_requestIDToTransfersMap;	// 32 = 0x20
	NSMutableDictionary *_requestIDToRemainingTransfersMap;	// 36 = 0x24
	NSMutableDictionary *_transferToRequestIDsMap;	// 40 = 0x28
}
@property(readonly, assign) BOOL isActive;	// G=0x3da1; 
@property(assign) int connectionBehavior;	// G=0x4ce5; S=0x4cf5; @synthesize=_connectionBehavior
// declared property setter: - (void)setConnectionBehavior:(int)behavior;	// 0x4cf5
// declared property getter: - (int)connectionBehavior;	// 0x4ce5
- (void)_itemCompleted:(id)completed;	// 0x4c89
- (void)_getItemCompleted:(id)completed path:(id)path error:(id)error;	// 0x498d
- (void)_putItemCompleted:(id)completed error:(id)error;	// 0x46e5
- (void)_processCompletedItem:(id)item;	// 0x4379
- (void)_getItemUpdated:(id)updated progress:(double)progress state:(int)state error:(id)error;	// 0x4239
- (void)_putItemUpdated:(id)updated progress:(double)progress state:(int)state error:(id)error;	// 0x40e1
- (void)putFiles:(id)files requestURL:(id)url requestorID:(id)anId authToken:(id)token completionBlock:(id)block;	// 0x3f49
- (void)getFiles:(id)files requestURL:(id)url requestorID:(id)anId authToken:(id)token completionBlock:(id)block;	// 0x3e85
- (BOOL)unregisterFiles:(id)files;	// 0x3e25
- (BOOL)registerFiles:(id)files;	// 0x3dc5
// declared property getter: - (BOOL)isActive;	// 0x3da1
- (BOOL)_getTransfers:(id)transfers requestURL:(id)url requestorID:(id)anId token:(id)token error:(id *)error;	// 0x3a45
- (BOOL)_putTransfers:(id)transfers requestURL:(id)url requestorID:(id)anId token:(id)token error:(id *)error;	// 0x33b1
- (void)_setScheduledTransfers:(id)transfers block:(id)block;	// 0x306d
- (BOOL)_unregisterTransfers:(id)transfers;	// 0x2e29
- (BOOL)_registerTransfers:(id)transfers;	// 0x29ed
- (id)_registeredTransferForItemID:(unsigned long long)itemID;	// 0x28ed
- (id)_registeredTransferForGUID:(id)guid;	// 0x28cd
- (MMCSEngineRef)_engine;	// 0x1a85
- (id)_options;	// 0x1975
- (void)dealloc;	// 0x18b1
@end