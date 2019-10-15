//
//  MPDynamicInterface.h
//  MPDynamicAdapter
//
//  Created by yemingyu on 2019/2/19.
//  Copyright © 2019 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPDynamicInterface : NSObject

/**
 初始化动态包安全校验
 
 @param path 公钥路径
 @param sig 私钥数组
 @param sig 私钥数组长度
 @return YES 表示验证通过，NO 表示验证失败
 */
+ (BOOL)initDynamicSecWithPublicKey:(NSString *)path signature:(char [_Nullable])sig sigLength:(size_t)len;

/**
 自动监听 UIApplicationDidFinishLaunchingNotification、UIApplicationWillEnterForegroundNotification 事件，
 并同步包。
 *  注意：当使用 mPaaS 框架中 DFClientDelegate 接管 App 生命周期时，此函数会在框架中自动执行，不要再手动执行
 */
+ (void)initDynamicSyncLocalFile;


/**
 DEBUG 阶段验证加密包是否正常

 @param path 加密包路径
 */
+ (void)runDynamicLocalSecFile:(NSString *)path;

/**
 DEBUG 阶段验证原始包是否正常
 
 @param path 原始包路径
 */
+ (void)runDynamicLocalFile:(NSString *)path;

@end

NS_ASSUME_NONNULL_END
