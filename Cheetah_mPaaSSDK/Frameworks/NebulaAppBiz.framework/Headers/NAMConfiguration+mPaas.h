//
//  NAMConfiguration+mPaas.h
//  NebulaAppBiz
//
//  Created by 扶瑶 on 2018/4/19.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NAMConfiguration (mPaas)
@property (nonatomic, assign) BOOL useRpcModel;     // reqMode:http/rpc, default:NO (http)

@end
