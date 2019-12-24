/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/DATask.h>
#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/NSURLConnectionDelegate.h>
#import <DAEAS/XXUnknownSuperclass.h>

@class ASTaskManager, NSDate, NSHTTPURLResponse, NSURLConnection, NSURLRequest, NSTimer, DATaskManager, ASItem, NSMutableSet, ASParseContext, NSString, NSError;

@interface ASTask : XXUnknownSuperclass <DATask, NSURLConnectionDelegate> {
	BOOL _haveSwitchedCodePage;	// 4 = 0x4
	BOOL _haveParsedCommand;	// 5 = 0x5
	ASItem *_currentlyParsingItem;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	NSHTTPURLResponse *_response;	// 16 = 0x10
	ASParseContext *_parseContext;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
@private
	NSURLRequest *_request;	// 28 = 0x1c
	NSMutableSet *_attemptedIdentities;	// 32 = 0x20
	BOOL _isFakingIt;	// 36 = 0x24
	BOOL _didSendRequest;	// 37 = 0x25
	BOOL _didFailWithError;	// 38 = 0x26
	BOOL _didCancel;	// 39 = 0x27
	BOOL _didReceiveResponse;	// 40 = 0x28
	BOOL _didReceiveData;	// 41 = 0x29
	BOOL _didFinishLoading;	// 42 = 0x2a
	BOOL _didReset;	// 43 = 0x2b
	BOOL _finished;	// 44 = 0x2c
	BOOL _inDelegateCallout;	// 45 = 0x2d
	BOOL _finishedByTimeoutEnforcer;	// 46 = 0x2e
	int _interfaceBinding;	// 48 = 0x30
	void *_context;	// 52 = 0x34
	BOOL _isExclusive;	// 56 = 0x38
	BOOL _receivedBadPasswordResponse;	// 57 = 0x39
	BOOL _askedToCancelWhileModal;	// 58 = 0x3a
	BOOL _haveCheckedForTopLevelError;	// 59 = 0x3b
	BOOL _handledTopLevelError;	// 60 = 0x3c
	int _taskID;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	int _modalReason;	// 72 = 0x48
	int _modalPushCount;	// 76 = 0x4c
	NSString *_lastKnownPolicyKey;	// 80 = 0x50
	NSError *_passwordNotificationError;	// 84 = 0x54
	NSString *_lastKnownPassword;	// 88 = 0x58
	NSDate *_dateConnectionWentOut;	// 92 = 0x5c
	NSTimer *_timeoutEnforcer;	// 96 = 0x60
@protected
	BOOL _retry;	// 100 = 0x64
}
@property(retain, nonatomic) NSTimer *timeoutEnforcer;	// G=0x60001; S=0x5fe91; @synthesize=_timeoutEnforcer
@property(retain, nonatomic) NSString *lastKnownPassword;	// G=0x5ffcd; S=0x5ffdd; @synthesize=_lastKnownPassword
@property(assign, nonatomic) BOOL askedToCancelWhileModal;	// G=0x5ffad; S=0x5ffbd; @synthesize=_askedToCancelWhileModal
@property(retain, nonatomic) ASItem *currentlyParsingItem;	// G=0x5ff79; S=0x5ff89; @synthesize=_currentlyParsingItem
@property(assign, nonatomic) BOOL isExclusive;	// G=0x5ff59; S=0x5ff69; @synthesize=_isExclusive
@property(assign, nonatomic) int interfaceBinding;	// G=0x5ff39; S=0x5ff49; @synthesize=_interfaceBinding
@property(assign, nonatomic) void *context;	// G=0x5ff19; S=0x5ff29; @synthesize=_context
@property(assign, nonatomic) id delegate;	// G=0x5fef9; S=0x5ff09; @synthesize=_delegate
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x5fee9; S=0x5fdc1; @synthesize=_taskManager
@property(readonly, assign) int taskID;	// G=0x5a4bd; converted property
+ (void)_restoreDefaultTaskTimeout;	// 0x5a505
+ (void)_setDefaultTaskTimeout:(double)timeout;	// 0x5a4f1
// declared property getter: - (id)timeoutEnforcer;	// 0x60001
// declared property setter: - (void)setLastKnownPassword:(id)password;	// 0x5ffdd
// declared property getter: - (id)lastKnownPassword;	// 0x5ffcd
// declared property setter: - (void)setAskedToCancelWhileModal:(BOOL)cancelWhileModal;	// 0x5ffbd
// declared property getter: - (BOOL)askedToCancelWhileModal;	// 0x5ffad
// declared property setter: - (void)setCurrentlyParsingItem:(id)item;	// 0x5ff89
// declared property getter: - (id)currentlyParsingItem;	// 0x5ff79
// declared property setter: - (void)setIsExclusive:(BOOL)exclusive;	// 0x5ff69
// declared property getter: - (BOOL)isExclusive;	// 0x5ff59
// declared property setter: - (void)setInterfaceBinding:(int)binding;	// 0x5ff49
// declared property getter: - (int)interfaceBinding;	// 0x5ff39
// declared property setter: - (void)setContext:(void *)context;	// 0x5ff29
// declared property getter: - (void *)context;	// 0x5ff19
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x5ff09
// declared property getter: - (id)delegate;	// 0x5fef9
// declared property getter: - (id)taskManager;	// 0x5fee9
// declared property setter: - (void)setTimeoutEnforcer:(id)enforcer;	// 0x5fe91
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x5fdc1
- (void)reportStatusWithError:(id)error;	// 0x5fd35
- (int)numDownloadedElements;	// 0x5fd31
- (BOOL)shouldReportTimeInNetwork;	// 0x5fd2d
- (void)reset;	// 0x5fbfd
- (void)_initFakeParseContext;	// 0x5fb7d
- (void)handleTopLevelErrorStatus:(id)status;	// 0x5f92d
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x5f431
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x5f0f9
- (void)connectionDidFinishLoading:(id)connection;	// 0x5ed41
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x5eb59
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x5eabd
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x5e469
- (id)connection:(id)connection needNewBodyStream:(id)stream;	// 0x5e40d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x5da41
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x5d9a5
- (BOOL)shouldHandlePasswordErrors;	// 0x5d9a1
- (BOOL)_handleRedirect:(id)redirect;	// 0x5d699
- (BOOL)_handleCertificateError:(id)error;	// 0x5d5dd
- (void)_handleBadPasswordResponse;	// 0x5d3dd
- (id)_applyAuthenticationChain:(CFArrayRef)chain toRequest:(id)request;	// 0x5d291
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x5d141
- (void)finishWithError:(id)error;	// 0x5ced5
- (BOOL)isInCallOutToDelegate;	// 0x5cec5
- (void)didCallOutToDelegate;	// 0x5ce4d
- (void)willCallOutToDelegate;	// 0x5cc9d
- (BOOL)attemptRetryWithStatus:(int)status error:(id)error;	// 0x5cbd9
- (void)_continuePerformTask;	// 0x5c1e9
- (void)taskManagerDidFailToUpdatePolicyKey;	// 0x5c1a9
- (void)taskManagerDidUpdatePolicyKey;	// 0x5c119
- (void)taskManagerDidFindEASVersion;	// 0x5c089
- (void)startModal;	// 0x5be65
- (void)_popModal;	// 0x5be21
- (void)_pushModalForReason:(int)reason;	// 0x5bdbd
- (void)performTask;	// 0x5bce5
- (void)_failImmediately;	// 0x5bc39
- (id)_createBodyData;	// 0x5bc11
- (void)tearDownResources;	// 0x5bb39
- (void)loadRequest:(id)request;	// 0x5af99
- (void)_timeoutEnforcerFired:(id)fired;	// 0x5aec5
- (int)connectionActionForResponse:(id)response;	// 0x5add9
- (BOOL)shouldHoldPowerAssertion;	// 0x5add5
- (BOOL)requiresEASVersionInformaton;	// 0x5add1
- (BOOL)shouldLogIncomingData;	// 0x5adcd
- (void)didProcessContext:(id)context;	// 0x5adb9
- (void)willProcessContext;	// 0x5adb5
- (id)contentType;	// 0x5ada9
- (int)taskStatusForError:(id)error;	// 0x5ac35
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x5ac31
- (double)percentComplete;	// 0x5ac25
- (BOOL)checkForErrorInContext:(id)context;	// 0x5a765
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x5a6e1
- (BOOL)processContext:(id)context;	// 0x5a6dd
- (id)requestBody;	// 0x5a695
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x5a691
- (id)parameterData;	// 0x5a68d
- (int)commandCode;	// 0x5a641
- (id)command;	// 0x5a625
- (BOOL)expectsWBXML;	// 0x5a621
- (BOOL)_isWBXML;	// 0x5a5f1
- (id)_policyKey;	// 0x5a5d1
- (id)_easVersion;	// 0x5a5b1
- (id)_url;	// 0x5a575
- (double)timeoutInterval;	// 0x5a51d
- (id)_HTTPMethodForRequest:(id)request;	// 0x5a4e1
- (BOOL)_shouldRedirectToHTTPForRequest:(id)request;	// 0x5a4dd
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x5a4d9
- (id)httpMethod;	// 0x5a4cd
// converted property getter: - (int)taskID;	// 0x5a4bd
- (id)responseContentType;	// 0x5a47d
- (id)description;	// 0x5a2cd
- (void)dealloc;	// 0x5a0a1
- (id)init;	// 0x59f5d
@end
