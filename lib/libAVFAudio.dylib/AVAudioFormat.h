/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioFormat : NSObject {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    } _asbd;
    unsigned int _commonFormat;
    AVAudioChannelLayout *_layout;
    void *_reserved;
}

@property (nonatomic, readonly) unsigned int channelCount;
@property (nonatomic, readonly) AVAudioChannelLayout *channelLayout;
@property (nonatomic, readonly) unsigned int commonFormat;
@property (getter=isInterleaved, nonatomic, readonly) BOOL interleaved;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly) NSDictionary *settings;
@property (getter=isStandard, nonatomic, readonly) BOOL standard;
@property (nonatomic, readonly) const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*streamDescription;

+ (id)settingsFromASBD:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 channelLayout:(id)arg2;

- (id).cxx_construct;
- (unsigned int)channelCount;
- (id)channelLayout;
- (unsigned int)commonFormat;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initStandardFormatWithSampleRate:(double)arg1 channelLayout:(id)arg2;
- (id)initStandardFormatWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (id)initWithCommonFormat:(unsigned int)arg1 sampleRate:(double)arg2 channels:(unsigned int)arg3 interleaved:(BOOL)arg4;
- (id)initWithCommonFormat:(unsigned int)arg1 sampleRate:(double)arg2 interleaved:(BOOL)arg3 channelLayout:(id)arg4;
- (id)initWithSettings:(id)arg1;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 channelLayout:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInterleaved;
- (BOOL)isStandard;
- (double)sampleRate;
- (id)settings;
- (const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)streamDescription;

@end
