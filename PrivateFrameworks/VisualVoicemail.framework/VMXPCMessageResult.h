/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMXPCMessageResult : NSObject {
    NSDictionary *_message;
    BOOL _wasSuccessful;
}

@property (retain) NSDictionary *message;
@property BOOL wasSuccessful;

+ (id)result;
+ (id)resultWithWasSuccessful:(BOOL)arg1 message:(id)arg2;

- (void)dealloc;
- (id)initWithWasSuccessful:(BOOL)arg1 message:(id)arg2;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setWasSuccessful:(BOOL)arg1;
- (BOOL)wasSuccessful;

@end
