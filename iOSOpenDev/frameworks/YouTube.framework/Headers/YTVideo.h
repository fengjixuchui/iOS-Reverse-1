/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <YouTube/XXUnknownSuperclass.h>
#import <YouTube/YouTube-Structs.h>

@class NSMutableArray, NSString, NSCalendarDate, NSURL, NSArray;

@interface YTVideo : XXUnknownSuperclass {
	NSString *_id;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_author;	// 12 = 0xc
	NSCalendarDate *_dateUpdated;	// 16 = 0x10
	NSCalendarDate *_dateAdded;	// 20 = 0x14
	NSArray *_videoReferences;	// 24 = 0x18
	NSString *_notificationName;	// 28 = 0x1c
	NSString *_videoDescription;	// 32 = 0x20
	NSString *_category;	// 36 = 0x24
	NSArray *_tags;	// 40 = 0x28
	unsigned _numberOfViews;	// 44 = 0x2c
	unsigned _numLikes;	// 48 = 0x30
	unsigned _numDislikes;	// 52 = 0x34
	int _batchStatus;	// 56 = 0x38
	NSURL *_infoURL;	// 60 = 0x3c
	NSURL *_thumbnailURL;	// 64 = 0x40
	NSURL *_commentsURL;	// 68 = 0x44
	NSURL *_editURL;	// 72 = 0x48
	NSURL *_ratingsURL;	// 76 = 0x4c
	NSURL *_captionsURL;	// 80 = 0x50
	NSString *_shortID;	// 84 = 0x54
	NSString *_unplayable;	// 88 = 0x58
	BOOL _isProcessing;	// 92 = 0x5c
	NSMutableArray *_captions;	// 96 = 0x60
	int _privacy;	// 100 = 0x64
	id _thumbnailProxyBlock;	// 104 = 0x68
}
@property(readonly, retain) NSString *title;	// G=0xa851; converted property
@property(readonly, retain) NSString *author;	// G=0x92c5; converted property
@property(readonly, retain) NSCalendarDate *dateUpdated;	// G=0x92d5; converted property
@property(readonly, retain) NSCalendarDate *dateAdded;	// G=0x92e5; converted property
@property(readonly, retain) NSString *videoDescription;	// G=0x9355; converted property
@property(readonly, retain) NSString *category;	// G=0x9365; converted property
@property(readonly, retain) NSArray *tags;	// G=0x9375; converted property
@property(readonly, assign) unsigned numberOfViews;	// G=0x93dd; converted property
@property(readonly, assign) unsigned numLikes;	// G=0x9395; converted property
@property(readonly, assign) unsigned numDislikes;	// G=0x93a5; converted property
@property(readonly, assign) int batchStatus;	// G=0x93ed; converted property
@property(readonly, retain) NSURL *infoURL;	// G=0x9335; converted property
@property(readonly, retain) NSURL *thumbnailURL;	// G=0x9345; converted property
@property(readonly, retain) NSURL *commentsURL;	// G=0x92f5; converted property
@property(readonly, retain) NSURL *editURL;	// G=0x9305; converted property
@property(readonly, retain) NSURL *ratingsURL;	// G=0x9315; converted property
@property(readonly, retain) NSURL *captionsURL;	// G=0x9325; converted property
@property(readonly, retain) NSString *shortID;	// G=0x9d99; converted property
@property(readonly, retain) NSString *unplayable;	// G=0x9385; converted property
@property(readonly, assign) BOOL isProcessing;	// G=0x93fd; converted property
@property(readonly, retain) NSMutableArray *captions;	// G=0xa249; converted property
+ (void)disableNotifications;	// 0x927d
+ (void)enableNotifications;	// 0x9291
+ (id)unsupportedVideoError;	// 0xa34d
+ (id)videoNotFoundError;	// 0xa399
+ (id)videoIsProcessingError;	// 0xa3e5
+ (void)reset3GPlaybackStallCount;	// 0x92a5
+ (void)playbackDidStall;	// 0xa431
- (BOOL)isEqual:(id)equal;	// 0xa47d
- (unsigned)hash;	// 0xaf39
- (id)initFromArchiveDictionary:(id)archiveDictionary;	// 0x940d
- (id)archiveDictionary;	// 0x980d
- (void)_postVideoDidChange;	// 0x9c89
- (void)_thumbnailDidLoad;	// 0x9ce1
- (id)initWithID:(id)anId title:(id)title dateUpdated:(id)updated dateAdded:(id)added videoReferences:(id)references infoURL:(id)url videoDescription:(id)description category:(id)category tags:(id)tags author:(id)author thumbnailURL:(id)url11 numLikes:(unsigned)likes numDislikes:(unsigned)dislikes numberOfViews:(unsigned)views batchStatus:(int)status commentsURL:(id)url16 editURL:(id)url17 ratingsURL:(id)url18 captionsURL:(id)url19 shortID:(id)anId20 unplayable:(id)unplayable isProcessing:(BOOL)processing privacy:(int)privacy;	// 0xab61
- (void)dealloc;	// 0xa929
- (id)description;	// 0xa885
- (id)ID;	// 0x92b5
// converted property getter: - (id)shortID;	// 0x9d99
// converted property getter: - (id)title;	// 0xa851
// converted property getter: - (id)author;	// 0x92c5
// converted property getter: - (id)dateUpdated;	// 0x92d5
// converted property getter: - (id)dateAdded;	// 0x92e5
- (id)dateAddedString;	// 0xa7dd
// converted property getter: - (id)commentsURL;	// 0x92f5
// converted property getter: - (id)editURL;	// 0x9305
// converted property getter: - (id)ratingsURL;	// 0x9315
// converted property getter: - (id)captionsURL;	// 0x9325
// converted property getter: - (id)infoURL;	// 0x9335
// converted property getter: - (id)thumbnailURL;	// 0x9345
// converted property getter: - (id)videoDescription;	// 0x9355
// converted property getter: - (id)category;	// 0x9365
// converted property getter: - (id)tags;	// 0x9375
- (id)tagsString;	// 0x9dd1
// converted property getter: - (id)unplayable;	// 0x9385
- (double)age;	// 0x9df9
// converted property getter: - (unsigned)numLikes;	// 0x9395
// converted property getter: - (unsigned)numDislikes;	// 0x93a5
- (BOOL)positiveRating;	// 0x93b5
- (id)ratingPercentageString;	// 0xa715
// converted property getter: - (unsigned)numberOfViews;	// 0x93dd
// converted property getter: - (int)batchStatus;	// 0x93ed
- (CGImageRef)thumbnailLoadIfAbsent:(BOOL)absent;	// 0x9e69
- (CGImageRef)roundedThumbnailLoadIfAbsent:(BOOL)absent;	// 0x9ecd
- (CGImageRef)largeThumbnailLoadIfAbsent:(BOOL)absent;	// 0x9f31
- (CGImageRef)pluginThumbnailLoadIfAbsent:(BOOL)absent;	// 0x9f8d
- (void)loadThumbnailWithCallback:(id)callback;	// 0x9fe9
- (id)videoReferenceForProfile:(int)profile;	// 0xa0a5
- (BOOL)allowsHighQuality3GPlayback;	// 0xa679
- (void)carrierBundleDidChangeNotification:(id)carrierBundle;	// 0xa121
- (id)bestVideoReference;	// 0xa5a5
- (id)anyVideoReference;	// 0xa141
- (BOOL)isBookmarked;	// 0xa151
- (BOOL)isPlayable;	// 0xa205
// converted property getter: - (BOOL)isProcessing;	// 0x93fd
// converted property getter: - (id)captions;	// 0xa249
- (id)privacyString;	// 0xa531
- (BOOL)ownVideo;	// 0xa2c1
@end
