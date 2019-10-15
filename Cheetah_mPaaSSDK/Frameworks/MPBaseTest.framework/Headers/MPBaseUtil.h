//
//  MPBaseUtil.h
//  MPBaseTest
//
//  Created by yemingyu on 2019/2/20.
//  Copyright © 2019 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface MPBaseUtil : NSObject

/**
 日志打印
 
 @param tag 建议@"MPAdapter"
 @param componentTag 组件标志，例如 RPC
 @param format 字符串格式
 @param ... 字符串，例如 @"拦截器 检测通过"
 */
void MPAdapterLog(NSString *tag, NSString *componentTag, NSString *format, ...);


/**
 hook 实例方法

 @param cls 目标类
 @param origSEL 目标方法
 @param newSEL 替换后的方法
 @return YES 表示成功，NO表示失败
 */
BOOL mpUtil_exchangeMethod(Class cls, SEL origSEL, SEL newSEL);


/**
 hook 类方法
 
 @param cls 目标类
 @param origSEL 目标方法
 @param newSEL 替换后的方法
 @return YES 表示成功，NO表示失败
 */
BOOL mpUtil_exchangeClassMethod(Class cls, SEL origSEL,SEL newSEL);

@end

NS_ASSUME_NONNULL_END
