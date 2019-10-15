//
//  NAMZipArchiveManager.h
//  NebulaAppManager
//
//  Created by 扶瑶 on 16/3/3.
//  Copyright © 2016年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NAMZipArchiveManager : NSObject

- (BOOL)isUnzipping:(NAMApp *)app;
- (void)unzipApp:(NAMApp *)app
         process:(NAMZipArchiveProcess)process
          finish:(NAMZipArchiveFinish)finish;
- (void)unzipApp:(NAMApp *)app
          params:(NSDictionary *)params
         process:(NAMZipArchiveProcess)process
          finish:(NAMZipArchiveFinish)finish;
@end
