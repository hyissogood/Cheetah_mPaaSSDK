//
//  NPJsApiHandler4GetSystemInfo.h
//  NebulaPlugins
//
//  Created by theone on 16/10/10.
//  Copyright © 2016年 Alipay. All rights reserved.
//

#import <NebulaPoseidon/NebulaPoseidon.h>

@protocol TAJsApi4GetSystemInfoImp <NSObject>

@optional

-(NSDictionary*)extendSystemInfo:(PSDContext*)context;

@end

@interface NPJsApiHandler4GetSystemInfo : PSDJsApiHandler<TAJsApi4GetSystemInfoImp>

@end
