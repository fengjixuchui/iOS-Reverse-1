/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */


#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/SafeVMUProcInfoProtocol.h>

@class NSString, NSArray;

@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol> {
	unsigned _task;	// 4 = 0x4
	BOOL _needTaskPortDealloc;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	int _cpuType;	// 16 = 0x10
	NSArray *_arguments;	// 20 = 0x14
	NSArray *_envVars;	// 24 = 0x18
	NSString *_procTableName;	// 28 = 0x1c
	NSString *_realAppName;	// 32 = 0x20
	NSString *_requestedAppName;	// 36 = 0x24
	NSString *_firstArg;	// 40 = 0x28
	int _pid;	// 44 = 0x2c
	int _ppid;	// 48 = 0x30
	timeval _startTime;	// 52 = 0x34
}
@property(readonly, assign) unsigned task;	// G=0x292ec; converted property
@property(readonly, retain) NSString *name;	// G=0x29414; converted property
@property(readonly, assign) int cpuType;	// G=0x29040; converted property
@property(readonly, retain) NSArray *arguments;	// G=0x2960c; converted property
@property(readonly, retain) NSArray *envVars;	// G=0x295a8; converted property
@property(readonly, retain) NSString *procTableName;	// G=0x29c54; converted property
@property(readonly, retain) NSString *realAppName;	// G=0x297c0; converted property
@property(readonly, retain) NSString *requestedAppName;	// G=0x296fc; converted property
@property(readonly, assign) int pid;	// G=0x28ae4; converted property
@property(readonly, assign) int ppid;	// G=0x28af8; converted property
@property(readonly, assign) timeval startTime;	// G=0x29dd0; converted property
+ (id)getProcessIds;	// 0x28c2c
+ (BOOL)isProcessRunning:(int)running;	// 0x28bc4
+ (int)processParentId:(int)anId;	// 0x28b5c
- (id)init;	// 0x28b1c
- (id)initWithPid:(int)pid;	// 0x2a160
- (id)initWithTask:(unsigned)task;	// 0x2a0f0
- (void)dealloc;	// 0x29fbc
- (void)finalize;	// 0x29f3c
// converted property getter: - (timeval)startTime;	// 0x29dd0
// converted property getter: - (id)procTableName;	// 0x29c54
- (id)_infoFromCommandLine:(int)commandLine;	// 0x29884
// converted property getter: - (id)realAppName;	// 0x297c0
// converted property getter: - (id)requestedAppName;	// 0x296fc
- (id)firstArgument;	// 0x29670
// converted property getter: - (id)arguments;	// 0x2960c
// converted property getter: - (id)envVars;	// 0x295a8
- (id)userAppName;	// 0x29520
// converted property getter: - (id)name;	// 0x29414
- (id)description;	// 0x293b4
// converted property getter: - (int)pid;	// 0x28ae4
// converted property getter: - (int)ppid;	// 0x28af8
// converted property getter: - (unsigned)task;	// 0x292ec
- (void)update;	// 0x29174
- (BOOL)isApp;	// 0x28b0c
- (BOOL)isMachO;	// 0x2914c
- (BOOL)isCFM;	// 0x290f0
// converted property getter: - (int)cpuType;	// 0x29040
- (BOOL)isNative;	// 0x28b14
- (BOOL)isRunning;	// 0x29004
- (BOOL)terminate;	// 0x28fa8
- (BOOL)signal:(int)signal;	// 0x28f78
- (BOOL)isEqual:(id)equal;	// 0x28ee8
- (int)compare:(id)compare;	// 0x28e70
- (int)compareByName:(id)name;	// 0x28e18
- (int)compareByUserAppName:(id)name;	// 0x28dc0
- (unsigned)hash;	// 0x28d80
@end
