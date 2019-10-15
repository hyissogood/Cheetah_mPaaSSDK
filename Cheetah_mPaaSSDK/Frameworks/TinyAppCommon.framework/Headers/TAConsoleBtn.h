//
//  TAConsoleBtn.h
//  TinyAppCommon
//
//  Created by 应俊康 on 2018/1/12.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TADebugPanel.h"

@interface TAConsoleBtn : NSObject

@property (nonatomic,strong) TADebugPanel * debugPanel;

- (instancetype)initWith:(NSString*)appId;

-(void)showBtn;

-(void)hideBtn;

@end
