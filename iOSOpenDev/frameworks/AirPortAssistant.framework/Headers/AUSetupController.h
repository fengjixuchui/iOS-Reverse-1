/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AUSetupController.h>
#import <AirPortAssistant/SetupUIDelegateResult.h>
#import <AirPortAssistant/AutoGuessSetup.h>
#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/BaseStationSetup.h>
#import <AirPortAssistant/AssistantCallbackController.h>

@class NSString, NSDictionary, NSMutableSet;
@protocol SetupConnectionDelegate;

__attribute__((visibility("hidden")))
@interface AUSetupController : AssistantCallbackController <SetupUIDelegateResult, AutoGuessSetup, BaseStationSetup> {
	id _context;	// 16 = 0x10
	BOOL _autoJoinState;	// 20 = 0x14
	BSConfigurationContextRef _configContext;	// 24 = 0x18
	NSMutableSet *_setupDelegates;	// 28 = 0x1c
	id _connectionDelegate;	// 32 = 0x20
	NSString *_autoGuessSetupRecommendation;	// 36 = 0x24
	NSDictionary *_lastInstrumentation;	// 40 = 0x28
}
@property(retain) NSDictionary *restoreRecommendation;
@property(retain, nonatomic) NSDictionary *bonjourRecord;	// G=0x31a79; S=0x31aa9; 
@property(retain, nonatomic) NSDictionary *lastInstrumentation;	// G=0x326dd; S=0x326ed; @synthesize=_lastInstrumentation
@property(retain, nonatomic) NSString *autoGuessSetupRecommendation;	// G=0x326a9; S=0x326b9; @synthesize=_autoGuessSetupRecommendation
@property(assign, nonatomic) id context;	// G=0x32659; S=0x32669; @synthesize=_context
@property(assign, nonatomic) id<SetupConnectionDelegate> connectionDelegate;	// G=0x32689; S=0x32699; @synthesize=_connectionDelegate
@property(readonly, assign, nonatomic) NSMutableSet *setupDelegates;	// G=0x32679; @synthesize=_setupDelegates
+ (id)setupController;	// 0x31171
// declared property setter: - (void)setLastInstrumentation:(id)instrumentation;	// 0x326ed
// declared property getter: - (id)lastInstrumentation;	// 0x326dd
// declared property setter: - (void)setAutoGuessSetupRecommendation:(id)recommendation;	// 0x326b9
// declared property getter: - (id)autoGuessSetupRecommendation;	// 0x326a9
// declared property setter: - (void)setConnectionDelegate:(id)delegate;	// 0x32699
// declared property getter: - (id)connectionDelegate;	// 0x32689
// declared property getter: - (id)setupDelegates;	// 0x32679
// declared property setter: - (void)setContext:(id)context;	// 0x32669
// declared property getter: - (id)context;	// 0x32659
- (long)setupWithTargetBaseStation:(id)targetBaseStation andSettings:(id)settings;	// 0x32625
- (long)setupFromAutoguessRecommendation:(id)autoguessRecommendation withOptions:(id)options;	// 0x31bad
- (void)setupConnectionStatusUpdatedResult:(long)result withOptions:(id)options;	// 0x31b45
- (BaseStation *)bsRef;	// 0x31b1d
- (BOOL)dirty;	// 0x31ac9
// declared property setter: - (void)setBonjourRecord:(id)record;	// 0x31aa9
// declared property getter: - (id)bonjourRecord;	// 0x31a79
- (BOOL)isMonitoring;	// 0x31a3d
- (long)setMonitorForChanges:(BOOL)changes;	// 0x31a09
- (long)taskArchiveDiskAsync:(id)async;	// 0x319d9
- (long)taskEraseDiskAsync:(id)async;	// 0x319a9
- (long)taskUploadFirmwareAsync:(id)async;	// 0x31979
- (long)taskRestoreDefaultsAsync:(BOOL)async;	// 0x31951
- (long)taskRestartAsync;	// 0x3192d
- (int)taskState;	// 0x318fd
- (long)rpcWPSAllowClientAsync:(id)async;	// 0x318d5
- (long)rpcWPSStopAsync;	// 0x318b1
- (long)rpcWPSStartAsync:(BOOL)async dayPass:(BOOL)pass;	// 0x31885
- (long)rpcRenewDHCPLeaseAsync;	// 0x31861
- (long)rpcDisconnectAllDiskUsersWithMessageAsync:(id)messageAsync;	// 0x31839
- (long)rpcRefreshBSSettingAsync:(int)async;	// 0x31811
- (long)rpcSystemInterfacesAsync;	// 0x317ed
- (long)removeKeychainBasePassword;	// 0x31795
- (long)updateKeychainWithPasswords;	// 0x31651
- (long)updateSettingsAsync;	// 0x315cd
- (long)readPropertyListFromBaseAsync:(id)baseAsync;	// 0x315a5
- (long)readAllPropertiesFromBaseAsync;	// 0x3158d
- (id)validateAndGetErrors;	// 0x31535
- (long)unignoredProblemCount;	// 0x313f1
- (int)stateForProblem:(unsigned)problem;	// 0x3137d
- (BOOL)hasACPFeature:(unsigned)feature;	// 0x3132d
- (long)getValue:(id *)value forSettingPath:(id)settingPath;	// 0x312d1
- (long)setValue:(id)value forSettingPath:(id)settingPath;	// 0x31275
- (long)getValue:(id *)value forBSSetting:(int)bssetting;	// 0x31229
- (long)setValue:(id)value forBSSetting:(int)bssetting;	// 0x311dd
- (long)cancelSetup;	// 0x311ad
- (long)subclassAssistantCallback:(AssistantCallbackContext *)callback;	// 0x30fb1
- (void)dealloc;	// 0x30f55
- (id)init;	// 0x3085d
@end

@interface AUSetupController (private)
- (id)targetBaseInfoDict;	// 0x327d1
- (void)handleSetupComplete;	// 0x32711
@end
