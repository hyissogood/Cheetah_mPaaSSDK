//
//  TAPerformancePanel.h
//  TinyAppCommon
//
//  Created by 应俊康 on 2018/1/10.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>


#define TA_PERFORMANCE_PANEL    @"TA_PERFORMANCE_PANEL"
@interface TAPerformancePanel : NSObject

@property (nonatomic,assign) CGFloat panelWidth;
@property (nonatomic,assign) CGFloat panelHeight;
@property (nonatomic,assign) BOOL shouldResume;
@property (nonatomic,strong) NSString * appId;

-(instancetype)initWithAppId:(NSString*)appId;

-(void)showPerformancePanel;

-(void)hidePerformancePanel;
@end
