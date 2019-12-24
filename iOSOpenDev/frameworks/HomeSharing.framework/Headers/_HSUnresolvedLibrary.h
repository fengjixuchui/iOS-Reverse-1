/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HomeSharing-Structs.h>
/* iOSOpenDev: commented-out (since file not found)
#import <CFNetwork/_kCFStreamPropertyHTTPResponseHeader.h>
*/

@class NSNetService;

/* iOSOpenDev: replaced with next line (since file not found)
@interface _HSUnresolvedLibrary : _kCFStreamPropertyHTTPResponseHeader {
*/
@interface _HSUnresolvedLibrary : NSObject {
@private
	id _completionHandler;	// 4 = 0x4
	NSNetService *_netService;	// 8 = 0x8
	DNSServiceRef_tRef _resolvingDNSService;	// 12 = 0xc
}
- (void)_netServiceDidNotResolve;	// 0x5a99
- (void)_netServiceDidResolveAddressWithTXTRecordData:(id)_netService host:(hostent *)host port:(unsigned short)port;	// 0x549d
- (void)_timeoutResolve;	// 0x5465
- (void)resolveWithTimeout:(double)timeout completionHandler:(id)handler;	// 0x5209
- (void)_callAndInvalidateCompletionHandlerWithLibrary:(id)library;	// 0x51c5
- (void)dealloc;	// 0x514d
- (id)initWithNSNetService:(id)nsnetService;	// 0x50f9
@end
