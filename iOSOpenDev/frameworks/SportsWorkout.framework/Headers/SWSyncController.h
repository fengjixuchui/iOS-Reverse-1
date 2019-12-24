/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <SportsWorkout/SWGeneratePINConnectionDelegate.h>
#import <SportsWorkout/XXUnknownSuperclass.h>
#import <SportsWorkout/SWSyncWorkoutConnectionDelegate.h>
#import <SportsWorkout/SWPINStatusConnectionDelegate.h>
#import <SportsWorkout/SWSyncServiceConnectionDelegate.h>

@class SWSyncHost, SWSyncServiceConnection, NSString, NSMutableArray;
@protocol SWSyncControllerDelegate;

@interface SWSyncController : XXUnknownSuperclass <SWSyncServiceConnectionDelegate, SWGeneratePINConnectionDelegate, SWSyncWorkoutConnectionDelegate, SWPINStatusConnectionDelegate> {
	int _attemptedUploadCount;	// 4 = 0x4
	int _uploadCount;	// 8 = 0x8
	id<SWSyncControllerDelegate> _syncDelegate;	// 12 = 0xc
	SWSyncHost *_syncHost;	// 16 = 0x10
	SWSyncServiceConnection *_currentSyncConnection;	// 20 = 0x14
	NSMutableArray *_empedDirectoriesToSync;	// 24 = 0x18
	NSMutableArray *_workoutFilesToSync;	// 28 = 0x1c
	NSString *_syncPin;	// 32 = 0x20
	NSString *_currentlySyncingWorkoutFilePath;	// 36 = 0x24
	NSString *_baseDirectoryPath;	// 40 = 0x28
	BOOL _shouldMoveFilesToSynchedDirectoryWhenDone;	// 44 = 0x2c
}
@property(assign, nonatomic) int uploadCount;	// G=0x35545; S=0x35555; @synthesize=_uploadCount
@property(assign, nonatomic) id<SWSyncControllerDelegate> syncDelegate;	// G=0x35505; S=0x35515; @synthesize=_syncDelegate
@property(assign, nonatomic) BOOL shouldMoveFilesToSynchedDirectoryWhenDone;	// G=0x35525; S=0x35535; @synthesize=_shouldMoveFilesToSynchedDirectoryWhenDone
+ (void)releaseSyncInProgressFileLock;	// 0x33efd
+ (BOOL)takeSyncInProgressFileLock:(BOOL)progressFileLock;	// 0x33d45
// declared property setter: - (void)setUploadCount:(int)count;	// 0x35555
// declared property getter: - (int)uploadCount;	// 0x35545
// declared property setter: - (void)setShouldMoveFilesToSynchedDirectoryWhenDone:(BOOL)moveFilesToSynchedDirectoryWhenDone;	// 0x35535
// declared property getter: - (BOOL)shouldMoveFilesToSynchedDirectoryWhenDone;	// 0x35525
// declared property setter: - (void)setSyncDelegate:(id)delegate;	// 0x35515
// declared property getter: - (id)syncDelegate;	// 0x35505
- (void)connectionDidReturnStatusInvalid:(id)connection;	// 0x35451
- (void)connectionDidReturnStatusUnconfirmed:(id)connection;	// 0x353a5
- (void)connection:(id)connection didReplaceOldPINWithNewPIN:(id)newPIN;	// 0x352c9
- (void)connection:(id)connection didConfirmEmail:(id)email screenName:(id)name;	// 0x35211
- (void)connection:(id)connection didGenerateToken:(id)token;	// 0x35105
- (void)connectionDidCompleteSync:(id)connection;	// 0x35035
- (void)connectionDidSyncWorkout:(id)connection;	// 0x34db1
- (void)_syncNextWorkout;	// 0x34c09
- (void)connection:(id)connection didGeneratePIN:(id)pin;	// 0x34b45
- (void)_syncWorkoutsForNextEmpedDirectory;	// 0x346d5
- (unsigned)unsyncedWorkoutsCount;	// 0x34411
- (void)visitNikeWebSite;	// 0x3430d
- (void)syncAllWorkouts;	// 0x341f1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x33ff5
- (id)_syncHost;	// 0x33fa5
- (void)dealloc;	// 0x33c81
- (id)initWithBaseDirectoryPath:(id)baseDirectoryPath;	// 0x33ba5
@end