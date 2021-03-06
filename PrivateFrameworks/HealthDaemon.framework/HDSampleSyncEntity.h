/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSampleSyncEntity : HDDataSyncEntity

+ (id)_predicateWithDeviceSourceIdentifier:(id)arg1 nowDate:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 deviceSourceIdentifier:(id)arg2 nowDate:(id)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+ (int)nanoSyncObjectType;
+ (id)objectsForNanoSyncRestoreWithStore:(id)arg1 deviceSourceIdentifier:(id)arg2 nowDate:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 lastSyncAnchor:(long long*)arg5 healthDaemon:(id)arg6 error:(id*)arg7;
+ (id)sampleTypesByAgeInDaysForNanoSyncRestore;

@end
