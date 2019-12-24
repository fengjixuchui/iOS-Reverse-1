/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <AirTraffic/AirTraffic-Structs.h>
#import <AirTraffic/XXUnknownSuperclass.h>

@class NSString, NSFileHandle, NSDate;

@interface ATRollableLog : XXUnknownSuperclass {
	NSDate *_lastStatDate;	// 4 = 0x4
	NSString *_directory;	// 8 = 0x8
	NSString *_baseFilename;	// 12 = 0xc
	NSString *_generationalFilenameFormat;	// 16 = 0x10
	NSFileHandle *_fh;	// 20 = 0x14
	dispatch_source_s *_fdWatcher;	// 24 = 0x18
	dispatch_queue_s *_logQueue;	// 28 = 0x1c
	dispatch_queue_s *_logRequestQueue;	// 32 = 0x20
}
@property(retain) NSFileHandle *fh;	// G=0x302d; S=0x3041; @synthesize=_fh
@property(retain) NSDate *lastStatDate;	// G=0x3065; S=0x3079; @synthesize=_lastStatDate
+ (id)loggerWithFilename:(id)filename;	// 0x2ca5
+ (id)allLogFilesForFilename:(id)filename;	// 0x1ddd
+ (id)_filenameWithBase:(id)base generationalFormat:(id)format generation:(int)generation;	// 0x1ced
+ (id)_generationalFormatFromBase:(id)base;	// 0x1c09
+ (void)enableLogRolling;	// 0x1c05
// declared property setter: - (void)setLastStatDate:(id)date;	// 0x3079
// declared property getter: - (id)lastStatDate;	// 0x3065
// declared property setter: - (void)setFh:(id)fh;	// 0x3041
// declared property getter: - (id)fh;	// 0x302d
- (id)compressFile:(id)file;	// 0x2d8d
- (void)slurpDataFromFile:(id)file;	// 0x2859
- (void)logString:(id)string;	// 0x2825
- (void)logData:(id)data;	// 0x26ad
- (id)initWithFilename:(id)filename;	// 0x2581
- (void)_statFileIfNecessaryForRollingCheck;	// 0x2425
- (void)_rollLogs;	// 0x21b5
- (void)_loadUpHandle;	// 0x1eb9
- (id)_fullCompressedFilePathWithGenerationNumber:(int)generationNumber;	// 0x1da9
- (id)_fullFilePathWithGenerationNumber:(int)generationNumber;	// 0x1d71
- (id)_filenameWithGenerationNumber:(int)generationNumber;	// 0x1d21
@end
