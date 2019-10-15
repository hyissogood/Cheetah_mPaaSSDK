//
//  TADRemoteDebugPanel.h
//  TinyAppCommon
//
//  Created by 应俊康 on 2018/7/13.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TARemoteDebugManager;
@interface TADRemoteDebugPanel : NSObject

@property (nonatomic,weak) TARemoteDebugManager * manager;
@property (nonatomic,weak) PSDSession * session;
@property (nonatomic,assign) BOOL isLinked;

- (void)showMaskWithMessage:(NSString *)message;

- (void)hideMask;

- (void)showLinkStatePanel;

- (void)hideLinkStatePanel;

- (void)hideAll;
@end
