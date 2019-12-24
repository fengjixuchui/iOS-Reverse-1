/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/GMM-Structs.h>
#import <GMM/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface GMMTileStore : XXUnknownSuperclass {
	TileStore *_tileStore;	// 4 = 0x4
}
@property(assign, nonatomic) int tileEdition;	// G=0x37295; S=0x372a9; @dynamic
- (void)evict;	// 0x3734d
- (BOOL)selectData:(char **)data length:(unsigned *)length forTilePath:(const XXStruct_j8inqB *)tilePath;	// 0x37331
- (BOOL)hasDataForTilePath:(const XXStruct_j8inqB *)tilePath;	// 0x37315
- (void)insertData:(const char *)data length:(unsigned long)length forTilePath:(const XXStruct_j8inqB *)tilePath;	// 0x37301
- (void)endWrites;	// 0x372ed
- (void)beginWrites;	// 0x372d9
- (void)openDatabase:(BOOL)database;	// 0x372bd
// declared property setter: - (void)setTileEdition:(int)edition;	// 0x372a9
// declared property getter: - (int)tileEdition;	// 0x37295
- (id)initWithPath:(id)path;	// 0x371ad
@end
