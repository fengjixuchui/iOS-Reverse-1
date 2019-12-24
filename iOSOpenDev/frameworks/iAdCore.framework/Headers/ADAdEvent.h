/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/XXUnknownSuperclass.h>

@class NSString;

@interface ADAdEvent : XXUnknownSuperclass {
	BOOL _hasTimestampEvent;	// 4 = 0x4
	unsigned long long _timestampEvent;	// 8 = 0x8
	NSString *_context;	// 16 = 0x10
	BOOL _hasDeviceOrientation;	// 20 = 0x14
	int _deviceOrientation;	// 24 = 0x18
	BOOL _hasConnectionType;	// 28 = 0x1c
	int _connectionType;	// 32 = 0x20
}
@property(assign, nonatomic) int connectionType;	// G=0x14965; S=0x14499; @synthesize=_connectionType
@property(assign, nonatomic) BOOL hasConnectionType;	// G=0x14945; S=0x14955; @synthesize=_hasConnectionType
@property(assign, nonatomic) int deviceOrientation;	// G=0x14935; S=0x14475; @synthesize=_deviceOrientation
@property(assign, nonatomic) BOOL hasDeviceOrientation;	// G=0x14915; S=0x14925; @synthesize=_hasDeviceOrientation
@property(retain, nonatomic) NSString *context;	// G=0x148e1; S=0x148f1; @synthesize=_context
@property(readonly, assign, nonatomic) BOOL hasContext;	// G=0x1445d; 
@property(assign, nonatomic) unsigned long long timestampEvent;	// G=0x148c9; S=0x14431; @synthesize=_timestampEvent
@property(assign, nonatomic) BOOL hasTimestampEvent;	// G=0x148a9; S=0x148b9; @synthesize=_hasTimestampEvent
// declared property getter: - (int)connectionType;	// 0x14965
// declared property setter: - (void)setHasConnectionType:(BOOL)type;	// 0x14955
// declared property getter: - (BOOL)hasConnectionType;	// 0x14945
// declared property getter: - (int)deviceOrientation;	// 0x14935
// declared property setter: - (void)setHasDeviceOrientation:(BOOL)orientation;	// 0x14925
// declared property getter: - (BOOL)hasDeviceOrientation;	// 0x14915
// declared property setter: - (void)setContext:(id)context;	// 0x148f1
// declared property getter: - (id)context;	// 0x148e1
// declared property getter: - (unsigned long long)timestampEvent;	// 0x148c9
// declared property setter: - (void)setHasTimestampEvent:(BOOL)event;	// 0x148b9
// declared property getter: - (BOOL)hasTimestampEvent;	// 0x148a9
- (void)writeTo:(id)to;	// 0x147d9
- (BOOL)readFrom:(id)from;	// 0x1468d
- (id)dictionaryRepresentation;	// 0x1452d
- (id)description;	// 0x144bd
// declared property setter: - (void)setConnectionType:(int)type;	// 0x14499
// declared property setter: - (void)setDeviceOrientation:(int)orientation;	// 0x14475
// declared property getter: - (BOOL)hasContext;	// 0x1445d
// declared property setter: - (void)setTimestampEvent:(unsigned long long)event;	// 0x14431
- (void)dealloc;	// 0x143ed
@end
