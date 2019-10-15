//
//  ASTFAlertViewController.h
//  AliUpgradeUI
//
//  Created by kuoxuan on 2019/3/5.
//  Copyright © 2019 Alipay. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ASTFAlertViewController : UIViewController

+ (void)showAlertWithAppDownloadURL:(NSURL *)downloadURL;

+ (void)dismissAlert;

@end

NS_ASSUME_NONNULL_END
