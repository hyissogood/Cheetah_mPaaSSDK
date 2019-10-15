//
//  TARemoteDebugManager.h
//  TinyAppCommon
//
//  Created by 应俊康 on 2018/7/9.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <NebulaTinyapp/NBTinyappConfiguration.h>
#import "TADRemoteDebugPanel.h"

#define kTADRemoteDebug_DebugManager @"kTADRemoteDebug_DebugManager"

@interface TARemoteDebugManager : NSObject <NBTinyappRemoteDebugerDelegate>

@property (nonatomic,strong) TADRemoteDebugPanel * panel;

- (instancetype)initWithSession:(PSDSession *)session;

+ (BOOL)isRemoteDebugOpen:(PSDSession*)session;

- (void)startRemoteDebug;

- (void)sendMessage2Remote:(NSString *)msg;

- (void)closeRemoteDebug;
@end
