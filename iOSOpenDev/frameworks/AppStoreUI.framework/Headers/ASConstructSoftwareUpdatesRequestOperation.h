/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/XXUnknownSuperclass.h>

@class NSArray, SSURLRequestProperties;

@interface ASConstructSoftwareUpdatesRequestOperation : XXUnknownSuperclass {
	SSURLRequestProperties *_inputProperties;	// 60 = 0x3c
	SSURLRequestProperties *_outputProperties;	// 64 = 0x40
	NSArray *_softwareTypes;	// 68 = 0x44
}
@property(readonly, assign) SSURLRequestProperties *softwareUpdatesRequestProperties;	// G=0x5ead; 
- (id)_bodyDataWithContentEncoding:(id *)contentEncoding error:(id *)error;	// 0x629d
- (void)run;	// 0x5f0d
// declared property getter: - (id)softwareUpdatesRequestProperties;	// 0x5ead
- (void)dealloc;	// 0x5e39
- (id)initWithRequestProperties:(id)requestProperties softwareTypes:(id)types;	// 0x5dc5
@end
