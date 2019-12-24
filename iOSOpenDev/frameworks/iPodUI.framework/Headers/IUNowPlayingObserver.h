/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>

@class MPSystemNowPlayingController, MPAVController;

@interface IUNowPlayingObserver : XXUnknownSuperclass {
@private
	MPSystemNowPlayingController *_nowPlayingController;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
}
- (id)_currentItem;	// 0x1c8ed
- (void)_rateDidChangeNotification:(id)_rate;	// 0x1c8b1
- (void)_timeDidJumpNotification:(id)_time;	// 0x1c875
- (void)_repeatTypeChanged:(id)changed;	// 0x1c81d
- (void)_playbackStateChanged:(id)changed;	// 0x1c741
- (void)_itemChanged:(id)changed;	// 0x1c6ed
- (void)_contentsChanged:(id)changed;	// 0x1c695
- (void)dealloc;	// 0x1c52d
- (id)initWithPlayer:(id)player;	// 0x1c345
- (id)init;	// 0x1c309
@end