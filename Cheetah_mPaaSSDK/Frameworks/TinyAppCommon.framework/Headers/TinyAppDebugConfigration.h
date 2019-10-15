//
//  TinyAppDebugConfigration.h
//  TinyAppDebug
//
//  Created by 应俊康 on 2018/7/4.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TinyAppDebugProtocol.h"

@interface TinyAppDebugConfigration : NSObject

/**
 是否开启远程真机调试
 */
@property (nonatomic,assign) BOOL enableRemoteDebug;

/**
 调试助手代理
 */
@property (nonatomic,weak) id<TinyAppDebugDelegate> tinyAppDebugDelegate;
@end

TinyAppDebugConfigration * TinyAppDebugConfigrationGet();
