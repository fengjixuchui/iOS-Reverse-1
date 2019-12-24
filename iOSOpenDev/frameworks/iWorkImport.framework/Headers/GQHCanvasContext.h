/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQHContext.h>
#import <iWorkImport/XXUnknownSuperclass.h>

@class GQDAffineGeometry, NSMutableString;

__attribute__((visibility("hidden")))
@interface GQHCanvasContext : XXUnknownSuperclass <GQHContext> {
@private
	GQDAffineGeometry *mGeometry;	// 4 = 0x4
	NSMutableString *mFunctionName;	// 8 = 0x8
	BOOL mHasFill;	// 12 = 0xc
	BOOL mHasStroke;	// 13 = 0xd
	CFStringRef mBezierStr;	// 16 = 0x10
}
- (void)dealloc;	// 0x51c0d
- (void)addScriptTagToHtml:(id)html state:(id)state;	// 0x51881
- (void)prepareContext:(id)context;	// 0x516e9
- (void)teardownContext:(id)context;	// 0x53c29
- (void)createShapeWithId:(CFStringRef)anId path:(id)path geometry:(id)geometry graphicStyle:(id)style isFloating:(BOOL)floating state:(id)state;	// 0x534c5
- (void)createMaskedImageWithId:(CFStringRef)anId path:(id)path geometry:(id)geometry cropGeometry:(id)geometry4 imageBinary:(id)binary graphicStyle:(id)style isFloating:(BOOL)floating state:(id)state;	// 0x52985
- (void)setContextOpacity:(float)opacity state:(id)state;	// 0x52929
- (void)setStrokeColor:(id)color width:(float)width state:(id)state;	// 0x52851
- (void)setFillColor:(id)color state:(id)state;	// 0x52789
- (void)setGradient:(id)gradient state:(id)state;	// 0x5246d
- (void)setImageFill:(CFURLRef)fill srcSize:(CGSize)size mode:(int)mode state:(id)state;	// 0x521dd
- (void)setBezierPath:(char *)path state:(id)state;	// 0x52141
- (void)translate:(CGSize)translate state:(id)state;	// 0x520d9
- (void)mapStyle:(id)style state:(id)state;	// 0x5193d
- (void)mapFill:(id)fill state:(id)state;	// 0x51f41
- (void)mapStroke:(id)stroke state:(id)state;	// 0x519cd
- (void)mapLineEndFillStyle:(id)style state:(id)state;	// 0x51a89
- (void)mapLineEndStrokeStyle:(id)style state:(id)state;	// 0x51abd
- (GQHPathEndPointInfo)endPointInfoForPath:(CGPathRef)path;	// 0x51eed
- (float)strokeWidthWithGraphicStyle:(id)graphicStyle;	// 0x51b19
- (id)strokeColorWithGraphicStyle:(id)graphicStyle;	// 0x51ba1
- (void)addPathForLineEndStyle:(int)lineEndStyle graphicStyle:(id)style atPoint:(CGPoint)point neighboringCP:(CGPoint)cp filledPath:(CGPathRef *)path strokedPath:(CGPathRef *)path6;	// 0x51ced
- (void)setCGPath:(CGPathRef)path state:(id)state;	// 0x51c59
@end
