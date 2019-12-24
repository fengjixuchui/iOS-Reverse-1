/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVErrorItem, CoreDAVLeafItem;

@interface CoreDAVPropStatItem : CoreDAVItem {
	CoreDAVLeafItem *_status;	// 24 = 0x18
	CoreDAVItem *_prop;	// 28 = 0x1c
	CoreDAVErrorItem *_errorItem;	// 32 = 0x20
	CoreDAVLeafItem *_responseDescription;	// 36 = 0x24
}
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x299d1; S=0x299e5; @synthesize=_responseDescription
@property(retain, nonatomic) CoreDAVErrorItem *errorItem;	// G=0x299c1; S=0x298e5; @synthesize=_errorItem
@property(retain) CoreDAVItem *prop;	// G=0x29989; S=0x2999d; @synthesize=_prop
@property(retain) CoreDAVLeafItem *status;	// G=0x29951; S=0x29965; @synthesize=_status
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x299e5
// declared property getter: - (id)responseDescription;	// 0x299d1
// declared property getter: - (id)errorItem;	// 0x299c1
// declared property setter: - (void)setProp:(id)prop;	// 0x2999d
// declared property getter: - (id)prop;	// 0x29989
// declared property setter: - (void)setStatus:(id)status;	// 0x29965
// declared property getter: - (id)status;	// 0x29951
// declared property setter: - (void)setErrorItem:(id)item;	// 0x298e5
- (id)copyParseRules;	// 0x29609
- (id)description;	// 0x294e5
- (void)dealloc;	// 0x2945d
- (id)init;	// 0x29431
@end
