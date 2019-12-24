/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/XXUnknownSuperclass.h>

@class NSMutableArray, NSLock;

__attribute__((visibility("hidden")))
@interface ICEResultWaitQueue : XXUnknownSuperclass {
@private
	NSMutableArray *queryList;	// 4 = 0x4
	NSLock *queryLock;	// 8 = 0x8
	opaque_pthread_cond_t resCond;	// 12 = 0xc
	opaque_pthread_mutex_t resMutex;	// 40 = 0x28
}
- (id)init;	// 0x1f8b5
- (void)dealloc;	// 0x1fcc5
- (id)resultForCallID:(int)callID;	// 0x1fac9
- (void)addResult:(tagCONNRESULT *)result forCallID:(int)callID;	// 0x1f949
@end
