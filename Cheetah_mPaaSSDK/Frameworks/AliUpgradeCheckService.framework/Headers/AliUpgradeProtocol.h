//
//  AliUpgradeProtocol.h
//  AliUpgradeSDK
//
//  Created by ouxi on 16/10/7.
//  Copyright © 2016年 Alipay. All rights reserved.
//

@protocol AliUpgradeViewDelegate <NSObject>

/**
 * 获取升级弹框的头像
 */
- (UIImage *)upgradeImageViewHeader;

/**
 * 网络请求提示toast
 */
- (void)showToastViewWith:(NSString *)message duration:(NSTimeInterval)timeInterval;

/**
 * 网络请求展示HUD
 */
- (void)showProgressHUD:(BOOL)animation;

/**
 * 网络请求隐藏HUD
 */
- (void)hideProgressHUD:(BOOL)animation;

@end
