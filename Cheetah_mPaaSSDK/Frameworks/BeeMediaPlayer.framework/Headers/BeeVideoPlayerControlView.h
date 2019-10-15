//
//  BeeVideoPlayerControlView.h
//  BeeMediaPlayer
//
//  Created by manyi.zsf on 2017/4/10.
//  Copyright © 2017年 Alipay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IBeeVideoPlayer.h"
#import "BeeVideoPlayerToolBar.h"
#import "BeeVideoProgressView.h"
#import "BeeVideoPlayerTopBar.h"

typedef NS_ENUM(NSInteger, BeeControlMoveAction) {
    BeeControlMoveAction_Unknown,
    BeeControlMoveAction_Brightness,
    BeeControlMoveAction_Volume,
    BeeControlMoveAction_Seek
};

@protocol BeeVideoPlayerControlViewDelegate <NSObject>

- (BOOL)loadingViewCanShow;
- (void)controlViewBtnClicked:(BeeVideoPlayerBtnTag)tag;
//返回YES，可以执行相应的手势操作；返回NO，不执行
- (BOOL)shouldHandleTouchWithAction:(BeeControlMoveAction)action;
- (void)controlViewTouchBeginWithAction:(BeeControlMoveAction)action;
- (void)controlViewTouchEndWithAction:(BeeControlMoveAction)action;

@end

@interface BeeVideoPlayerControlView : UIView

@property (nonatomic, weak) id<BeeVideoPlayerControlViewDelegate> delegate;
@property (nonatomic, strong) BeeVideoPlayerTopBar *topBar;
@property (nonatomic, strong) UIView *bottomBar;
@property (nonatomic, strong) BeeVideoPlayerToolBar *toolBar;
@property (nonatomic, strong) UIButton *centerPlayBtn;
@property (nonatomic, strong) BeeVideoProgressView *progressView;
@property (nonatomic, strong) UIButton *mutedButton;
//底部控制工具条上的全屏按钮
@property (nonatomic, strong) UIButton *fullScreenButton;
//全屏时顶部返回按钮，用于退出全屏状态
@property (nonatomic, strong) UIButton *exitFullScreenBtn;
//中间播放按钮是否显示暂停状态，默认NO
@property (nonatomic, assign) BOOL isShowCenterPlayWithPauseState;

- (void)showErrorWithInfo:(NSString *)info andShowRetryBtn:(BOOL)isShow;
- (void)hideErrorView;
- (void)showTopBar:(BOOL)isShow;
- (void)showMutedButton:(BOOL)isShow;
- (void)showFullScreenButton:(BOOL)isShow;
- (void)updateUIWithState:(BEEVideoPlayerState)state;
- (void)resetUI;
- (void)showCustomBtn:(BOOL)isShow byTag:(BeeVideoPlayerBtnTag)tag;
- (void)handleFullScreen:(BOOL)isFullScreen;

@end
