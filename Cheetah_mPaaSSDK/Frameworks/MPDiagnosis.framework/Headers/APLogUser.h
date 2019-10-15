//
//  APLogUser.h
//  APBusinessCommon
//
//  Created by myy on 17/1/2.
//  Copyright © 2017年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface APLogUser : NSObject

/**
 *  获取APLogUser单例
 *
 *  @return APLogUser单例
 */
+ (APLogUser*)sharedInstance;

/**
 *  注册诊断服务
 */
- (BOOL)registerTrigger;

/**
 *  通知诊断SDK，用户已变更
 */
- (void)userChange;

/**
 * 设置捞取本地日志时在sync中注册的bizType
 *
 * 注意：不设置biztype，默认为 @"MAS-MPAAS-SYNC"；若想修改bizType，请registerTrigger调用之前调用设置
 *
  *  @param bizType
 */

- (void)configSyncCmd:(NSString *)syncCmd;


/**
 获取当前用户 Id

 */
- (NSString*)currentUserId;

@end


