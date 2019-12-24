/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAXClient.h>
#import <OfficeImport/XXUnknownSuperclass.h>


@protocol OAXClient
+ (BOOL)sourceDrawableIsTopLevel:(xmlNode *)level;
- (void)readClientDataFromNode:(xmlNode *)node toDrawable:(id)drawable state:(id)state;
- (void)readClientDataFromShapeNode:(xmlNode *)shapeNode toShape:(id)shape state:(id)state;
- (void)readClientDataFromPictureNode:(xmlNode *)pictureNode toImage:(id)image state:(id)state;
- (void)readClientDataFromGroupNode:(xmlNode *)groupNode toGroup:(id)group state:(id)state;
- (void)readClientDataFromGraphicDataNode:(xmlNode *)graphicDataNode toDiagram:(id)diagram state:(id)state;
- (void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode *)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;
- (id)readClientTextField:(xmlNode *)field paragraph:(id)paragraph state:(id)state;
- (void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;
- (id)readOle:(xmlNode *)ole state:(id)state;
@end

__attribute__((visibility("hidden")))
@interface OAXClient : XXUnknownSuperclass <OAXClient> {
}
+ (BOOL)sourceDrawableIsTopLevel:(xmlNode *)level;	// 0x2a9b09
- (void)readClientDataFromNode:(xmlNode *)node toDrawable:(id)drawable state:(id)state;	// 0x1bb1c9
- (void)readClientDataFromShapeNode:(xmlNode *)shapeNode toShape:(id)shape state:(id)state;	// 0x1e859d
- (void)readClientDataFromPictureNode:(xmlNode *)pictureNode toImage:(id)image state:(id)state;	// 0x195bf5
- (void)readClientDataFromGroupNode:(xmlNode *)groupNode toGroup:(id)group state:(id)state;	// 0x1bb1b9
- (void)readClientDataFromGraphicDataNode:(xmlNode *)graphicDataNode toDiagram:(id)diagram state:(id)state;	// 0x1ca5d9
- (void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode *)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;	// 0x1fb11d
- (id)readClientTextField:(xmlNode *)field paragraph:(id)paragraph state:(id)state;	// 0x2a9b01
- (void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;	// 0x1e87d1
- (id)readOle:(xmlNode *)ole state:(id)state;	// 0x2a9b05
@end
