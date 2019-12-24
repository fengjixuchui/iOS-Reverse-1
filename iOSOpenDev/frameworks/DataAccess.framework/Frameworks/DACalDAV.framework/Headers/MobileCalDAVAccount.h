/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/XXUnknownSuperclass.h>
#import <DACalDAV/DACalDAV-Structs.h>

@class NSSet, NSURL, NSDictionary, DACoreDAVTaskManager, NSMutableDictionary, NSTimeZone, NSMutableSet, CalDAVPrincipalSearchPropertySet, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, CalDAVServerVersion, NSDate, MobileCalDAVPrincipal, MobileCalDAVAccountRefreshActor, CalDAVRefreshContext, NSString;

@interface MobileCalDAVAccount : XXUnknownSuperclass {
	DACoreDAVTaskManager *_taskManager;	// 64 = 0x40
	NSMutableDictionary *_principals;	// 68 = 0x44
	MobileCalDAVPrincipal *_mainPrincipal;	// 72 = 0x48
	int _preferredEventDaysToSync;	// 76 = 0x4c
	int _preferredToDoDaysToSync;	// 80 = 0x50
	NSMutableSet *_calendars;	// 84 = 0x54
	BOOL _subscribedCalendarsChanged;	// 88 = 0x58
	NSString *_collectionSetName;	// 92 = 0x5c
	CalDAVPrincipalSearchPropertySet *_searchPropertySet;	// 96 = 0x60
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 100 = 0x64
	MobileCalDAVAccountRefreshActor *_actor;	// 104 = 0x68
	BOOL _isRefreshing;	// 108 = 0x6c
	BOOL _isSpinning;	// 109 = 0x6d
	BOOL _needsAccountPropertyRefresh;	// 110 = 0x6e
	CalDAVRefreshContext *_refreshContext;	// 112 = 0x70
	NSMutableSet *_searchTaskSet;	// 116 = 0x74
	DACoreDAVLogger *_curLogger;	// 120 = 0x78
	CalDAVServerVersion *_serverVersion;	// 124 = 0x7c
	NSMutableDictionary *_itemIDsToMoveActions;	// 128 = 0x80
	NSMutableSet *_movedItemURLStrings;	// 132 = 0x84
@private
	BOOL _searchQueriesShouldCancel;	// 136 = 0x88
}
@property(assign) BOOL searchQueriesShouldCancel;	// G=0x74b1; S=0x74c1; @synthesize=_searchQueriesShouldCancel
@property(retain) CalDAVRefreshContext *refreshContext;	// G=0x73b1; S=0x73c5; @synthesize=_refreshContext
@property(readonly, assign) BOOL supportsEvents;	// G=0x4529; 
@property(readonly, assign) BOOL supportsReminders;	// G=0x44ad; 
@property(readonly, assign) BOOL shouldFilterSyncTimeRangeForInbox;	// G=0x4441; 
@property(readonly, assign) BOOL shouldFilterTodoSyncTimeRange;	// G=0x43f5; 
@property(readonly, assign) BOOL shouldFilterEventSyncTimeRange;	// G=0x43a9; 
@property(readonly, assign) NSDate *ocurrenceCacheEndDate;	// G=0x4371; 
@property(readonly, assign) NSDate *ocurrenceCacheStartDate;	// G=0x4339; 
@property(readonly, assign) NSTimeZone *viewedTimeZone;	// G=0x431d; 
@property(assign) int preferredToDoDaysToSync;	// G=0x7491; S=0x74a1; @synthesize=_preferredToDoDaysToSync
@property(assign) int preferredEventDaysToSync;	// G=0x7471; S=0x7481; @synthesize=_preferredEventDaysToSync
@property(assign) CalDAVServerVersion *serverVersion;	// G=0x4169; S=0x41d9; 
@property(assign) int calDAVAccountVersion;	// G=0x2e75; S=0x2ea9; 
@property(retain, nonatomic) NSDictionary *subscribedCalendars;	// G=0x2e55; S=0x2db9; 
@property(readonly, assign) NSSet *calendars;	// G=0x398d; 
@property(readonly, assign) NSSet *movedItemURLStrings;	// G=0x7419; @synthesize=_movedItemURLStrings
@property(readonly, assign) NSMutableDictionary *itemIDsToMoveActions;	// G=0x7409; @synthesize=_itemIDsToMoveActions
@property(assign) BOOL isRefreshing;	// G=0x7391; S=0x73a1; @synthesize=_isRefreshing
@property(assign) BOOL needsAccountPropertyRefresh;	// G=0x73e9; S=0x73f9; @synthesize=_needsAccountPropertyRefresh
@property(assign) BOOL wasMigrated;	// G=0x374d; S=0x3801; 
@property(assign) BOOL isWritable;	// G=0x369d; S=0x3709; 
@property(assign) int overriddenPort;	// G=0x3071; S=0x3011; 
@property(retain) NSString *overriddenScheme;	// G=0x3101; S=0x30a5; 
@property(retain) NSString *overriddenServer;	// G=0x2ff5; S=0x2f99; 
@property(retain) id searchPropertySet;	// G=0x3649; S=0x3659; 
@property(retain) NSURL *collectionSetURL;	// G=0x35c9; S=0x360d; 
@property(readonly, assign) NSDictionary *principals;	// G=0x7461; @synthesize=_principals
@property(retain) MobileCalDAVPrincipal *mainPrincipal;	// G=0x7429; S=0x743d; @synthesize=_mainPrincipal
@property(retain) id principalURL;	// G=0x3399; S=0x33b9; converted property
@property(assign) BOOL useSSL;	// G=0x3369; S=0x3335; converted property
@property(assign) int port;	// G=0x32e9; S=0x32a5; converted property
@property(retain) id scheme;	// G=0x31e1; S=0x321d; converted property
@property(retain) id host;	// G=0x311d; S=0x3159; converted property
@property(retain) id username;	// G=0x2eed; S=0x2f0d; converted property
@property(readonly, retain) DACoreDAVTaskManager *taskManager;	// G=0x4531; converted property
+ (id)supportedDataclasses;	// 0x2079
+ (Class)clientClass;	// 0x205d
+ (Class)accountClass;	// 0x2041
+ (id)defaultProperties;	// 0x1791
// declared property setter: - (void)setSearchQueriesShouldCancel:(BOOL)cancel;	// 0x74c1
// declared property getter: - (BOOL)searchQueriesShouldCancel;	// 0x74b1
// declared property setter: - (void)setPreferredToDoDaysToSync:(int)sync;	// 0x74a1
// declared property getter: - (int)preferredToDoDaysToSync;	// 0x7491
// declared property setter: - (void)setPreferredEventDaysToSync:(int)sync;	// 0x7481
// declared property getter: - (int)preferredEventDaysToSync;	// 0x7471
// declared property getter: - (id)principals;	// 0x7461
// declared property setter: - (void)setMainPrincipal:(id)principal;	// 0x743d
// declared property getter: - (id)mainPrincipal;	// 0x7429
// declared property getter: - (id)movedItemURLStrings;	// 0x7419
// declared property getter: - (id)itemIDsToMoveActions;	// 0x7409
// declared property setter: - (void)setNeedsAccountPropertyRefresh:(BOOL)refresh;	// 0x73f9
// declared property getter: - (BOOL)needsAccountPropertyRefresh;	// 0x73e9
// declared property setter: - (void)setRefreshContext:(id)context;	// 0x73c5
// declared property getter: - (id)refreshContext;	// 0x73b1
// declared property setter: - (void)setIsRefreshing:(BOOL)refreshing;	// 0x73a1
// declared property getter: - (BOOL)isRefreshing;	// 0x7391
- (void)coreDAVTransmittedDataFinished;	// 0x738d
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x736d
- (BOOL)shouldLogTransmittedData;	// 0x7361
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x731d
- (int)coreDAVOutputLevel;	// 0x7315
- (int)coreDAVLogLevel;	// 0x72fd
- (id)localizedInvalidPasswordMessage;	// 0x724d
- (id)localizedIdenticalAccountFailureMessage;	// 0x71d5
- (BOOL)isEqualToAccount:(id)account;	// 0x6fa5
- (BOOL)isCalDAVAccount;	// 0x6fa1
- (void)reattainPowerAssertions;	// 0x6f51
- (void)dropPowerAssertions;	// 0x6f01
- (void)releasePowerAssertion;	// 0x6e61
- (void)retainPowerAssertion;	// 0x6dfd
- (id)_powerAssertionGroupIdentifier;	// 0x6ded
- (id)_powerAssertionContext;	// 0x6de9
- (void)checkValidityWithConsumer:(id)consumer;	// 0x6ba9
- (id)wellKnownPaths;	// 0x6a11
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x67fd
- (void)shutdown;	// 0x67f9
- (BOOL)searchQueriesRunning;	// 0x67c9
- (void)cancelAllSearchQueries;	// 0x66bd
- (void)cancelSearchQuery:(id)query;	// 0x6575
- (void)performSearchQuery:(id)query;	// 0x61e1
- (void)task:(id)task didFinishWithError:(id)error;	// 0x5ec9
- (void)refreshWithContext:(id)context;	// 0x5c2d
- (void)_collectMoveActions;	// 0x5929
- (id)_collectActionsFromMoveDictionary:(CFDictionaryRef)moveDictionary forDataclass:(id)dataclass outShouldSave:(BOOL *)anOut;	// 0x547d
- (void)refreshActor:(id)actor didCompleteWithError:(id)error;	// 0x4e81
- (void)cancelRefresh;	// 0x4da9
- (void)_setSpinning:(BOOL)spinning;	// 0x4d45
- (id)spinnerIdentifiers;	// 0x4ce5
- (void)_updateCalendarStore:(BOOL)store;	// 0x4a35
- (BOOL)_updateCalendarStoreProperties:(void *)properties;	// 0x4755
- (void *)copyCalStore;	// 0x4701
- (id)_calendarConstraintsPath;	// 0x4689
- (id)_calendarConstraintsResource;	// 0x4585
// converted property getter: - (id)taskManager;	// 0x4531
- (BOOL)usesTokenAuth;	// 0x452d
// declared property getter: - (BOOL)supportsEvents;	// 0x4529
// declared property getter: - (BOOL)supportsReminders;	// 0x44ad
// declared property getter: - (BOOL)shouldFilterSyncTimeRangeForInbox;	// 0x4441
// declared property getter: - (BOOL)shouldFilterTodoSyncTimeRange;	// 0x43f5
// declared property getter: - (BOOL)shouldFilterEventSyncTimeRange;	// 0x43a9
// declared property getter: - (id)ocurrenceCacheEndDate;	// 0x4371
// declared property getter: - (id)ocurrenceCacheStartDate;	// 0x4339
// declared property getter: - (id)viewedTimeZone;	// 0x431d
// declared property setter: - (void)setServerVersion:(id)version;	// 0x41d9
// declared property getter: - (id)serverVersion;	// 0x4169
- (void)removePrincipal:(id)principal;	// 0x412d
- (void)addPrincipal:(id)principal;	// 0x40d5
- (void)reloadCalendars;	// 0x400d
// declared property getter: - (id)calendars;	// 0x398d
- (void)removeCalendar:(id)calendar;	// 0x3921
- (void)addCalendar:(id)calendar;	// 0x38c9
// declared property setter: - (void)setWasMigrated:(BOOL)migrated;	// 0x3801
// declared property getter: - (BOOL)wasMigrated;	// 0x374d
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x3709
// declared property getter: - (BOOL)isWritable;	// 0x369d
// declared property setter: - (void)setSearchPropertySet:(id)set;	// 0x3659
// declared property getter: - (id)searchPropertySet;	// 0x3649
// declared property setter: - (void)setCollectionSetURL:(id)url;	// 0x360d
// declared property getter: - (id)collectionSetURL;	// 0x35c9
- (void)setAccountDescription:(id)description;	// 0x3585
- (id)serverBaseURL;	// 0x34e1
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x33b9
// converted property getter: - (id)principalURL;	// 0x3399
// converted property getter: - (BOOL)useSSL;	// 0x3369
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x3335
// converted property getter: - (int)port;	// 0x32e9
// converted property setter: - (void)setPort:(int)port;	// 0x32a5
// converted property setter: - (void)setScheme:(id)scheme;	// 0x321d
// converted property getter: - (id)scheme;	// 0x31e1
// converted property setter: - (void)setHost:(id)host;	// 0x3159
// converted property getter: - (id)host;	// 0x311d
// declared property getter: - (id)overriddenScheme;	// 0x3101
// declared property setter: - (void)setOverriddenScheme:(id)scheme;	// 0x30a5
// declared property getter: - (int)overriddenPort;	// 0x3071
// declared property setter: - (void)setOverriddenPort:(int)port;	// 0x3011
// declared property getter: - (id)overriddenServer;	// 0x2ff5
// declared property setter: - (void)setOverriddenServer:(id)server;	// 0x2f99
// converted property setter: - (void)setUsername:(id)username;	// 0x2f0d
// converted property getter: - (id)username;	// 0x2eed
// declared property setter: - (void)setCalDAVAccountVersion:(int)version;	// 0x2ea9
// declared property getter: - (int)calDAVAccountVersion;	// 0x2e75
// declared property getter: - (id)subscribedCalendars;	// 0x2e55
// declared property setter: - (void)setSubscribedCalendars:(id)calendars;	// 0x2db9
- (BOOL)accountNeedsUpgrade;	// 0x2cc1
- (BOOL)upgradeAccount;	// 0x2c39
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x2881
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x2875
- (id)_oldURLsForKeychain;	// 0x2609
- (void)_upgradeAccountToTelluride;	// 0x2111
- (id)stateString;	// 0x20a9
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x2099
- (id)properties;	// 0x1b91
- (void)dealloc;	// 0x1911
- (id)init;	// 0x18d1
- (id)initWithProperties:(id)properties;	// 0x1289
@end
