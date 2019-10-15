//
//  MPUtdidInterface.h
//  MPUTDIDAdapter
//
//  Created by yemingyu on 2019/2/18.
//  Copyright © 2019 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPUtdidInterface : NSObject


/**
 获取 SDK 生成的设备唯一标识

 */
+ (NSString *)deviceId;

@end

NS_ASSUME_NONNULL_END
