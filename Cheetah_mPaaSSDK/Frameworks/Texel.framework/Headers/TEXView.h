//
//  TEXView.h
//  Texel
//
//  Created by Cloud on 2017/5/1.
//  Copyright © 2017年 Alipay. All rights reserved.
//

#import "TEXFunctor.h"
typedef void (^TEXViewCompleteHandler)(BOOL result);  //埋点使用

@interface TEXView : UIView <TEXInput>

@property (nonatomic, assign) BOOL needsFlip;

@property (nonatomic, strong) TEXViewCompleteHandler completeHandler; //埋点使用

@end
