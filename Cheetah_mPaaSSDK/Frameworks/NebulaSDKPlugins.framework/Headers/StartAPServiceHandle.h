//
//  StartAPServiceHandle.h
//  NebulaSDKPlugins
//
//  Created by weiting.luo on 2019/1/15.
//  Copyright © 2019 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StartAPServiceHandle : NSObject

+(instancetype)shareInstance;

-(void)handleUrl:(NSURL*)url;

@end
