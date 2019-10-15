//
//  TinyAppService.h
//  NebulaSDKPlugins
//
//  Created by 应俊康 on 2018/4/28.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    TAAuthModePlatformOnly,
    TAAuthModePlatformAndTinyApp
} TAAuthMode;

@interface TAAuthModel :NSObject

@property (nonatomic,strong) NSString *uid;
@property (nonatomic,strong) NSString *token;
@property (nonatomic,strong) NSDictionary *extraInfo;
@property (nonatomic,strong) NSString *errorMsg;
@end

typedef void (^TAAuthCallback)(TAAuthModel * model);

@protocol TAAuthDelegate <NSObject>

@required

/**
 获取token和uid,用于创建登陆态

 @param mode 获取模式，目前有两种:
 TAAuthModeOnlyPlatform 只进行平台(如高德)授权
 TAAuthModePlatformAndTinyApp 平台授权和小程序（如ofo）授权二合一
 @param extendParams mode != TAAuthModeOnlyPlatform 会携带对应mode的额外参数
 @param callback callback
 */
-(void)authModelForMode:(TAAuthMode)mode
          extendParams:(NSDictionary*)extendParams
              callback:(TAAuthCallback)callback;

@end


@interface TinyAppService : NSObject

@property (nonatomic,weak) id<TAAuthDelegate> delegate;

+ (instancetype)shareInstance;

/**
 启动小程序

 @param appId appid
 @param uId 
 @param parmas 启动参数
 */
-(void)startTinyApp:(NSString*)appId
                uId:(NSString*)uId
             params:(NSDictionary*)parmas;

/**
 保存授权参数

 @param params 参数
 @param key key
 */
- (void)storeParams:(NSDictionary *)params forKey:(NSString*)key;


/**
  在小程序的导航栈中push一个vc

 @param viewController
 @param animated
 */
- (void)pushViewController:(id)viewController animated:(BOOL)animated;


/**
 注册一个rpc operation type 到账号通列表中，注册的rpc会走账户通登录态创建流程

 @param operationType
 */
- (void)registeOperationTypeNeedSession:(NSString *)operationType;


/**
 注册一个jsapi 列表，注册的jsapi在没有登录态时会走账户通登录态创建流程

 @param jsapi 
 */
- (void)registeJsApiNeedUserId:(NSString *)jsapi;
@end
