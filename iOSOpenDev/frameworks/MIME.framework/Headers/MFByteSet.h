/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <MIME/MIME-Structs.h>
#import <MIME/XXUnknownSuperclass.h>
#import <MIME/NSMutableCopying.h>
#import <MIME/NSCopying.h>


@interface MFByteSet : XXUnknownSuperclass <NSCopying, NSMutableCopying> {
	BOOL mySet[32];	// 4 = 0x4
}
+ (id)asciiWhitespaceSet;	// 0x4be5
+ (id)ASCIIByteSet;	// 0x4b99
+ (id)nonASCIIByteSet;	// 0x4b4d
+ (id)suspiciousCodepage1252ByteSet;	// 0x4b01
- (BOOL)byteIsMember:(BOOL)member;	// 0x48ed
- (id)invertedSet;	// 0x4935
- (id)initWithRange:(NSRange)range;	// 0x4971
- (id)initWithCString:(const char *)cstring;	// 0x4c79
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x4a21
- (id)_initWithSet:(const char *)set;	// 0x4a7d
- (id)copyWithZone:(NSZone *)zone;	// 0x4abd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x4c35
@end
