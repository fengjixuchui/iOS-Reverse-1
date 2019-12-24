/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <AppSupport/XXUnknownSuperclass.h>


@interface CPLRUDictionaryNode : XXUnknownSuperclass {
	id _key;	// 4 = 0x4
	id _object;	// 8 = 0x8
	CPLRUDictionaryNode *next;	// 12 = 0xc
	CPLRUDictionaryNode *prev;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) id key;	// G=0x189bd; @synthesize=_key
@property(retain, nonatomic) id object;	// G=0x189ad; S=0x18ae5; @synthesize=_object
- (id)initWithKey:(id)key object:(id)object;	// 0x18a79
- (void)dealloc;	// 0x18b09
// declared property getter: - (id)object;	// 0x189ad
// declared property setter: - (void)setObject:(id)object;	// 0x18ae5
// declared property getter: - (id)key;	// 0x189bd
@end
