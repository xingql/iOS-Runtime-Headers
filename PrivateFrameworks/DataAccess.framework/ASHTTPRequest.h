/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASParseContext, NSHTTPURLResponse, NSURLConnection, NSMutableSet, NSURLRequest;



@interface ASHTTPRequest : NSObject 
{
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSMutableSet *_attemptedIdentities;
    NSURLConnection *_connection;
    ASParseContext *_parseContext;
    id _delegate;
    BOOL _isFakingIt;
    BOOL _didSendRequest;
    BOOL _didFailWithError;
    BOOL _didCancel;
    BOOL _didReceiveResponse;
    BOOL _didReceiveData;
    BOOL _didFinishLoading;
    BOOL _didReset;
    BOOL _forceEDGE;
}

+ (NSUInteger)uniqueQueryID;
+ (struct __SecIdentity { }*)secIdentityForHost:(id)arg1;
+ (void)setSecIdentity:(struct __SecIdentity { }*)arg1 forHost:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)responseContentType;
- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)_initFakeParseContext;
- (void)tearDownResources;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)contentType;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (struct __CFData { }*)_copyCertSHA1ForIdentity:(struct __SecIdentity { }*)arg1;
- (BOOL)_haveAttemptedIdentity:(struct __SecIdentity { }*)arg1;
- (void)_addAttemptedIdentity:(struct __SecIdentity { }*)arg1;
- (BOOL)handleCertificateError:(id)arg1;
- (void)connectionFailedWithError:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (NSInteger)connectionActionForResponse:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)reset;
- (void)willProcessContext;
- (void)didProcessContext:(id)arg1;
- (BOOL)processContext:(id)arg1;
- (void)finishWithError:(id)arg1;
- (BOOL)forceEDGETransport;
- (void)setForceEDGETransport:(BOOL)arg1;
- (BOOL)shouldHoldPowerAssertion;
- (BOOL)shouldLogIncomingData;

@end