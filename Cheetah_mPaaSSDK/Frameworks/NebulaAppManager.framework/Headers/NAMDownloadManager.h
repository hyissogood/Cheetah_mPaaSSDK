//
//  NAMDownloadManager.h
//  NebulaAppManager
//
//  Created by 扶瑶 on 16/3/3.
//  Copyright © 2016年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

// params
extern NSString *const NAMDOWN_PARAM_KEY_FORCE;
extern NSString *const NAMDOWN_PARAM_KEY_APP;       // NAMApp object

@interface NAMDownloadTask : NSObject
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NAMDownloadFinish finish;
@property (nonatomic, weak) id tag;
@property (nonatomic, assign) BOOL canCancel;
@end

@interface NAMDownloadManager : NSObject

- (BOOL)isDownloadingApp:(NAMApp *)app;
- (void)downloadApp:(NAMApp *)app
             params:(NSDictionary *)params
            process:(NAMDownloadProcess)process
             finish:(NAMDownloadFinish)finish;
- (void)cancelAllDownloadTask;

@end
