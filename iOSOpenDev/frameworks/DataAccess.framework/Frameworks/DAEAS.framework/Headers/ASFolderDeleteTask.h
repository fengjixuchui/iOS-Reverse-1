/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASFolderLocalUpdateTask.h>


@interface ASFolderDeleteTask : ASFolderLocalUpdateTask {
}
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x4335d
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)wbxmldata;	// 0x4331d
- (id)initWithFolder:(id)folder previousSyncKey:(id)key completionBlock:(id)block;	// 0x432c5
@end
