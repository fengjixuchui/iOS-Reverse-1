/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSComponent.h>

@class ICSDate, NSURL, ICSUserAddress, NSString, ICSDuration;

@interface ICSAvailability : ICSComponent {
}
@property(retain) NSURL *url;	// @dynamic
@property(retain) NSString *summary;	// @dynamic
@property(retain) ICSUserAddress *organizer;	// @dynamic
@property(assign) unsigned sequence;	// @dynamic
@property(retain) ICSDate *last_modified;	// @dynamic
@property(retain) ICSDate *dtend;	// @dynamic
@property(retain) ICSDate *dtstart;	// @dynamic
@property(retain) ICSDuration *duration;	// @dynamic
@property(retain) ICSDate *dtstamp;	// @dynamic
@property(retain) NSString *uid;	// @dynamic
@property(retain) ICSDate *created;	// @dynamic
+ (id)name;	// 0xc8c5
@end
