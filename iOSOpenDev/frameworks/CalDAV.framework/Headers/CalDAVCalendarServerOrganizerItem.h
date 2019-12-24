/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/XXUnknownSuperclass.h>

@class CoreDAVLeafItem, CoreDAVHrefItem;

@interface CalDAVCalendarServerOrganizerItem : XXUnknownSuperclass {
	CoreDAVHrefItem *_href;	// 24 = 0x18
	CoreDAVLeafItem *_commonName;	// 28 = 0x1c
}
@property(retain) CoreDAVHrefItem *href;	// G=0x11739; S=0x11715; @synthesize=_href
@property(retain) CoreDAVLeafItem *commonName;	// G=0x11775; S=0x11751; @synthesize=_commonName
- (id)init;	// 0x114a5
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x116b5
- (void)dealloc;	// 0x117b9
- (id)description;	// 0x1178d
- (id)copyParseRules;	// 0x114e1
// declared property getter: - (id)commonName;	// 0x11775
// declared property setter: - (void)setCommonName:(id)name;	// 0x11751
// declared property getter: - (id)href;	// 0x11739
// declared property setter: - (void)setHref:(id)href;	// 0x11715
@end
