//
//  AntLogPreference.h
//  APRemoteLogging
//
//  Created by 卡迩 on 2018/4/8.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AntLogPreference : NSObject/**.weak_definition.*/

+ (id)objectForKey:(NSString *)key business:(NSString *)business;
+ (void)setObject:(id)obj forKey:(NSString *)key business:(NSString *)business;

@end
