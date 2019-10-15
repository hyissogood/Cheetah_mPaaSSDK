//
//  MTCheckUpgradeService.h
//  MTPotal
//
//  Created by yangwei on 2017/10/30.
//  Copyright © 2017年 Alibaba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UpgradeCheckService.h"
#import "AliUpgradeProtocol.h"

typedef NS_ENUM(NSUInteger, AliUpdateType) {
    AliUpgradeNewVersion = 201,            /*当前使用的已是最新版本*/
    AliUpgradeOneTime,                         /*客户端已有新版本，单次提醒*/
    AliUpgradeForceUpdate,                   /*客户端已有新版本，强制升级（已废弃）*/
    AliUpgradeEveryTime,                      /*客户端已有新版本，多次提醒*/
    AliUpgradeRejectLogin,                    /*限制登录(已废弃)*/
    AliUpgradeForceUpdateWithLogin     /*客户端已有新版本，强制升级*/
};

/**
 自定义UI时调用检测升级的成功回调
 
 @param upgradeInfos 升级信息
 @{upgradeType:202,
 downloadURL:@"itunes://downLoader.xxxcom/xxx",
 message:@"新版本更新，请升级",
 upgradeShortVersion:@"9.9.0",
 upgradeFullVersion:@"9.9.0.0000001"
 needClientNetType:@"4G,WIFI",
 userId:@"admin"
 }
 */
typedef void(^AliCheckUpgradeComplete)(NSDictionary *upgradeInfos);
typedef void(^AliCheckUpgradeFailure)(NSException *exception);


@interface MPCheckUpgradeInterface : NSObject

/**
 单次提醒时的时间间隔，单位为天，默认为3
 */
@property(nonatomic, assign) NSTimeInterval defaultUpdateInterval;

/**
 修改默认弹框提示UI的代理
 */
@property (nonatomic, weak) id<AliUpgradeViewDelegate> viewDelegate;

/**
 * 初始化实例
 */
+ (instancetype)sharedService;

/**
 主动检查是否有更新，若有更新，使用mPaaS默认提示UI自动弹框显示
 *
 */
- (void)checkNewVersion;

/**
 主动检查是否有更新。不会自动弹框提示，一般用于自定义UI、检查是否有更新、提醒红点等情况
 
 @param complete 成功回调，返回升级信息字典
 @param failure  失败回调
 */
- (void)checkUpgradeWith:(AliCheckUpgradeComplete)complete
                 failure:(AliCheckUpgradeFailure)failure;


@end
