//
//  TAFileUtils.h
//  TinyappService
//
//  Created by 应俊康 on 2017/10/25.
//  Copyright © 2017年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

#define KTA_FM_UsrFileProtocol @"https://usr/"
#define KTA_FM_ResourceFileProtocol @"https://resource/"


@interface TAFileUtils : NSObject

// 小程序用户目录
+ (NSString *)getAppPathWithAppId:(NSString *)appId;

// 小程序缓存目录
+ (NSString *)getAppSavedPathWithAppId:(NSString *)appId;

// 小程序临时目录
+ (NSString *)getAppTempPathWithAppId:(NSString *)appId;

// 本地多媒体目录
+ (NSString *)getMutilMediaFilePath;

// 代码目录
+ (NSString *)getAppTarPathWithAppId:(NSString *)appId;

+ (float)fileSizeAtPath:(NSString*)path;

+ (float)folderSizeAtPath:(NSString*)path;

+ (NSData *)fileDataWithApFilePath:(NSString *)apFilePath appId:(NSString*)appId;

+ (NSData *)fileDataWithApFilePath:(NSString *)apFilePath protocol:(NSString *)protocol appId:(NSString*)appId;

+ (NSData *)fileDataWithTempFilePath:(NSString *)tempFilePath appId:(NSString*)appId;

+ (NSString *)fileTypeWithApFilePath:(NSString *)apFilePath appId:(NSString*)appId;

// 判断是否用户目录地址
+ (BOOL)isUsrUrl:(NSString *)url;

// 生成用户文件虚拟地址
+ (NSString *)createUsrUrlWithLocalId:(NSString *)localId type:(NSString *)type;

// 物理地址 & 虚拟地址互转
+ (NSString *)getMapRelationVal:(NSString *)key;

// 获取物理地址用户文件虚拟地址
+ (NSString *)getLocalURLWithAppId:(NSString *)appId path:(NSString *)path;

// 是否可写
+ (BOOL)canWriteWithWithAppId:(NSString *)appId path:(NSString *)path;

// 是否可读
+ (BOOL)canReadWithWithAppId:(NSString *)appId path:(NSString *)path;

// 防止穿越
+ (BOOL)hasDirTraversalWithPath:(NSString *)path;

// 编码映射
+ (NSStringEncoding)getEncodingType:(NSString *)encoding;

// 字符串转16进制字符串
+ (NSString *)stringToHexStr:(NSString *)string;

// 16进制字符串转字符串
+ (NSString *)hexStrToString:(NSString *)hexStr;
@end
