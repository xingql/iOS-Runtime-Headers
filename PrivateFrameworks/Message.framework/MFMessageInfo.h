/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageInfo : NSObject {
    long long _conversationHash;
    unsigned int _dateReceivedInterval;
    unsigned int _dateSentInterval;
    unsigned int _deleted;
    unsigned int _flagged;
    long long _generationNumber;
    unsigned int _hasAttachments;
    unsigned int _isVIP;
    unsigned int _mailboxID;
    unsigned int _read;
    unsigned int _uid;
    unsigned int _uidIsLibraryID;
}

@property (nonatomic) long long conversationHash;
@property (nonatomic) unsigned int dateReceivedInterval;
@property (nonatomic) unsigned int dateSentInterval;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL flagged;
@property (nonatomic, readonly) long long generationNumber;
@property (nonatomic) BOOL isVIP;
@property (getter=isKnownToHaveAttachments, nonatomic) BOOL knownToHaveAttachments;
@property (nonatomic) unsigned int mailboxID;
@property (nonatomic) BOOL read;
@property (nonatomic) unsigned int uid;
@property (nonatomic) BOOL uidIsLibraryID;

+ (long long)newGenerationNumber;

- (long long)conversationHash;
- (unsigned int)dateReceivedInterval;
- (unsigned int)dateSentInterval;
- (BOOL)deleted;
- (id)description;
- (BOOL)flagged;
- (int)generationCompare:(id)arg1;
- (long long)generationNumber;
- (unsigned int)hash;
- (id)init;
- (id)initWithUid:(unsigned int)arg1 mailboxID:(unsigned int)arg2 dateReceivedInterval:(unsigned int)arg3 dateSentInterval:(unsigned int)arg4 conversationHash:(long long)arg5 read:(BOOL)arg6 knownToHaveAttachments:(BOOL)arg7 flagged:(BOOL)arg8 isVIP:(BOOL)arg9;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKnownToHaveAttachments;
- (BOOL)isVIP;
- (unsigned int)mailboxID;
- (BOOL)read;
- (void)setConversationHash:(long long)arg1;
- (void)setDateReceivedInterval:(unsigned int)arg1;
- (void)setDateSentInterval:(unsigned int)arg1;
- (void)setDeleted:(BOOL)arg1;
- (void)setFlagged:(BOOL)arg1;
- (void)setIsVIP:(BOOL)arg1;
- (void)setKnownToHaveAttachments:(BOOL)arg1;
- (void)setMailboxID:(unsigned int)arg1;
- (void)setRead:(BOOL)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUidIsLibraryID:(BOOL)arg1;
- (unsigned int)uid;
- (BOOL)uidIsLibraryID;

@end
