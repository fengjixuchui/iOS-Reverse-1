/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/XXUnknownSuperclass.h>


@interface AVRecorder : XXUnknownSuperclass {
@private
	AVRecorderPrivate *_priv;	// 4 = 0x4
}
@property(retain) id filePath;	// G=0x18ef1; S=0x18f39; converted property
@property(assign) float micVolume;	// G=0x18b85; S=0x18b65; converted property
- (id)init;	// 0x1894d
- (void)dealloc;	// 0x18f8d
// converted property setter: - (void)setFilePath:(id)path;	// 0x18f39
// converted property getter: - (id)filePath;	// 0x18ef1
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x18e9d
- (id)attributeForKey:(id)key;	// 0x18e65
- (void)implNotification:(id)notification;	// 0x18ded
- (BOOL)activate:(id *)activate;	// 0x18cc9
- (BOOL)start;	// 0x18ca1
- (void)stop;	// 0x18c81
- (BOOL)isRecording;	// 0x18c59
- (BOOL)isActive;	// 0x18c31
- (BOOL)takePhoto;	// 0x18c09
- (BOOL)autoFocusAtPoint:(CGPoint)point;	// 0x18be1
- (void)deactivate;	// 0x18bc1
// converted property getter: - (float)micVolume;	// 0x18b85
// converted property setter: - (void)setMicVolume:(float)volume;	// 0x18b65
- (long long)recordedFileSizeInBytes;	// 0x18b35
- (double)recordedDuration;	// 0x18af5
- (unsigned)audioNumDeviceChannels;	// 0x18ad5
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2;	// 0x18aad
- (BOOL)audioCurrentAverageDecibelLevels:(float *)levels andPeakDecibelLevels:(float *)levels2;	// 0x18a85
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x189e5
@end
