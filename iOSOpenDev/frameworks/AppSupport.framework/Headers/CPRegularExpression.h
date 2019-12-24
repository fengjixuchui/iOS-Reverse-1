/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <AppSupport/AppSupport-Structs.h>
#import <AppSupport/XXUnknownSuperclass.h>
#import <AppSupport/NSCoding.h>
#import <AppSupport/NSCopying.h>

@class NSString;

@interface CPRegularExpression : XXUnknownSuperclass <NSCopying, NSCoding> {
@private
	NSString *_expressionString;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(readonly, retain) NSString *expressionString;	// G=0xca21; converted property
+ (void)initialize;	// 0xcbcd
+ (id)regularExpressionWithString:(id)string;	// 0xcb99
+ (const char *)getBytesForString:(id)string lossByte:(unsigned char)byte;	// 0xcb51
- (void)dealloc;	// 0xcff5
- (id)initWithExpressionString:(id)expressionString;	// 0xca31
- (id)initWithExpressionString:(id)expressionString options:(unsigned)options;	// 0xce91
- (unsigned)numberOfSubexpressions;	// 0xca0d
- (id)init;	// 0xca49
- (id)copyWithZone:(NSZone *)zone;	// 0xca65
- (BOOL)isEqual:(id)equal;	// 0xcad1
- (unsigned)hash;	// 0xce6d
// converted property getter: - (id)expressionString;	// 0xca21
- (NSRange)matchedRangeForCString:(const char *)cstring range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0xcd0d
- (NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0xcc95
- (id)initWithCoder:(id)coder;	// 0xcc2d
- (void)encodeWithCoder:(id)coder;	// 0xcc05
@end
