/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDBlock.h>
#import <OfficeImport/WDParagraph.h>

@class NSMutableArray, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDParagraph : WDBlock {
@private
	WDParagraphProperties *mProperties;	// 8 = 0x8
	NSMutableArray *mRuns;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x132335
- (id)initWithText:(id)text string:(id)string;	// 0x28df81
- (void)dealloc;	// 0xa2c01
- (id)properties;	// 0x92661
- (void)clearProperties;	// 0x28df55
- (id)runs;	// 0x28dc3d
- (int)runCount;	// 0x91b3d
- (id)runAt:(int)at;	// 0x91811
- (void)addRun:(id)run;	// 0x13cbc5
- (void)insertRun:(id)run atIndex:(unsigned)index;	// 0x28df29
- (void)removeRun:(id)run;	// 0x28df05
- (void)clearRuns;	// 0x28ded9
- (id)addCharacterRun;	// 0x133ad5
- (id)addAnnotation:(int)annotation;	// 0x28de69
- (id)addFootnote;	// 0x151789
- (id)addEndnote;	// 0x1d57d9
- (id)addFieldMarker;	// 0x13b4d5
- (id)addFieldMarker:(int)marker;	// 0x1981f1
- (id)addSymbol;	// 0x1b85f5
- (id)addSpecialCharacter;	// 0x142181
- (id)addBookmark;	// 0x192bed
- (id)addBookmark:(id)bookmark type:(int)type;	// 0x151021
- (id)addDateTime:(id)time;	// 0x28ddf9
- (void)removeLastCharacter:(unsigned short)character;	// 0x134491
- (id)runIterator;	// 0x28dda5
- (id)newRunIterator;	// 0x28dd61
- (int)blockType;	// 0x92581
- (BOOL)isEmpty;	// 0x28dcf1
- (int)characterCount;	// 0x28dc4d
@end

@interface WDParagraph (WMTextFrame)
- (BOOL)isTextFrame;	// 0x92585
- (BOOL)isContinuationOf:(id)of;	// 0x1436bd
@end
