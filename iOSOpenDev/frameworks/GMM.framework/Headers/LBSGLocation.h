/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class LBSGLatLng, NSMutableArray, NSString;

@interface LBSGLocation : XXUnknownSuperclass {
	LBSGLatLng *_latLng;	// 4 = 0x4
	NSString *_source;	// 8 = 0x8
	BOOL _hasAccuracy;	// 12 = 0xc
	int _accuracy;	// 16 = 0x10
	BOOL _hasConfidence;	// 20 = 0x14
	int _confidence;	// 24 = 0x18
	NSMutableArray *_features;	// 28 = 0x1c
	BOOL _hasTimestamp;	// 32 = 0x20
	long long _timestamp;	// 36 = 0x24
	BOOL _hasObsolete;	// 44 = 0x2c
	BOOL _obsolete;	// 45 = 0x2d
	BOOL _hasLocType;	// 46 = 0x2e
	int _locType;	// 48 = 0x30
	NSString *_misc;	// 52 = 0x34
	BOOL _hasAltitude;	// 56 = 0x38
	int _altitude;	// 60 = 0x3c
	BOOL _hasVerticalAccuracy;	// 64 = 0x40
	int _verticalAccuracy;	// 68 = 0x44
	BOOL _hasVelocity;	// 72 = 0x48
	int _velocity;	// 76 = 0x4c
	BOOL _hasHeading;	// 80 = 0x50
	int _heading;	// 84 = 0x54
	NSString *_locationString;	// 88 = 0x58
}
@property(retain, nonatomic) NSString *locationString;	// G=0x2db8d; S=0x2db9d; @synthesize=_locationString
@property(readonly, assign, nonatomic) BOOL hasLocationString;	// G=0x2ccd5; 
@property(assign, nonatomic) int heading;	// G=0x2db7d; S=0x2ccb1; @synthesize=_heading
@property(assign, nonatomic) BOOL hasHeading;	// G=0x2db5d; S=0x2db6d; @synthesize=_hasHeading
@property(assign, nonatomic) int velocity;	// G=0x2db4d; S=0x2cc8d; @synthesize=_velocity
@property(assign, nonatomic) BOOL hasVelocity;	// G=0x2db2d; S=0x2db3d; @synthesize=_hasVelocity
@property(assign, nonatomic) int verticalAccuracy;	// G=0x2db1d; S=0x2cc69; @synthesize=_verticalAccuracy
@property(assign, nonatomic) BOOL hasVerticalAccuracy;	// G=0x2dafd; S=0x2db0d; @synthesize=_hasVerticalAccuracy
@property(assign, nonatomic) int altitude;	// G=0x2daed; S=0x2cc45; @synthesize=_altitude
@property(assign, nonatomic) BOOL hasAltitude;	// G=0x2dacd; S=0x2dadd; @synthesize=_hasAltitude
@property(retain, nonatomic) NSString *misc;	// G=0x2da99; S=0x2daa9; @synthesize=_misc
@property(readonly, assign, nonatomic) BOOL hasMisc;	// G=0x2cc2d; 
@property(assign, nonatomic) int locType;	// G=0x2da89; S=0x2cc09; @synthesize=_locType
@property(assign, nonatomic) BOOL hasLocType;	// G=0x2da69; S=0x2da79; @synthesize=_hasLocType
@property(assign, nonatomic) BOOL obsolete;	// G=0x2da59; S=0x2cbe5; @synthesize=_obsolete
@property(assign, nonatomic) BOOL hasObsolete;	// G=0x2da39; S=0x2da49; @synthesize=_hasObsolete
@property(assign, nonatomic) long long timestamp;	// G=0x2da21; S=0x2cbb9; @synthesize=_timestamp
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x2da01; S=0x2da11; @synthesize=_hasTimestamp
@property(retain, nonatomic) NSMutableArray *features;	// G=0x2d9cd; S=0x2d9dd; @synthesize=_features
@property(assign, nonatomic) int confidence;	// G=0x2d9bd; S=0x2caf1; @synthesize=_confidence
@property(assign, nonatomic) BOOL hasConfidence;	// G=0x2d99d; S=0x2d9ad; @synthesize=_hasConfidence
@property(assign, nonatomic) int accuracy;	// G=0x2d98d; S=0x2cacd; @synthesize=_accuracy
@property(assign, nonatomic) BOOL hasAccuracy;	// G=0x2d96d; S=0x2d97d; @synthesize=_hasAccuracy
@property(retain, nonatomic) NSString *source;	// G=0x2d939; S=0x2d949; @synthesize=_source
@property(readonly, assign, nonatomic) BOOL hasSource;	// G=0x2cab5; 
@property(retain, nonatomic) LBSGLatLng *latLng;	// G=0x2d905; S=0x2d915; @synthesize=_latLng
@property(readonly, assign, nonatomic) BOOL hasLatLng;	// G=0x2ca9d; 
// declared property setter: - (void)setLocationString:(id)string;	// 0x2db9d
// declared property getter: - (id)locationString;	// 0x2db8d
// declared property getter: - (int)heading;	// 0x2db7d
// declared property setter: - (void)setHasHeading:(BOOL)heading;	// 0x2db6d
// declared property getter: - (BOOL)hasHeading;	// 0x2db5d
// declared property getter: - (int)velocity;	// 0x2db4d
// declared property setter: - (void)setHasVelocity:(BOOL)velocity;	// 0x2db3d
// declared property getter: - (BOOL)hasVelocity;	// 0x2db2d
// declared property getter: - (int)verticalAccuracy;	// 0x2db1d
// declared property setter: - (void)setHasVerticalAccuracy:(BOOL)accuracy;	// 0x2db0d
// declared property getter: - (BOOL)hasVerticalAccuracy;	// 0x2dafd
// declared property getter: - (int)altitude;	// 0x2daed
// declared property setter: - (void)setHasAltitude:(BOOL)altitude;	// 0x2dadd
// declared property getter: - (BOOL)hasAltitude;	// 0x2dacd
// declared property setter: - (void)setMisc:(id)misc;	// 0x2daa9
// declared property getter: - (id)misc;	// 0x2da99
// declared property getter: - (int)locType;	// 0x2da89
// declared property setter: - (void)setHasLocType:(BOOL)type;	// 0x2da79
// declared property getter: - (BOOL)hasLocType;	// 0x2da69
// declared property getter: - (BOOL)obsolete;	// 0x2da59
// declared property setter: - (void)setHasObsolete:(BOOL)obsolete;	// 0x2da49
// declared property getter: - (BOOL)hasObsolete;	// 0x2da39
// declared property getter: - (long long)timestamp;	// 0x2da21
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x2da11
// declared property getter: - (BOOL)hasTimestamp;	// 0x2da01
// declared property setter: - (void)setFeatures:(id)features;	// 0x2d9dd
// declared property getter: - (id)features;	// 0x2d9cd
// declared property getter: - (int)confidence;	// 0x2d9bd
// declared property setter: - (void)setHasConfidence:(BOOL)confidence;	// 0x2d9ad
// declared property getter: - (BOOL)hasConfidence;	// 0x2d99d
// declared property getter: - (int)accuracy;	// 0x2d98d
// declared property setter: - (void)setHasAccuracy:(BOOL)accuracy;	// 0x2d97d
// declared property getter: - (BOOL)hasAccuracy;	// 0x2d96d
// declared property setter: - (void)setSource:(id)source;	// 0x2d949
// declared property getter: - (id)source;	// 0x2d939
// declared property setter: - (void)setLatLng:(id)lng;	// 0x2d915
// declared property getter: - (id)latLng;	// 0x2d905
- (void)writeTo:(id)to;	// 0x2d52d
- (BOOL)readFrom:(id)from;	// 0x2d17d
- (id)dictionaryRepresentation;	// 0x2cd5d
- (id)description;	// 0x2cced
// declared property getter: - (BOOL)hasLocationString;	// 0x2ccd5
// declared property setter: - (void)setHeading:(int)heading;	// 0x2ccb1
// declared property setter: - (void)setVelocity:(int)velocity;	// 0x2cc8d
// declared property setter: - (void)setVerticalAccuracy:(int)accuracy;	// 0x2cc69
// declared property setter: - (void)setAltitude:(int)altitude;	// 0x2cc45
// declared property getter: - (BOOL)hasMisc;	// 0x2cc2d
// declared property setter: - (void)setLocType:(int)type;	// 0x2cc09
// declared property setter: - (void)setObsolete:(BOOL)obsolete;	// 0x2cbe5
// declared property setter: - (void)setTimestamp:(long long)timestamp;	// 0x2cbb9
- (id)featureAtIndex:(unsigned)index;	// 0x2cb99
- (unsigned)featuresCount;	// 0x2cb79
- (void)addFeature:(id)feature;	// 0x2cb15
// declared property setter: - (void)setConfidence:(int)confidence;	// 0x2caf1
// declared property setter: - (void)setAccuracy:(int)accuracy;	// 0x2cacd
// declared property getter: - (BOOL)hasSource;	// 0x2cab5
// declared property getter: - (BOOL)hasLatLng;	// 0x2ca9d
- (void)dealloc;	// 0x2ca09
@end
