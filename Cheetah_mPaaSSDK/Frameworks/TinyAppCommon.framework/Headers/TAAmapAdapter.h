//
//  TAAmapAdapter.h
//  TinyAppCommon
//
//  Created by 应俊康 on 2018/10/29.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <mPaas/APBase64.h>

@class H5WebViewController;
@class PSDContext;
@class H5Service;
@protocol PSDExpandoProtocol;

@interface NSData(AmapAdapter)

- (NSString*)base64EncodedString;

@end


@interface NSString(AmapAdapter)

- (NSString*)base64EncodedString;

- (NSString*)MD5String;
@end

@interface PSDContext(AmapAdapter)

- (H5WebViewController*)currentViewController;

@end

@interface H5WebViewController(AmapAdapter) <PSDExpandoProtocol>

@end
