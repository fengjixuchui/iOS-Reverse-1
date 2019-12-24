/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAlbumList.h>
#import <PhotoLibraryServices/PLManagedAlbumList.h>
#import <PhotoLibraryServices/PLAlbumContainer.h>
#import <PhotoLibraryServices/PLIndexMappersDataOrigin.h>

@class NSString, NSMutableOrderedSet, PLFilteredAlbumList;

@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer> {
@private
	PLFilteredAlbumList *_filteredAlbumLists[5];	// 48 = 0x30
	BOOL isRegisteredForChanges;	// 68 = 0x44
	BOOL didRegisteredWithUserInterfaceContext;	// 69 = 0x45
}
@property(readonly, assign, nonatomic) NSString *_typeDescription;	// G=0x4ec5d; 
@property(readonly, assign, nonatomic) NSString *_prettyDescription;	// G=0x4eb95; 
@property(readonly, assign, nonatomic) int filter;	// G=0x4eb49; 
@property(assign, nonatomic) BOOL didRegisteredWithUserInterfaceContext;	// G=0x4ecc1; S=0x4ecd1; @synthesize
@property(assign, nonatomic) BOOL isRegisteredForChanges;	// G=0x4eca1; S=0x4ecb1; @synthesize
@property(readonly, assign, nonatomic) BOOL canEditAlbums;	// G=0x4eb29; 
@property(readonly, assign, nonatomic) BOOL hasAtLeastOneAlbum;	// G=0x4ea05; 
@property(readonly, assign, nonatomic) NSMutableOrderedSet *albums;	// G=0x4e9b1; 
@property(assign, nonatomic) int albumListType;	// G=0x4e94d; S=0x4e975; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x4e7b9
+ (id)photoStreamAlbumListInPhotoLibrary:(id)photoLibrary;	// 0x4e785
+ (id)placesAlbumListInPhotoLibrary:(id)photoLibrary;	// 0x4e751
+ (id)facesAlbumListInPhotoLibrary:(id)photoLibrary;	// 0x4e71d
+ (id)eventListInPhotoLibrary:(id)photoLibrary;	// 0x4e6e9
+ (id)albumListInPhotoLibrary:(id)photoLibrary;	// 0x4e6b5
+ (void)initialize;	// 0x4e689
// declared property setter: - (void)setDidRegisteredWithUserInterfaceContext:(BOOL)registeredWithUserInterfaceContext;	// 0x4ecd1
// declared property getter: - (BOOL)didRegisteredWithUserInterfaceContext;	// 0x4ecc1
// declared property setter: - (void)setIsRegisteredForChanges:(BOOL)changes;	// 0x4ecb1
// declared property getter: - (BOOL)isRegisteredForChanges;	// 0x4eca1
// declared property getter: - (id)_typeDescription;	// 0x4ec5d
// declared property getter: - (id)_prettyDescription;	// 0x4eb95
- (BOOL)albumHasFixedOrder:(NSObject *)order;	// 0x4eb4d
// declared property getter: - (int)filter;	// 0x4eb49
// declared property getter: - (BOOL)canEditAlbums;	// 0x4eb29
// declared property getter: - (BOOL)hasAtLeastOneAlbum;	// 0x4ea05
// declared property getter: - (id)albums;	// 0x4e9b1
// declared property setter: - (void)setAlbumListType:(int)type;	// 0x4e975
// declared property getter: - (int)albumListType;	// 0x4e94d
- (void)willTurnIntoFault;	// 0x4e90d
- (void)awakeFromFetch;	// 0x4e8cd
- (void)awakeFromInsert;	// 0x4e88d
- (void)dealloc;	// 0x4e84d
@end

@interface PLManagedAlbumList (Debug)
+ (id)_typeDescriptionForAlbumListType:(int)albumListType;	// 0x4ece1
@end

@interface PLManagedAlbumList (PLFilteredAlbumList) <PLIndexMappersDataOrigin>
- (void)enumerateDerivedIndexMappers:(id)mappers;	// 0x4ee49
- (void)enumerateFilteredAlbumLists:(id)lists;	// 0x4ee0d
- (void)unregisterAllFilteredAlbums;	// 0x4ede5
- (void)registerFilteredAlbumList:(id)list;	// 0x4ed71
@end

@interface PLManagedAlbumList (Private)
+ (id)_albumListWithType:(int)type inManagedObjectContext:(id)managedObjectContext;	// 0x4ee59
@end

@interface PLManagedAlbumList (Migration)
+ (id)photoStreamAlbumListInManagedObjectContext:(id)managedObjectContext;	// 0x4f2d5
+ (id)placesAlbumListInManagedObjectContext:(id)managedObjectContext;	// 0x4f2c1
+ (id)facesAlbumListInManagedObjectContext:(id)managedObjectContext;	// 0x4f2ad
+ (id)eventListInManagedObjectContext:(id)managedObjectContext;	// 0x4f299
+ (id)albumListInManagedObjectContext:(id)managedObjectContext;	// 0x4f285
+ (void)addSingletonObjectsToContext:(id)context;	// 0x4ef6d
@end

@interface PLManagedAlbumList (ContextChanges)
- (void)unregisterForChanges;	// 0x4f39d
- (void)registerForChanges;	// 0x4f2e9
@end
