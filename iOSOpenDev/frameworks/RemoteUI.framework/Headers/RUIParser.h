/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <RemoteUI/XXUnknownSuperclass.h>
#import <RemoteUI/NSXMLParserDelegate.h>

@class RUIObjectModel, NSXMLParser, NSMutableArray;

@interface RUIParser : XXUnknownSuperclass <NSXMLParserDelegate> {
	NSXMLParser *_parser;	// 4 = 0x4
	RUIObjectModel *_uiObjectModel;	// 8 = 0x8
	NSMutableArray *_pages;	// 12 = 0xc
	int _actionSignal;	// 16 = 0x10
	int _parserState;	// 20 = 0x14
}
@property(readonly, retain) RUIObjectModel *uiObjectModel;	// G=0x9405; converted property
@property(readonly, assign) int actionSignal;	// G=0x9415; converted property
- (id)initWithXML:(id)xml;	// 0x9425
- (void)dealloc;	// 0xa609
// converted property getter: - (id)uiObjectModel;	// 0x9405
// converted property getter: - (int)actionSignal;	// 0x9415
- (id)_createNewPage;	// 0xa57d
- (void)_newRowWithAttributeDict:(id)attributeDict;	// 0xa485
- (id)_lastPageCreateIfNeeded;	// 0xa445
- (id)_lastRow;	// 0xa3e1
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x97e5
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x96ad
- (void)parser:(id)parser foundCDATA:(id)cdata;	// 0x9579
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;	// 0x9551
- (void)parser:(id)parser validationErrorOccurred:(id)occurred;	// 0x9529
@end