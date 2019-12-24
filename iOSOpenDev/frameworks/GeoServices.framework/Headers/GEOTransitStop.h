/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, GEOPlace;

@interface GEOTransitStop : PBCodable {
	GEOPlace *_place;	// 4 = 0x4
	BOOL _hasTimestamp;	// 8 = 0x8
	double _timestamp;	// 12 = 0xc
	BOOL _hasTimezoneOffset;	// 20 = 0x14
	int _timezoneOffset;	// 24 = 0x18
	BOOL _hasDepartureInterval;	// 28 = 0x1c
	int _departureInterval;	// 32 = 0x20
	NSString *_iconName;	// 36 = 0x24
	NSString *_transitCost;	// 40 = 0x28
	BOOL _hasAgentIndex;	// 44 = 0x2c
	int _agentIndex;	// 48 = 0x30
	NSString *_supplementalInstructions;	// 52 = 0x34
}
@property(retain, nonatomic) NSString *supplementalInstructions;	// G=0x19621; S=0x19631; @synthesize=_supplementalInstructions
@property(readonly, assign, nonatomic) BOOL hasSupplementalInstructions;	// G=0x18d7d; 
@property(assign, nonatomic) int agentIndex;	// G=0x19611; S=0x18d59; @synthesize=_agentIndex
@property(assign, nonatomic) BOOL hasAgentIndex;	// G=0x195f1; S=0x19601; @synthesize=_hasAgentIndex
@property(retain, nonatomic) NSString *transitCost;	// G=0x195bd; S=0x195cd; @synthesize=_transitCost
@property(readonly, assign, nonatomic) BOOL hasTransitCost;	// G=0x18d41; 
@property(retain, nonatomic) NSString *iconName;	// G=0x19589; S=0x19599; @synthesize=_iconName
@property(readonly, assign, nonatomic) BOOL hasIconName;	// G=0x18d29; 
@property(assign, nonatomic) int departureInterval;	// G=0x19579; S=0x18d05; @synthesize=_departureInterval
@property(assign, nonatomic) BOOL hasDepartureInterval;	// G=0x19559; S=0x19569; @synthesize=_hasDepartureInterval
@property(assign, nonatomic) int timezoneOffset;	// G=0x19549; S=0x18ce1; @synthesize=_timezoneOffset
@property(assign, nonatomic) BOOL hasTimezoneOffset;	// G=0x19529; S=0x19539; @synthesize=_hasTimezoneOffset
@property(assign, nonatomic) double timestamp;	// G=0x19511; S=0x18cb5; @synthesize=_timestamp
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x194f1; S=0x19501; @synthesize=_hasTimestamp
@property(retain, nonatomic) GEOPlace *place;	// G=0x194bd; S=0x194cd; @synthesize=_place
@property(readonly, assign, nonatomic) BOOL hasPlace;	// G=0x18c9d; 
// declared property setter: - (void)setSupplementalInstructions:(id)instructions;	// 0x19631
// declared property getter: - (id)supplementalInstructions;	// 0x19621
// declared property getter: - (int)agentIndex;	// 0x19611
// declared property setter: - (void)setHasAgentIndex:(BOOL)index;	// 0x19601
// declared property getter: - (BOOL)hasAgentIndex;	// 0x195f1
// declared property setter: - (void)setTransitCost:(id)cost;	// 0x195cd
// declared property getter: - (id)transitCost;	// 0x195bd
// declared property setter: - (void)setIconName:(id)name;	// 0x19599
// declared property getter: - (id)iconName;	// 0x19589
// declared property getter: - (int)departureInterval;	// 0x19579
// declared property setter: - (void)setHasDepartureInterval:(BOOL)interval;	// 0x19569
// declared property getter: - (BOOL)hasDepartureInterval;	// 0x19559
// declared property getter: - (int)timezoneOffset;	// 0x19549
// declared property setter: - (void)setHasTimezoneOffset:(BOOL)offset;	// 0x19539
// declared property getter: - (BOOL)hasTimezoneOffset;	// 0x19529
// declared property getter: - (double)timestamp;	// 0x19511
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x19501
// declared property getter: - (BOOL)hasTimestamp;	// 0x194f1
// declared property setter: - (void)setPlace:(id)place;	// 0x194cd
// declared property getter: - (id)place;	// 0x194bd
- (void)writeTo:(id)to;	// 0x192d5
- (BOOL)readFrom:(id)from;	// 0x19059
- (id)dictionaryRepresentation;	// 0x18e05
- (id)description;	// 0x18d95
// declared property getter: - (BOOL)hasSupplementalInstructions;	// 0x18d7d
// declared property setter: - (void)setAgentIndex:(int)index;	// 0x18d59
// declared property getter: - (BOOL)hasTransitCost;	// 0x18d41
// declared property getter: - (BOOL)hasIconName;	// 0x18d29
// declared property setter: - (void)setDepartureInterval:(int)interval;	// 0x18d05
// declared property setter: - (void)setTimezoneOffset:(int)offset;	// 0x18ce1
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x18cb5
// declared property getter: - (BOOL)hasPlace;	// 0x18c9d
- (void)dealloc;	// 0x18c1d
@end

