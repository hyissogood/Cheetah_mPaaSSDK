//
//  TAJsApi4ShareTinyAppMsg.h
//  TinyAppCommon
//
//  Created by 应俊康 on 2018/4/8.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <NebulaSDK/NebulaSDK.h>

@protocol TAShareTinyAppMsgDelegate <NSObject>

/**
 分享代理方法

 @param
 url:       分享的支付宝scheme,无需关注
 title:     分享的文本标题
 desc:      分享的具体内容
 content:   吱口令
 image:     分享的图片
 
 @param callback 分享完成的callback
 callback(@{@"success":@"YES"})表示分享成功
 callback(@{@"success":@"NO"})表示分享失败
 */
-(void)startShareTinyApp:(NSDictionary*)param callback:(PSDJsApiResponseCallbackBlock)callback;

@end

@interface TAJsApi4ShareTinyAppMsg : PSDJsApiHandler

@end
