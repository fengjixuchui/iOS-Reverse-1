/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVResponseBodyParser.h>
#import <CoreDAV/XXUnknownSuperclass.h>

@class NSError;

@interface CoreDAVNullParser : XXUnknownSuperclass <CoreDAVResponseBodyParser> {
	NSError *_parserError;	// 4 = 0x4
}
@property(readonly, assign) NSError *parserError;	// G=0x26701; 
- (BOOL)processData:(id)data forTask:(id)task;	// 0x26739
// declared property getter: - (id)parserError;	// 0x26701
- (void)dealloc;	// 0x266b5
@end
