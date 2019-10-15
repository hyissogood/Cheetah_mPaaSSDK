//
//  APDynamicDeploymentSyncHandler.h
//  DynamicDeployment
//
//  Created by majie on 16/7/1.
//  Copyright © 2016年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface APDynamicDeploymentSyncHandler : NSObject

+ (void)responseLongLinkNotification:(NSNotification *)notification forBizName:(NSString *)bizName;

- (void)resolveForNotification:(NSNotification *)notification;

@end
