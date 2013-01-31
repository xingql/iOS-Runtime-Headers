/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItemAccessLogEventInternal, NSDate, NSString;

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying> {
    AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property(readonly) int numberOfSegmentsDownloaded;
@property(readonly) int numberOfMediaRequests;
@property(readonly) NSDate * playbackStartDate;
@property(readonly) NSString * URI;
@property(readonly) NSString * serverAddress;
@property(readonly) int numberOfServerAddressChanges;
@property(readonly) NSString * playbackSessionID;
@property(readonly) double playbackStartOffset;
@property(readonly) double segmentsDownloadedDuration;
@property(readonly) double durationWatched;
@property(readonly) int numberOfStalls;
@property(readonly) long long numberOfBytesTransferred;
@property(readonly) double observedBitrate;
@property(readonly) double indicatedBitrate;
@property(readonly) int numberOfDroppedVideoFrames;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)URI;
- (void)finalize;
- (id)initWithDictionary:(id)arg1;
- (int)numberOfDroppedVideoFrames;
- (double)indicatedBitrate;
- (double)observedBitrate;
- (long long)numberOfBytesTransferred;
- (int)numberOfStalls;
- (double)durationWatched;
- (double)segmentsDownloadedDuration;
- (double)playbackStartOffset;
- (id)playbackSessionID;
- (int)numberOfServerAddressChanges;
- (id)serverAddress;
- (id)playbackStartDate;
- (int)numberOfSegmentsDownloaded;
- (int)numberOfMediaRequests;

@end