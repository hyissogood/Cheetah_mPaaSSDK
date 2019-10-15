//
//  NAMContext.h
//  NebulaAppManager
//
//  Created by 扶瑶 on 16/3/2.
//  Copyright © 2016年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NAMProtocol.h"


@class NAMAppPool;
@class NAMConfigManager;
@class NAMDownloadManager;
@class NAMZipArchiveManager;
@class NAMRequestCenter;
@class NAMDataStorage;
@class NAMLogManager;
@class NAMCreditCenter;
@class NAMPublicURLManager;
@interface NAMContext : NSObject

+ (NAMContext *)shared;

+ (NAMConfigManager *)configManager;
+ (NAMDownloadManager *)downloadManager;
+ (NAMZipArchiveManager *)zipArchiveManager;
+ (NAMRequestCenter *)requestCenter;
+ (NAMDataStorage *)dataStorage;
+ (NAMCreditCenter *)creditCenter;
+ (NAMPublicURLManager *)publicURLManager;

// AppPool
+ (NAMAppPool *)appPool;
+ (NAMAppPool *)appPool:(NSString *)scene;
+ (NSArray *)allAppPools;

@end


#ifdef __cplusplus
extern "C" {
#endif
    NAMLogManager * NAMLogMgr();
#ifdef __cplusplus
}
#endif
