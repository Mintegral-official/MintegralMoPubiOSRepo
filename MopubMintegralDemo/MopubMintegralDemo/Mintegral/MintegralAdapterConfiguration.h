#if __has_include(<MoPub/MoPub.h>)
    #import <MoPub/MoPub.h>
#elif __has_include(<MoPubSDKFramework/MoPub.h>)
    #import <MoPubSDKFramework/MoPub.h>
#else
    #import "MPBaseAdapterConfiguration.h"
#endif
    #import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kMintegralErrorDomain;

@interface MintegralAdapterConfiguration : MPBaseAdapterConfiguration

+(BOOL)isSDKInitialized;

+(void)sdkInitialized;

//+(void)setGDPRInfo:(NSDictionary *)info;

+(BOOL)isMute;

+(void)setMute:(BOOL)muteStatus;

+(void)initializeMintegral:(NSDictionary *)info setAppID:(nonnull NSString *)appId appKey:(nonnull NSString *)appKey;

@end

NS_ASSUME_NONNULL_END
