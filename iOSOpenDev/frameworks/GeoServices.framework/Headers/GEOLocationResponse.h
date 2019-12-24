/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface GEOLocationResponse : PBCodable {
	int _status;	// 4 = 0x4
	NSMutableArray *_locations;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *locations;	// G=0x14c0d; S=0x14c1d; @synthesize=_locations
@property(assign, nonatomic) int status;	// G=0x14bed; S=0x14bfd; @synthesize=_status
// declared property setter: - (void)setLocations:(id)locations;	// 0x14c1d
// declared property getter: - (id)locations;	// 0x14c0d
// declared property setter: - (void)setStatus:(int)status;	// 0x14bfd
// declared property getter: - (int)status;	// 0x14bed
- (void)writeTo:(id)to;	// 0x14ab5
- (BOOL)readFrom:(id)from;	// 0x14915
- (id)dictionaryRepresentation;	// 0x14761
- (id)description;	// 0x146f1
- (id)locationAtIndex:(unsigned)index;	// 0x146d1
- (unsigned)locationsCount;	// 0x146b1
- (void)addLocation:(id)location;	// 0x1464d
- (void)dealloc;	// 0x14609
@end

