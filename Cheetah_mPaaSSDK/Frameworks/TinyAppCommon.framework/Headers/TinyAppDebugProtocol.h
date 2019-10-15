//
//  TinyAppDebugProtocol.h
//  TinyAppDebug
//
//  Created by 应俊康 on 2018/7/4.
//  Copyright © 2018年 Alipay. All rights reserved.
//

/**
 小程序调试工具delegate
 */
@protocol TinyAppDebugDelegate <NSObject>

@property (nonatomic, weak) H5WebViewController *renderVC;

/**
 用于承载调试面板和性能面板视图的vc

 @return 小程序导航nvc
 */
- (UINavigationController *)parentVc4Panel;

/**
 退出当前小程序

 @param session
 */
- (void)exitTinyAppWithSession:(PSDSession *)session;

/**
 调试助手离线包appId

 @return appId
 */
- (NSString *)assistantAppId;
@end
