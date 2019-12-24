/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMProperty.h>


__attribute__((visibility("hidden")))
@interface EMEnumProperty : CMProperty {
@private
	int wdValue;	// 8 = 0x8
}
+ (id)mapHorizontalAlignmentValue:(int)value;	// 0x2f7011
+ (id)mapVerticalAlignmentValue:(int)value;	// 0x2f705d
+ (id)mapUnderlineValue:(int)value;	// 0xfbb25
- (id)initWithEnum:(int)anEnum;	// 0xfc141
- (int)value;	// 0xfd249
- (id)mapHorizontalAlignment;	// 0xfd369
- (id)mapVerticalAlignment;	// 0xfc245
- (id)mapUnderline;	// 0x2f7099
- (id)cssStringForName:(id)name;	// 0xfc1c1
@end
