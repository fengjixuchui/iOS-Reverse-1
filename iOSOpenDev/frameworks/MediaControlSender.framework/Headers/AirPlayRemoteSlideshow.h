/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */


#import <MediaControlSender/MediaControlSender-Structs.h>

@class MediaControlClient;
@protocol AirPlayRemoteSlideshowDelegate;

@interface AirPlayRemoteSlideshow : NSObject {
	dispatch_queue_s *_internalQueue;	// 4 = 0x4
	MediaControlClient *_client;	// 8 = 0x8
	id<AirPlayRemoteSlideshowDelegate> _delegate;	// 12 = 0xc
	dispatch_queue_s *_userQueue;	// 16 = 0x10
	BOOL _started;	// 20 = 0x14
	double _startTime;	// 24 = 0x18
}
@property(assign, nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;	// G=0x13f9; S=0x1409; @synthesize=_delegate
- (id)init;	// 0x1781
- (void)dealloc;	// 0x1c81
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1409
- (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x1c09
- (void)setHost:(id)host;	// 0x1bad
- (void)setPassword:(id)password;	// 0x1b51
- (void)_configureEventHandler;	// 0x1479
- (void)getFeaturesWithCompletion:(id)completion;	// 0x1af5
- (void)startWithOptions:(id)options completion:(id)completion;	// 0x19d5
- (void)stopWithOptions:(id)options completion:(id)completion;	// 0x1885
// declared property getter: - (id)delegate;	// 0x13f9
@end
