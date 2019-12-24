/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */



@class NSMutableArray, NSArray, IMPerson, NSString, IMHandle;

@interface IMMe : NSObject {
	IMPerson *_person;	// 4 = 0x4
	NSString *_abNickname;	// 8 = 0x8
	NSString *_abFirstName;	// 12 = 0xc
	NSString *_abFullName;	// 16 = 0x10
	NSString *_abLastName;	// 20 = 0x14
	NSArray *_abEmails;	// 24 = 0x18
	NSMutableArray *_abIMHandles;	// 28 = 0x1c
	NSMutableArray *_loginIMHandles;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSArray *imHandles;	// G=0x34c71; 
@property(readonly, assign, nonatomic) IMHandle *bestIMHandle;	// G=0x34b9d; 
@property(readonly, assign, nonatomic) NSArray *emails;	// G=0x4485; 
@property(readonly, assign, nonatomic) NSString *email;	// G=0x443d; 
@property(readonly, assign, nonatomic) NSString *fullName;	// G=0x36f9; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x4241; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x40a9; 
@property(readonly, assign, nonatomic) NSString *nickname;	// G=0x34a55; 
@property(readonly, assign, nonatomic) IMPerson *person;	// G=0xbaed; 
@property(readonly, assign, nonatomic) NSString *guid;	// G=0x13cd5; 
@property(readonly, retain) NSMutableArray *loginIMHandles;	// G=0x34701; converted property
+ (id)imHandleForService:(id)service;	// 0x34acd
+ (id)me;	// 0x2c6d
+ (id)fallbackUserName;	// 0x345b5
- (void)myPictureChanged;	// 0xca19
// declared property getter: - (id)imHandles;	// 0x34c71
// declared property getter: - (id)bestIMHandle;	// 0x34b9d
// declared property getter: - (id)fullName;	// 0x36f9
// declared property getter: - (id)lastName;	// 0x4241
// declared property getter: - (id)email;	// 0x443d
// declared property getter: - (id)emails;	// 0x4485
// declared property getter: - (id)firstName;	// 0x40a9
// declared property getter: - (id)nickname;	// 0x34a55
- (void)setFirstName:(id)name lastName:(id)name2;	// 0x349cd
- (BOOL)removeIMHandle:(id)handle;	// 0x348dd
- (BOOL)isIMHandleLoginIMHandle:(id)handle;	// 0x347dd
- (BOOL)addIMHandle:(id)handle;	// 0x34711
// converted property getter: - (id)loginIMHandles;	// 0x34701
- (BOOL)removeLoginIMHandle:(id)handle;	// 0xd03d
- (BOOL)addLoginIMHandle:(id)handle;	// 0xba79
// declared property getter: - (id)person;	// 0xbaed
- (void)setIMPerson:(id)person;	// 0x2d35
- (void)resetABPerson;	// 0x2dd1
- (void)rebuildIMHandles;	// 0x2ebd
- (id)_imHandlesWithIDs:(id)ids onAccount:(id)account;	// 0xcf71
- (void)dealloc;	// 0x34629
// declared property getter: - (id)guid;	// 0x13cd5
- (id)init;	// 0x2ca9
@end
