/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSDate : ICSProperty {
}
@property(retain) NSString *tzid;	// G=0x32a5d; S=0x32a3d; 
- (id)description;	// 0x32b59
- (BOOL)hasFloatingTimeZone;	// 0x32aed
- (BOOL)hasTimeComponent;	// 0x32aa5
- (id)components;	// 0x32a7d
// declared property getter: - (id)tzid;	// 0x32a5d
// declared property setter: - (void)setTzid:(id)tzid;	// 0x32a3d
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x328b9
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second;	// 0x32881
- (id)initWithYear:(int)year month:(int)month day:(int)day;	// 0x327d1
- (id)initWithValue:(id)value;	// 0x32789
@end
