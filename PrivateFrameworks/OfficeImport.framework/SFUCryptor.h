/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface SFUCryptor : NSObject  {
}


- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 error:(id*)arg5;
- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 crc32:(unsigned int*)arg5 error:(id*)arg6;
- (BOOL)cryptDataFromStream:(id)arg1 toBuffer:(char *)arg2 length:(unsigned long)arg3 bytesRead:(unsigned int*)arg4 error:(id*)arg5;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char *)arg3 ivLength:(unsigned long)arg4;

@end