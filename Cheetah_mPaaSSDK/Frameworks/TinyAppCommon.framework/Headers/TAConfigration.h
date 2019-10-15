//
//  TAConfigration.h
//  TinyAppCommon
//
//  Created by 应俊康 on 2018/4/2.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol TAActionSheetDelegate;

@interface TAConfigration : NSObject

+(instancetype)shareInstance;

/**
 注入启动参数追加chInfo的小程序列表，all为所有
 {"appId1","appId2","all"}
 */
@property (nonatomic, strong) NSArray *injectChInfoList;

/**
 内嵌webview能打开H5离线包配置数据
 {"#appIdA#":"appId1,appId2","#appIdB#":"appId1,appId2"}
 */
@property (nonatomic, strong) NSDictionary *embedWebviewCanOpenDic;

/**
 内嵌webview是否显示进度条
 */
@property (nonatomic, assign) BOOL showProgress;

/**
  缓存实现类，请实现TAStorageManagerDelegate协议
  默认实现将依赖支付宝通用存储
  */
@property (nonatomic,strong) Class storageManagerClz;

/**
  分享实现类，请实现TAShareTinyAppMsgDelegate协议
  默认实现将依赖支付宝分享组件
  */
@property (nonatomic,strong) Class shareHandlerClz;

/**
 文件实现类，请实现TAFileHandlerProtocol协议
 默认实现将依赖支付宝文件组件
 */
@property (nonatomic,strong) Class fileHandlerClz;


/**
 控制小程序右上角每个条目是否展示
 */
@property (nonatomic, weak) id<TAActionSheetDelegate> actionSheetDelegate;
@end

TAConfigration * TAConfigrationGet();
