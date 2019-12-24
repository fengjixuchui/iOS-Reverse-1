/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRun.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDBookmark : WDRun {
@private
	NSString *mName;	// 8 = 0x8
	int mBookmarkType;	// 12 = 0xc
}
@property(retain) id name;	// G=0x1514fd; S=0x192dad; converted property
@property(assign) int bookmarkType;	// G=0x1514ed; S=0x192d9d; converted property
- (id)initWithParagraph:(id)paragraph name:(id)name type:(int)type;	// 0x151099
// converted property getter: - (id)name;	// 0x1514fd
// converted property setter: - (void)setName:(id)name;	// 0x192dad
- (void)dealloc;	// 0xa2e25
- (int)runType;	// 0x91b5d
// converted property getter: - (int)bookmarkType;	// 0x1514ed
// converted property setter: - (void)setBookmarkType:(int)type;	// 0x192d9d
@end
