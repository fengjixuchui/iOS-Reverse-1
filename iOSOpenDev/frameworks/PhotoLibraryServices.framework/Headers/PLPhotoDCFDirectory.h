/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPhotoDCFObject.h>
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>

@class PLPhotoDCIMDirectory;

@interface PLPhotoDCFDirectory : PLPhotoDCFObject {
	PLPhotoDCIMDirectory *_dcimDirectory;	// 12 = 0xc
	CFDictionaryRef _fileGroupsByNumber;	// 16 = 0x10
	int _maxFileGroupNumber;	// 20 = 0x14
	int _lastUsedFileGroupNumber;	// 24 = 0x18
	BOOL _considerInvalidFileGroups;	// 28 = 0x1c
}
@property(assign) BOOL considerInvalidFileGroups;	// G=0x5c395; S=0x5c3a5; @synthesize=_considerInvalidFileGroups
@property(readonly, retain) PLPhotoDCIMDirectory *dcimDirectory;	// G=0x5b6fd; converted property
+ (id)fileGroupRequiredEmptyExtensions;	// 0x5b60d
+ (id)fileGroupRequiredEmptyPrefixes;	// 0x5b5fd
+ (void)initializeFileGroupPrefixAndExtensions;	// 0x5b5e5
// declared property setter: - (void)setConsiderInvalidFileGroups:(BOOL)groups;	// 0x5c3a5
// declared property getter: - (BOOL)considerInvalidFileGroups;	// 0x5c395
- (void)setWriteIsPending:(BOOL)pending;	// 0x5c35d
- (void)removeFileGroup:(id)group;	// 0x5c311
- (id)nextAvailableVideoFileGroupWithExtension:(id)extension;	// 0x5c2f5
- (id)nextAvailableFileGroup;	// 0x5c2d1
- (id)_nextAvailableFileGroupWithPrefix:(id)prefix extension:(id)extension;	// 0x5c055
- (id)fileGroups;	// 0x5bbd5
- (BOOL)isEntensionValid:(id)valid;	// 0x5bb89
- (void)ensureDirectoryExists;	// 0x5bb69
- (id)fullPath;	// 0x5bb21
- (BOOL)canAddVideo;	// 0x5bb01
- (BOOL)canAddImage;	// 0x5bae1
- (BOOL)_canAddItemWithPrefix:(id)prefix;	// 0x5ba25
- (BOOL)_canAddItemWithPrefix:(id)prefix minimumFileGroupNumber:(int)number;	// 0x5b959
- (BOOL)canAddFileGroupWithGroupNumber:(int)groupNumber;	// 0x5b731
- (unsigned)_calculateBaseDirectoryValue;	// 0x5b70d
// converted property getter: - (id)dcimDirectory;	// 0x5b6fd
- (void)dealloc;	// 0x5b6a9
- (id)initWithName:(id)name number:(int)number dcimDirectory:(id)directory;	// 0x5b61d
- (id)_lastUsedFileGroupUserInfoKey;	// 0x5b5a5
@end
