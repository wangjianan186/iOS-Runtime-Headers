/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJobManifest : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _activities;
    int  _manifestType;
    NSNumber * _purchaseID;
    NSString * _storeCorrelationID;
}

@property (nonatomic, readonly) int manifestType;
@property (nonatomic, copy) NSNumber *purchaseID;
@property (nonatomic, copy) NSString *storeCorrelationID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addActivity:(id)arg1 withIdentifier:(id)arg2 persistentID:(id)arg3;
- (id)_generateIdentifier;
- (id)addActivity:(id)arg1;
- (void)addActivity:(id)arg1 withIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateActivitiesUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithManifestType:(int)arg1;
- (int)manifestType;
- (id)purchaseID;
- (void)setPurchaseID:(id)arg1;
- (void)setStoreCorrelationID:(id)arg1;
- (id)storeCorrelationID;

@end
