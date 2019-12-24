/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */




@protocol SCROBrailleDriverProtocol <NSObject>
- (unsigned)interfaceVersion;
- (int)loadDriverWithIOElement:(id)ioelement;
- (BOOL)unloadDriver;
- (BOOL)isDriverLoaded;
- (BOOL)isSleeping;
- (id)modelIdentifier;
- (BOOL)supportsBlinkingCursor;
- (BOOL)isInputEnabled;
- (BOOL)postsKeyboardEvents;
- (int)brailleInputMode;
- (id)getInputEvents;
- (int)mainSize;
- (int)statusSize;
- (BOOL)setMainCells:(const char *)cells length:(int)length;
- (BOOL)setStatusCells:(const char *)cells length:(int)length;
@end

