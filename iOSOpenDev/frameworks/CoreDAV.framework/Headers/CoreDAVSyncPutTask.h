/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVPutTask.h>

@class CoreDAVAction;

@interface CoreDAVSyncPutTask : CoreDAVPutTask {
	CoreDAVAction *_action;	// 152 = 0x98
}
@property(readonly, assign) CoreDAVAction *action;	// G=0x6aad; @synthesize=_action
// declared property getter: - (id)action;	// 0x6aad
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x6a1d
- (void)setAction:(id)action;	// 0x6a0d
@end
