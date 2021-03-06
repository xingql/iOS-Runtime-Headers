/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSCloudHistoryConfiguration : NSObject {
    unsigned int _maximumRequestCharacterCount;
    NSString *_multipleDeviceFetchChangesThrottlingPolicyString;
    NSString *_multipleDeviceSaveChangesThrottlingPolicyString;
    NSString *_singleDeviceFetchChangesThrottlingPolicyString;
    NSString *_singleDeviceSaveChangesThrottlingPolicyString;
    NSString *_syncCircleSizeRetrievalThrottlingPolicyString;
    unsigned int _syncWindow;
}

@property unsigned int maximumRequestCharacterCount;
@property (retain) NSString *multipleDeviceFetchChangesThrottlingPolicyString;
@property (retain) NSString *multipleDeviceSaveChangesThrottlingPolicyString;
@property (retain) NSString *singleDeviceFetchChangesThrottlingPolicyString;
@property (retain) NSString *singleDeviceSaveChangesThrottlingPolicyString;
@property (retain) NSString *syncCircleSizeRetrievalThrottlingPolicyString;
@property unsigned int syncWindow;

+ (id)existingSharedCloudHistoryConfiguration;

- (void).cxx_destruct;
- (void)_applyBuiltInConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1 withTolerance:(int)arg2;
- (id)_builtInConfiguration;
- (id)_sharedBuiltInConfiguration;
- (void)applyPlatformConfiguration:(id)arg1 withTolerance:(int)arg2;
- (void)applyRemoteConfiguration:(id)arg1;
- (id)init;
- (unsigned int)maximumRequestCharacterCount;
- (id)multipleDeviceFetchChangesThrottlingPolicyString;
- (id)multipleDeviceSaveChangesThrottlingPolicyString;
- (id)platformBuiltInConfiguration;
- (id)remoteConfiguration;
- (void)setMaximumRequestCharacterCount:(unsigned int)arg1;
- (void)setMultipleDeviceFetchChangesThrottlingPolicyString:(id)arg1;
- (void)setMultipleDeviceSaveChangesThrottlingPolicyString:(id)arg1;
- (void)setSingleDeviceFetchChangesThrottlingPolicyString:(id)arg1;
- (void)setSingleDeviceSaveChangesThrottlingPolicyString:(id)arg1;
- (void)setSyncCircleSizeRetrievalThrottlingPolicyString:(id)arg1;
- (void)setSyncWindow:(unsigned int)arg1;
- (id)singleDeviceFetchChangesThrottlingPolicyString;
- (id)singleDeviceSaveChangesThrottlingPolicyString;
- (id)syncCircleSizeRetrievalThrottlingPolicyString;
- (unsigned int)syncWindow;

@end
