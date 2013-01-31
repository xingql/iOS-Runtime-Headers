/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSData;

@interface PBDataReader : NSObject  {
    unsigned int _pos;
    BOOL _error;
    const char *_bytes;
    NSData *_data;
    unsigned int _length;
}

@property unsigned int length;
@property unsigned int position;


- (unsigned int)readUint32;
- (BOOL)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (float)readFloat;
- (unsigned long long)readUint64;
- (BOOL)hasError;
- (void)readTag:(unsigned short*)arg1 andType:(char *)arg2;
- (BOOL)hasMoreData;
- (void)setLength:(unsigned int)arg1;
- (id)data;
- (void)dealloc;
- (unsigned int)length;
- (id)readBigEndianShortThenString;
- (void)recall:(const struct { unsigned int x1; unsigned int x2; }*)arg1;
- (BOOL)mark:(struct { unsigned int x1; unsigned int x2; }*)arg1;
- (id)readData;
- (BOOL)readBOOL;
- (long long)readSfixed64;
- (int)readSfixed32;
- (unsigned long long)readFixed64;
- (unsigned int)readFixed32;
- (long long)readSint64;
- (int)readSint32;
- (long long)readInt64;
- (int)readInt32;
- (double)readDouble;
- (long long)readVarInt;
- (BOOL)readInt8;
- (id)readProtoBuffer;
- (unsigned long long)readBigEndianFixed64;
- (void)updateData:(id)arg1;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readBigEndianFixed32;
- (BOOL)seekToOffset:(unsigned int)arg1;
- (id)readBytes:(unsigned int)arg1;
- (BOOL)isAtEnd;
- (id)readString;
- (unsigned int)offset;
- (unsigned int)position;
- (void)setPosition:(unsigned int)arg1;
- (id)initWithData:(id)arg1;

@end