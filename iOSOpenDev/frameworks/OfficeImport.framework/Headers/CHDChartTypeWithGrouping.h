/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDChartType.h>


__attribute__((visibility("hidden")))
@interface CHDChartTypeWithGrouping : CHDChartType {
@private
	int mGrouping;	// 24 = 0x18
}
@property(assign) int grouping;	// G=0x179fe1; S=0x1e2629; converted property
- (id)initWithChart:(id)chart;	// 0x171999
// converted property getter: - (int)grouping;	// 0x179fe1
// converted property setter: - (void)setGrouping:(int)grouping;	// 0x1e2629
- (bool)isGroupingStacked;	// 0x171bd1
- (id)chdGroupingString;	// 0x264efd
@end
