/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/NSCoding.h>
#import <iCalendar/XXUnknownSuperclass.h>
#import <iCalendar/ICSByDayValue.h>

@class NSNumber;

@interface ICSByDayValue : XXUnknownSuperclass <NSCoding> {
	NSNumber *_number;	// 4 = 0x4
	int _weekday;	// 8 = 0x8
}
@property(retain) NSNumber *number;	// G=0x32f59; S=0x32f69; 
@property(assign) int weekday;	// G=0x330c5; S=0x330d5; @synthesize=_weekday
// declared property setter: - (void)setWeekday:(int)weekday;	// 0x330d5
// declared property getter: - (int)weekday;	// 0x330c5
- (id)initWithCoder:(id)coder;	// 0x33031
- (void)encodeWithCoder:(id)coder;	// 0x32fd1
// declared property setter: - (void)setNumber:(id)number;	// 0x32f69
// declared property getter: - (id)number;	// 0x32f59
- (id)initWithWeekday:(int)weekday number:(id)number;	// 0x32ef9
- (id)initWithWeekday:(int)weekday;	// 0x32ee5
@end

@interface ICSByDayValue (ICSWriter)
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0xd699
@end

@interface ICSByDayValue (iCalendarImport)
+ (id)byDayValueFromICSString:(id)icsstring;	// 0x1a7d9
+ (int)weekdayFromICSString:(id)icsstring;	// 0x1a6fd
@end
