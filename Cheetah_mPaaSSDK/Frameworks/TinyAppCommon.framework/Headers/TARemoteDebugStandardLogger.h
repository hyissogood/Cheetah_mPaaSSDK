//
//  TAStandardDebugLogger.h
//  TinyAppCommon
//
//  Created by runfeng.crf on 2018/8/28.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString * const TAStandardDebugLogCategoryInfo = @"info";
static NSString * const TAStandardDebugLogCategoryWarn = @"warn";
static NSString * const TAStandardDebugLogCategoryError = @"error";

@interface TARemoteDebugStandardLogger : NSObject

+ (void)logNetworkInfo:(PSDSession *)session
               request:(NSURLRequest *)request
              response:(NSHTTPURLResponse *)response
          responseData:(NSData *)data
                 error:(NSError *)error
           requestTime:(NSDate *)requestTime;

+ (void)logStorageInfo:(PSDSession *)session
                 appId:(NSString *)appId
               dataKey:(NSString *)key;

+ (void)logWithCategory:(NSString *)category
                  logId:(NSString *)logId
                message:(NSString *)message
            description:(NSString *)description
                 output:(NSString *)output
                context:(PSDContext *)context
             completion:(void (^)(BOOL success, NSError *error))completion;

@end
