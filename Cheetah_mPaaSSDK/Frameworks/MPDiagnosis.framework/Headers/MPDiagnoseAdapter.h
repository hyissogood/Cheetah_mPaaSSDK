//
//  MPDiagnoseAdapter.h
//  MPDiagnosis
//
//  Created by yemingyu on 2019/2/18.
//  Copyright © 2019 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPDiagnoseAdapter : NSObject

/**
 初始化诊断功能
 此组件依赖 Sync 服务，会初始化 Sync，且进行用户 Id 与 Sync 的绑定，采用的 userId 为 MPaaSInterface 的 - (NSString*)userId 函数，在主工程 Category 中配置
 
 */
+ (void)initDiagnose;

/**
 通知诊断SDK，用户已变更
 当前用户变化时，MPaaSInterface 的 - (NSString*)userId 函数会发生变化，需通知诊断 SDK 更新用户并重新绑定
 */
+ (void)userChange;

@end

NS_ASSUME_NONNULL_END

