/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EXFont.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface EXFont : XXUnknownSuperclass {
}
+ (id)edFontFromXmlFontElement:(xmlNode *)xmlFontElement inConditionalFormat:(bool)conditionalFormat state:(id)state;	// 0x1a24e5
@end

@interface EXFont (Private)
+ (int)edScriptFromXmlVertAlignElement:(xmlNode *)xmlVertAlignElement;	// 0x1a2e65
+ (int)edUnderlineFromXmlUnderlineElement:(xmlNode *)xmlUnderlineElement;	// 0x1a2d91
@end
