/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDisambiguationList : SAAceView

@property (nonatomic, copy) NSString *disambiguationKey;
@property (nonatomic, retain) SAUIDomainObjectPicker *domainObjectPicker;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSString *selectionResponse;
@property (nonatomic, copy) NSString *speakableDelimiter;
@property (nonatomic, copy) NSString *speakableFinalDelimiter;
@property (nonatomic, copy) NSString *speakableSelectionResponse;
@property (nonatomic, copy) NSString *speakableSuffix;
@property (nonatomic, copy) NSString *title;

+ (id)disambiguationList;
+ (id)disambiguationListWithDictionary:(id)arg1 context:(id)arg2;

- (id)disambiguationKey;
- (id)domainObjectPicker;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)items;
- (id)selectionResponse;
- (void)setDisambiguationKey:(id)arg1;
- (void)setDomainObjectPicker:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSelectionResponse:(id)arg1;
- (void)setSpeakableDelimiter:(id)arg1;
- (void)setSpeakableFinalDelimiter:(id)arg1;
- (void)setSpeakableSelectionResponse:(id)arg1;
- (void)setSpeakableSuffix:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)speakableDelimiter;
- (id)speakableFinalDelimiter;
- (id)speakableSelectionResponse;
- (id)speakableSuffix;
- (id)title;

@end
