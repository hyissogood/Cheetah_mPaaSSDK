//
//  TADebugPanel.h
//  TinyAppCommon
//
//  Created by 应俊康 on 2018/1/10.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

#define TA_DEBUG_PANEL @"TA_DEBUG_PANEL"

@interface TADebugPanel : NSObject

@property (nonatomic,strong) UIWebView * consoleView;

-(instancetype)initWith:(NSString*)appId;

-(void)showDebugPanel;

-(void)hideDebugPanel;

-(void)toggleDebugPanel;

-(void)destoryDebugPanel;

-(void)preLoad;
@end
