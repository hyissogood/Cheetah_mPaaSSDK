//
//  TAActionSheetHandler.h
//  TinyappService
//
//  Created by 闻蹊 on 2018/4/26.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <NebulaSDK/NebulaSDK.h>

@protocol TAActionSheetProtocol;
@protocol TAActionSheetDataSource;
@class H5WebViewController;

@protocol TAActionSheetDelegate <NSObject>

- (BOOL)shouldActionSheetShow:(NSString*)type forApp:(NSString*)appId;

@end


@interface TAActionSheetHandler : NSObject<TAActionSheetProtocol,TAActionSheetDataSource>

@property (nonatomic, weak) PSDKernel               *target;
@property (nonatomic, weak) H5WebViewController     *webVC;
@property (nonatomic, copy) NSString                *appId;


@end
