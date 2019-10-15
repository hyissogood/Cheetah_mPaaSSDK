//
//  MPConfigInterface.h
//  MPConfigAdapter
//
//  Created by yangwei on 2019/2/17.
//  Copyright © 2019年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <APConfig/APConfigService.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPConfigInterface : NSObject

/**
 *  初始化实例。
 */
+ (instancetype)sharedService;

/**
 * 从配置中心获取特定key对应的配置。
 *
 * @param key 要获取的配置key。
 *
 * @return 返回特定key对应的配置值。
 */
- (NSString *)stringValueForKey:(NSString *)key;

/**
 *  对指定的配置key添加观察者，动态监听开关值的变化。当客户端拉取开关时机被触发时，可在回调方法里获取指定 key 对应的最新开关值
 *
 *  @param observer  观察者，必须实现 - (void)configChangedForKey:(NSString *)key value:(NSString *)value; 方法，否则添加失败
 *  @param key         指定配置的key
 *
 *  @return 成功返回YES，否则返回NO，失败原因：参数错误或者重复观察。
 */
- (BOOL)addConfigChangedObserver:(id<APConfigObserverProtocol>)observer key:(NSString *)key;

/**
 *  删除指定配置的观察。
 *
 *  @param observer 观察者
 *  @param key      指定配置的key
 */
- (void)removeObserver:(id)observer key:(NSString *)key;

/**
 *  删除指定观察者对所有配置的观察。
 *
 *  @param observer 观察者
 */
- (void)removeObserver:(id)observer;

/**
 * 通过RPC 主动拉取服务端配置
 */
- (void)forceLoadConfig;

@end

NS_ASSUME_NONNULL_END
