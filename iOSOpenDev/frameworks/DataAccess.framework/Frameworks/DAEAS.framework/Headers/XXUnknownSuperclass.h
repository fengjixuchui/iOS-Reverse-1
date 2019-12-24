/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASParsingLeafNode.h>
#import <DAEAS/XXUnknownSuperclass.h>
#import <DAEAS/DAEAS-Structs.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXUnknownSuperclass__
#define __XXUnknownSuperclass__ 1
@interface XXUnknownSuperclass : NSObject
@end
#endif

@interface XXUnknownSuperclass (WBXMLAdditions)
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)yearMonthDay;	// 0x315d
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)activeSyncStringWithoutSeparators;	// 0x30d5
+ (id)dateWithActiveSyncString:(id)activeSyncString;	// 0x3085
+ (BOOL)notifyOfUnknownTokens;	// 0x3031
+ (BOOL)frontingBasicTypes;	// 0x2fdd
+ (BOOL)parsingWithSubItems;	// 0x2f89
+ (BOOL)parsingLeafNode;	// 0x2f35
+ (BOOL)acceptsTopLevelLeaves;	// 0x2ee1
- (id)activeSyncStringForYearMonthDay;	// 0x3245
- (id)activeSyncStringWithoutSeparators;	// 0x31f9
- (id)activeSyncString;	// 0x31ad
@end

@interface XXUnknownSuperclass (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)expectsContent;	// 0x373d
+ (BOOL)notifyOfUnknownTokens;	// 0x33e1
+ (BOOL)frontingBasicTypes;	// 0x338d
+ (BOOL)parsingWithSubItems;	// 0x3339
+ (BOOL)parsingLeafNode;	// 0x32e5
+ (BOOL)acceptsTopLevelLeaves;	// 0x3291
- (int)parsingState;	// 0x3739
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x3435
@end

@interface XXUnknownSuperclass (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)expectsContent;	// 0x3b9d
+ (BOOL)notifyOfUnknownTokens;	// 0x3891
+ (BOOL)frontingBasicTypes;	// 0x383d
+ (BOOL)parsingWithSubItems;	// 0x37e9
+ (BOOL)parsingLeafNode;	// 0x3795
+ (BOOL)acceptsTopLevelLeaves;	// 0x3741
- (id)initForLengthTokenOfLength:(unsigned)length;	// 0x3ba1
- (int)parsingState;	// 0x3b99
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x38e5
@end

@interface XXUnknownSuperclass (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)expectsContent;	// 0x3e85
+ (BOOL)notifyOfUnknownTokens;	// 0x3d91
+ (BOOL)frontingBasicTypes;	// 0x3d3d
+ (BOOL)parsingWithSubItems;	// 0x3ce9
+ (BOOL)parsingLeafNode;	// 0x3c95
+ (BOOL)acceptsTopLevelLeaves;	// 0x3c41
- (int)parsingState;	// 0x3e81
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x3de5
@end

@interface XXUnknownSuperclass (SyntacticSugarAdditions)
- (void)appendApplicationDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x29811
- (id)clientID;	// 0x297d1
- (id)serverID;	// 0x29795
@end

@interface XXUnknownSuperclass (ASContactAppendStringWithSeparator)
- (void)appendString:(id)string withSeparator:(id)separator;	// 0x299a5
@end

@interface XXUnknownSuperclass (ConformToMS)
- (id)stringFormattedForMSVersioning;	// 0x60011
@end

@interface XXUnknownSuperclass (DataAccessUtils)
+ (id)combinedDateWithYMDFrom:(id)from HMSFrom:(id)from2 componentDatesTimezone:(id)timezone;	// 0x61d45
- (void)getGregorianDate:(XXStruct_fhKmAA *)date;	// 0x61ebd
- (id)nearestMidnight;	// 0x61be9
- (id)gmtDateToDateInTimeZone:(id)timeZone;	// 0x61b29
- (id)tzDateToDateInGMT:(id)gmt;	// 0x61a51
@end

@interface XXUnknownSuperclass (DataAccessUtils)
- (id)nearestMidnight;	// 0x61fa9
- (id)gmtDateToDateInTimeZone:(id)timeZone;	// 0x61f79
- (id)tzDateToDateInGMT:(id)gmt;	// 0x61f49
@end

@interface XXUnknownSuperclass (GMT)
+ (id)gmt;	// 0x61fd5
@end

@interface XXUnknownSuperclass (LineEndingConversion)
- (id)stringByConvertingLineEndingsTo:(id)to;	// 0x62025
@end

@interface XXUnknownSuperclass (InviteBodyPrettification)
- (id)stringByTrimmingNotesJunk;	// 0x62069
@end

@interface XXUnknownSuperclass (LineEndingConversion)
- (void)convertLineEndingsTo:(id)to;	// 0x621f5
@end

@interface XXUnknownSuperclass (NumberLookup)
- (id)objectForInt:(int)int;	// 0x62291
@end

@interface XXUnknownSuperclass (NumberLookup)
- (void)setObject:(id)object forInt:(int)int;	// 0x622f9
@end
