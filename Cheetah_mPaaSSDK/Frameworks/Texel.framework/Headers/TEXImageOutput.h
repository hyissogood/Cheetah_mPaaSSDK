//
//  TEXImageOutput.h
//  Texel
//
//  Created by feihu on 2018/3/1.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import "TEXFunctor.h"
#import <UIKit/UIKit.h>

@class TEXImageOutput;
@protocol TEXImageOutputDelegate <NSObject>
// 有数据更新，可以在这个回调中调用getCurrentFrame的方法来获取当前帧
- (void)imageOutputDidReceiveNewFrame:(TEXImageOutput *)imageOutput;
@end

@interface TEXImageOutput : NSObject <TEXInput>
@property (nonatomic, weak) id<TEXImageOutputDelegate> delegate;
@property (nonatomic, assign) CGSize inputSize;
@property (nonatomic, assign) BOOL needsFlip; // 如果本身就在图像坐标系中，无须上下翻转；否则需要翻转；默认为YES
@property (nonatomic, assign) AVCaptureVideoOrientation orientation;

- (UIImage *)getCurrentFrame;

@end
