/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAuthenticateResponse : GKInternalRepresentation {
    NSString *_accountName;
    NSString *_authToken;
    int _environment;
    BOOL _loginDisabled;
    BOOL _passwordChangeRequired;
    NSURL *_passwordChangeURL;
    NSString *_playerID;
    BOOL _shouldShowLinkAccountsUI;
}

@property (nonatomic, retain) NSString *accountName;
@property (nonatomic, retain) NSString *authToken;
@property (nonatomic) int environment;
@property (nonatomic) BOOL loginDisabled;
@property (nonatomic) BOOL passwordChangeRequired;
@property (nonatomic, retain) NSURL *passwordChangeURL;
@property (nonatomic, retain) NSString *playerID;
@property (nonatomic) BOOL shouldShowLinkAccountsUI;

+ (id)secureCodedPropertyKeys;

- (id)accountName;
- (id)authToken;
- (void)dealloc;
- (int)environment;
- (BOOL)loginDisabled;
- (BOOL)passwordChangeRequired;
- (id)passwordChangeURL;
- (id)playerID;
- (void)setAccountName:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setEnvironment:(int)arg1;
- (void)setLoginDisabled:(BOOL)arg1;
- (void)setPasswordChangeRequired:(BOOL)arg1;
- (void)setPasswordChangeURL:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setShouldShowLinkAccountsUI:(BOOL)arg1;
- (BOOL)shouldShowLinkAccountsUI;

@end
