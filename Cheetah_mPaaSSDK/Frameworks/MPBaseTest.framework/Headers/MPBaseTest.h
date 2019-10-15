//
//  MPBaseTest.h
//  MPBaseTest
//
//  Created by yemingyu on 2019/2/20.
//  Copyright © 2019 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPBaseTest : NSObject


/**
 子类都需要实现此方法，实现自动化用例调用

 */
+ (void)runAllTestCase;

@end

NS_ASSUME_NONNULL_END
