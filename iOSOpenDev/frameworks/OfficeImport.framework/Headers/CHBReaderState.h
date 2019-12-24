/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CHBState.h>

@class EBReaderSheetState;

__attribute__((visibility("hidden")))
@interface CHBReaderState : CHBState {
@private
	EBReaderSheetState *mEBReaderSheetState;	// 32 = 0x20
	XlChartBinaryReader *mXlReader;	// 36 = 0x24
	int mAxisGroup;	// 40 = 0x28
	XlChartPlot *mXlCurrentPlot;	// 44 = 0x2c
	int mXlCurrentPlotIndex;	// 48 = 0x30
}
@property(assign) int axisGroup;	// G=0x1691c5; S=0x168c05; converted property
@property(assign) int xlCurrentPlotIndex;	// G=0x16c915; S=0x16c1d1; converted property
@property(assign) XlChartPlot *xlCurrentPlot;	// G=0x16c5a5; S=0x16c1e1; converted property
- (id)initWithEBReaderSheetState:(id)ebreaderSheetState;	// 0x161d29
- (id)ebReaderSheetState;	// 0x16251d
- (id)workbook;	// 0x16b96d
- (id)resources;	// 0x1671fd
- (XlChartBinaryReader *)xlReader;	// 0x16250d
// converted property getter: - (int)axisGroup;	// 0x1691c5
// converted property setter: - (void)setAxisGroup:(int)group;	// 0x168c05
- (void)readAndCacheXlChartDataSeries;	// 0x16468d
- (int)xlPlotCount;	// 0x16bd45
// converted property getter: - (int)xlCurrentPlotIndex;	// 0x16c915
// converted property setter: - (void)setXlCurrentPlotIndex:(int)index;	// 0x16c1d1
// converted property getter: - (XlChartPlot *)xlCurrentPlot;	// 0x16c5a5
// converted property setter: - (void)setXlCurrentPlot:(XlChartPlot *)plot;	// 0x16c1e1
- (const XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;	// 0x16d03d
- (const XlChartSeriesFormat *)defaultFormatForXlSeries:(const XlChartDataSeries *)xlSeries;	// 0x16d07d
@end
