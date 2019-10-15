//
//  TADebuggerManager.h
//  TinyAppCommon
//
//  Created by 应俊康 on 2018/7/23.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TADebugPanel.h"
#import "TAPerformancePanel.h"
#import "TAConsoleBtn.h"
#import "TARemoteDebugManager.h"

@interface TADebuggerManager : NSObject

@property (nonatomic, weak) PSDSession *currentSession;

+ (NSString *)parentAppIdWithSession:(PSDSession *)session;

+ (BOOL)isDebugPanelWithSession:(PSDSession *)session;

+ (BOOL)isRemoteDebugOpen:(PSDSession *)session;

+ (BOOL)isRemoteDebugOpenByAppId:(NSString *)appId;

-(BOOL)openDebug4App:(NSString*)appId;

-(BOOL)closeDebug4App:(NSString*)appId;

-(BOOL)openPerformance4App:(NSString*)appId;

-(BOOL)closePerformance4App:(NSString*)appId;

- (BOOL)openRemoteDebug4Session:(PSDSession *)session;

- (BOOL)closeRemoteDebug4AppId:(NSString *)appId;

-(BOOL)isAppOpenDebug:(NSString*)appId;

-(BOOL)isAppOpenPerformance:(NSString*)appId;

-(TAConsoleBtn*)console4AppId:(NSString*)appId;

-(TAPerformancePanel*)performancePanel4AppId:(NSString*)appId;

- (TARemoteDebugManager *)remoteDebugManager4AppId:(NSString *)appId;

-(BOOL)injuectDebugJs4Session:(PSDSession *)session;

- (void)injectDebugConsoleJS;

-(void)hideAll4AppId:(NSString *)appId;

- (void)evaluateJSInDebugConsole:(NSString *)appId script:(NSString *)script;
@end

TADebuggerManager * TADebuggerManagerGet();
