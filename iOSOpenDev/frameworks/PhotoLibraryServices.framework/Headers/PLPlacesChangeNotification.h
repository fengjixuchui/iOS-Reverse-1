/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAlbumListChangeNotification.h>

@class NSArray, NSOrderedSet, PLPlaces;

@interface PLPlacesChangeNotification : PLAlbumListChangeNotification {
@private
	PLPlaces *_places;	// 4 = 0x4
	NSOrderedSet *_originalPlacesSet;	// 8 = 0x8
	NSOrderedSet *_newPlacesSet;	// 12 = 0xc
	NSArray *_changedPlacesList;	// 16 = 0x10
	PLChangeNotification *_changeNotification;	// 20 = 0x14
}
+ (id)notificationWithPlaces:(id)places originalPlacesSet:(id)set newPlacesSet:(id)set3 changedPlacesList:(id)list backingNotification:(id)notification;	// 0x6c309
- (BOOL)_getOldSet:(id *)set newSet:(id *)set2;	// 0x6c4e5
- (NSObject *)albumList;	// 0x6c4d5
- (void)dealloc;	// 0x6c439
- (id)initWithPlaces:(id)places originalPlacesSet:(id)set newPlacesSet:(id)set3 changedPlacesList:(id)list backingNotification:(id)notification;	// 0x6c36d
- (id)init;	// 0x6c369
@end
