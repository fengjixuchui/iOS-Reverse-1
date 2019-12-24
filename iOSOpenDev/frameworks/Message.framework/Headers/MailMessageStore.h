/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Message-Structs.h>
#import <Message/XXUnknownSuperclass.h>

@class NSMutableArray, NSTimer, ActivityMonitor, MailAccount, MailboxUid;

@interface MailMessageStore : XXUnknownSuperclass {
	struct {
		unsigned isReadOnly : 1;
		unsigned hasUnsavedChangesToMessageData : 1;
		unsigned haveOpenLockFile : 1;
		unsigned compacting : 1;
		unsigned cancelInvalidation : 1;
		unsigned forceInvalidation : 1;
		unsigned isWritingChangesToDisk : 1;
		unsigned isTryingToClose : 1;
		unsigned compactOnClose : 1;
		unsigned reserved : 22;
	} _flags;	// 24 = 0x18
	MailboxUid *_mailboxUid;	// 28 = 0x1c
	MailAccount *_account;	// 32 = 0x20
	NSMutableArray *_allMessages;	// 36 = 0x24
	unsigned _deletedMessagesSize;	// 40 = 0x28
	unsigned _deletedMessageCount;	// 44 = 0x2c
	unsigned _unreadMessageCount;	// 48 = 0x30
	unsigned _lastFetchCount;	// 52 = 0x34
	unsigned _generationNumber;	// 56 = 0x38
	int _state;	// 60 = 0x3c
	NSTimer *_timer;	// 64 = 0x40
	double timeOfLastAutosaveOperation;	// 68 = 0x44
	ActivityMonitor *_openMonitor;	// 76 = 0x4c
}
@property(readonly, retain) MailboxUid *mailboxUid;	// G=0xeab1; converted property
@property(readonly, retain) MailAccount *account;	// G=0x10225; converted property
+ (BOOL)createEmptyStoreIfNeededForPath:(id)path;	// 0x22949
+ (BOOL)createEmptyStoreForPath:(id)path;	// 0x22921
+ (BOOL)storeAtPathIsWritable:(id)pathIsWritable;	// 0x228f9
+ (Class)classForMimePart;	// 0x1958d
+ (int)copyMessages:(id)messages toMailbox:(id)mailbox markAsRead:(BOOL)read deleteOriginals:(BOOL)originals isDeletion:(BOOL)deletion unsuccessfulOnes:(id)ones;	// 0x22335
+ (void)_autosaveMessageStore:(void *)store;	// 0x2219d
+ (Class)headersClass;	// 0x19cf5
- (id)initWithMailboxUid:(id)mailboxUid readOnly:(BOOL)only;	// 0x221ad
- (void)dealloc;	// 0x242e9
- (void)openAsynchronously;	// 0xf9e9
- (void)openSynchronously;	// 0x242c1
- (void)didOpen;	// 0xfc35
- (void)cancelOpen;	// 0x24275
- (void)writeUpdatedMessageDataToDisk;	// 0x2424d
// converted property getter: - (id)account;	// 0x10225
// converted property getter: - (id)mailboxUid;	// 0xeab1
- (BOOL)isOpened;	// 0x22055
- (id)storePathRelativeToAccount;	// 0x2422d
- (id)displayName;	// 0x2412d
- (BOOL)isReadOnly;	// 0x2206d
- (id)description;	// 0x240d1
- (BOOL)isDrafts;	// 0x240a1
- (void)messageFlagsDidChange:(id)messageFlags flags:(id)flags;	// 0x1b169
- (void)structureDidChange;	// 0x24021
- (void)messagesWereAdded:(id)added;	// 0x23fdd
- (void)messagesWereCompacted:(id)compacted;	// 0x23ed1
- (void)updateUserInfoToLatestValues;	// 0x23e29
- (void)deletedCount:(unsigned *)count andSize:(unsigned *)size;	// 0x22081
- (unsigned)totalCount;	// 0x23ddd
- (unsigned)nonDeletedCountIncludingServerSearch:(BOOL)search andThreadSearch:(BOOL)search2;	// 0x23db5
- (unsigned)serverMessageCount;	// 0x220a5
- (unsigned)serverUnreadOnlyOnServerCount;	// 0x220ad
- (unsigned)serverUnreadCount;	// 0x23da5
- (BOOL)hasMoreMessages:(unsigned)messages;	// 0x220b1
- (void)purgeMessagesBeyondLimit:(unsigned)limit keepingMessage:(id)message;	// 0x220b5
- (unsigned)unreadCount;	// 0x220b9
- (BOOL)hasMessageForAccount:(id)account;	// 0x23cdd
- (unsigned)indexOfMessage:(id)message;	// 0x220c9
- (id)copyOfAllMessages;	// 0x220d1
- (id)copyOfMessagesInRange:(NSRange)range;	// 0x220d5
- (id)mutableCopyOfAllMessages;	// 0x220d9
- (id)copyOfAllMessagesWithOptions:(unsigned)options;	// 0x23ccd
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned)rowID limit:(unsigned)limit;	// 0x23cbd
- (id)copyMessagesMatchingText:(id)text;	// 0x23ca9
- (id)copyMessagesMatchingText:(id)text options:(unsigned)options;	// 0x220dd
- (id)copyMessagesMatchingCriterion:(id)criterion options:(unsigned)options;	// 0x220e1
- (id)copyMessagesWithRemoteIDs:(id)remoteIDs options:(unsigned)options;	// 0x220e5
- (BOOL)canFetchSearchResults;	// 0x220e9
- (int)fetchMessagesMatchingCriterion:(id)criterion limit:(unsigned)limit;	// 0x220ed
- (id)remoteIDsMatchingCriterion:(id)criterion limit:(unsigned)limit;	// 0x220f5
- (BOOL)canFetchMessageIDs;	// 0x220f9
- (int)fetchMessagesWithMessageIDs:(id)messageIDs andSetFlags:(unsigned long long)flags;	// 0x220fd
- (id)_defaultRouterDestination;	// 0x22105
- (id)finishRoutingMessages:(id)messages routed:(id)routed;	// 0x23a71
- (BOOL)canRebuild;	// 0x22115
- (void)rebuildTableOfContentsAsynchronously;	// 0x23995
- (BOOL)canCompact;	// 0x22131
- (void)doCompact;	// 0x22165
- (void)deleteMessagesOlderThanNumberOfDays:(int)days compact:(BOOL)compact;	// 0x22169
- (void)deleteMessages:(id)messages moveToTrash:(BOOL)trash;	// 0x23719
- (void)undeleteMessages:(id)messages;	// 0x23681
- (void)messagesWereDeleted:(id)deleted;	// 0x2216d
- (BOOL)allowsAppend;	// 0x22171
- (int)appendMessages:(id)messages unsuccessfulOnes:(id)ones newMessageIDs:(id)ids newMessages:(id)messages4 flagsToSet:(id)set;	// 0x23645
- (int)appendMessages:(id)messages unsuccessfulOnes:(id)ones newMessageIDs:(id)ids newMessages:(id)messages4;	// 0x23619
- (int)appendMessages:(id)messages unsuccessfulOnes:(id)ones newMessageIDs:(id)ids;	// 0x235f5
- (int)appendMessages:(id)messages unsuccessfulOnes:(id)ones;	// 0x235d1
- (id)messageWithValue:(id)value forHeader:(id)header options:(unsigned)options;	// 0x22175
- (id)messageForMessageID:(id)messageID options:(unsigned)options;	// 0x22179
- (id)messageForRemoteID:(id)remoteID;	// 0x235bd
- (id)lastViewedMessageWithOptions:(unsigned)options;	// 0x23579
- (id)lastViewedMessageDate;	// 0x23551
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;	// 0x19c65
- (BOOL)hasCachedDataForMimePart:(id)mimePart;	// 0x23519
- (id)setFlagsFromDictionary:(id)dictionary forMessages:(id)messages;	// 0x23371
- (id)setFlagsLocallyFromDictionary:(id)dictionary forMessages:(id)messages;	// 0x2217d
- (void)setFlag:(id)flag state:(BOOL)state forMessages:(id)messages;	// 0x232e9
- (id)willSetFlagsFromDictionary:(id)dictionary forMessages:(id)messages;	// 0x232d9
- (void)setFlagsCancelled:(id)cancelled forMessages:(id)messages;	// 0x22181
- (void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted forMessage:(id)message;	// 0x2324d
- (id)status;	// 0x22185
- (int)fetchNumMessages:(unsigned)messages preservingUID:(id)uid fetchType:(int)type synchronize:(BOOL)synchronize compact:(BOOL)compact;	// 0x23219
- (int)fetchMobileSynchronously:(unsigned)synchronously preservingUID:(id)uid compact:(BOOL)compact;	// 0x15f11
- (int)fetchMobileSynchronously:(unsigned)synchronously;	// 0x231f9
- (BOOL)setPreferredEncoding:(unsigned long)encoding forMessage:(id)message;	// 0x23111
- (void)setData:(id)data forMimePart:(id)mimePart isComplete:(BOOL)complete;	// 0x22189
- (void)close;	// 0x2218d
- (void)_flushAllMessageData;	// 0x11851
- (void)setLibrary:(id)library;	// 0x22191
- (BOOL)shouldDownloadBodyDataForMessage:(id)message;	// 0x230d1
- (id)loadMeetingExternalIDForMessage:(id)message;	// 0x22195
- (id)loadMeetingDataForMessage:(id)message;	// 0x22199
- (BOOL)shouldSetSummaryForMessage:(id)message;	// 0x230ad
- (BOOL)canDeleteMessage:(id)message;	// 0x1949d
- (BOOL)shouldDeleteInPlace;	// 0x23069
- (BOOL)shouldArchive;	// 0x23025
- (int)archiveDestination;	// 0x22fe1
- (void)_cancelAutosave;	// 0x221a1
- (void)_setNeedsAutosave;	// 0x221a5
- (id)_fetchHeaderDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;	// 0x22fb5
- (void)_rebuildTableOfContentsSynchronously;	// 0x22f89
- (void)updateBodyFlagsForMessage:(id)message body:(id)body;	// 0x19dc9
- (id)_setOrGetBody:(id)body forMessage:(id)message updateFlags:(BOOL)flags;	// 0x19d11
- (void)_setFlagsForMessages:(id)messages mask:(unsigned long long)mask;	// 0x22ef9
- (void)_setFlagsForMessages:(id)messages;	// 0x22e29
- (void)updateMessages:(id)messages updateNumberOfAttachments:(BOOL)attachments;	// 0x22d0d
- (void)messagesWereAdded:(id)added forIncrementalLoading:(BOOL)incrementalLoading earliestReceivedDate:(id)date;	// 0x22b95
- (BOOL)_updateFlagForMessage:(id)message key:(id)key value:(BOOL)value;	// 0x229d1
- (BOOL)_shouldChangeComponentMessageFlags;	// 0x221a9
- (BOOL)_shouldChangeComponentMessageFlagsForMessage:(id)message;	// 0x229b9
@end
