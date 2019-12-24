/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import <SportsVoices/XXUnknownSuperclass.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __SWUtils__
#define __SWUtils__ 1
@interface SWUtils : XXUnknownSuperclass {
}
+ (void)ensureDirectoryExists:(id)exists;	// 0x9e3d
+ (void)nikeUserDefaultsRemoveObjectForKey:(id)key;	// 0x9e19
+ (void)nikeUserDefaultsSetString:(id)string forKey:(id)key;	// 0x9df5
+ (id)nikeUserDefaultsNumberForKey:(id)key;	// 0x9da5
+ (id)nikeUserDefaultsStringForKey:(id)key;	// 0x9d59
+ (BOOL)nikeUserDefaultsBoolForKey:(id)key;	// 0x9d25
+ (void)resetLogs;	// 0x9c05
+ (void)__logToFileForMessageType:(id)messageType message:(id)message arguments:(void *)arguments;	// 0x9b19
+ (void)forDefault:(id)aDefault log:(id)log;	// 0x9a6d
+ (void)log:(id)log;	// 0x9a19
+ (void)setShouldUseNikeAppPreferenceKeyForLogging:(BOOL)useNikeAppPreferenceKeyForLogging;	// 0x9a09
+ (void)setShouldLogToFilesInDirectory:(id)logToFilesInDirectory;	// 0x99b1
+ (id)__dateStringForDate:(id)date;	// 0x9915
@end
#endif