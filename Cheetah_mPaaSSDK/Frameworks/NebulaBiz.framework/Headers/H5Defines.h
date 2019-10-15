//
//  H5Defines.h
//  H5Service
//
//  Created by xuesi on 13-12-14.
//  Copyright (c) 2013年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import <APLanguage/APLanguage.h>

#define H5ServiceIOSClassic() ([UIDevice currentDevice].systemVersion.floatValue < 7.0f)

#define kH5RPCErrorDomain @"com.alipay.h5service"
#define kH5MopAppBizScenario @"scanApp"
#define kH5MopAppClassName @"APScanViewController"
#define kH5MopAppBizScenarioDefaultTitle __TEXT(@"NebulaBiz", @"NebulaBiz:扫码", @"扫码")
#define kH5SocialAppBizScenario @"HiChat"
#define kH5ScanAppId @"10000007"
#define kH5SanAppUseScan @"useScan"


#define kH5AlipayCustomScheme @"^(alipass|alipays|alipayqr|alipay|alipaywifi)$" // 因为这些scheme在rc包上加了rc后缀，所以要用openuRL来打开

// 动态插件Scheme
#define kJSCorePluginScheme @"jsplugin"
#define kJSCorePluginNotification @"jsPluginLoad"

#define H5Log(error) NSLog(@"%s %@", __func__, error)

// 服务端报错页面文案
#define kH5ServerErrorText __TEXT(@"NebulaBiz", @"NebulaBiz:服务暂不可用", @"服务暂不可用")

// 社交拦截错误页面
#define kH5CompetitiveLinkGoUrl @"https://ds.alipay.com/error/securityLink.htm"
#define kH5CompetitiveSchemeGoUrl @"https://ds.alipay.com/error/redirectLink.htm"
#define kH5CompetitiveNotSupportFileGoUrl @"https://ds.alipay.com/error/securityFile.htm"
#define kH5PermissionLinkGoUrl @"https://render.alipay.com/p/s/h5misc/resource_error"
#define kH5BridgePath  @"https://xalipaynebula/xalipaynebulabridge/xalipaynebulabridge.js"
#define kH5ReportUrl  @"https://securityassistant.alipay.com/flow/enterFlow.htm?flowId=complain_normal_h5&complainScene=complain&complainSubScene=normal_h5&oppositeUserId=2088232588425283&linkUrl=%@&complainSource=%@"


// 日志头
#define kH5LogHeaderError @"H-EM"
#define kH5LogHeaderBehavior @"H5-VM"
#define kH5LogHeaderBehaviorAuto @"HD-VM"
#define kH5LogHeaderCommon @"H-MM"

// 日志类型
#define kH5LogBizType135 @"135"
#define kH5LogBizTypeBehavior @"H5behavior"

// 公用
#define kH5CustomStorage  @"KH5CUSTOMSTORAGE"

//*******************************ExpandPropertyKeys***************************//
//#define kExpandPropertyKey_Beacon                @"kExpandPropertyKey_Beacon"
#define kExpandPropertyKey_Accelerometer         @"kExpandPropertyKey_Accelerometer"
#define kExpandPropertyKey_IsWatchShake          @"kExpandPropertyKey_IsWatchShake"
#define kExpandPropertyKey_WatchShakeCallback    @"kExpandPropertyKey_WatchShakeCallback"
#define kExpandPropertyKey_IsMonitorAccelerometer @"kExpandPropertyKey_IsMonitorAccelerometer"
#define kExpandPropertyKey_RemoteLogCallCount    @"kExpandPropertyKey_RemoteLogCallCount"
#define kExpandPropertyKey_Pay                   @"kExpandPropertyKey_Pay"
#define kExpandPropertyKey_Share                 @"kExpandPropertyKey_Share"
#define kExpandPropertyKey_SpeechRecognizer      @"kExpandPropertyKey_SpeechRecognizer"
#define kExpandPropertyKey_NumberInput           @"kExpandPropertyKey_NumberInput"
#define kExpandPropertyKey_Contact               @"kExpandPropertyKey_Contact"
#define kExpandPropertyKey_ActionSheet           @"kExpandPropertyKey_ActionSheet"
#define kExpandPropertyKey_DatePicker            @"kExpandPropertyKey_DatePicker"
#define kExpandPropertyKey_City                  @"kExpandPropertyKey_City"
#define kExpandPropertyKey_Location              @"kExpandPropertyKey_Location"
#define kExpandPropertyKey_ImagePicker           @"kExpandPropertyKey_ImagePicker"
#define kExpandPropertyKey_ScanCode              @"kExpandPropertyKey_ScanCode"
#define kExpandPropertyKey_Sms                   @"kExpandPropertyKey_Sms"
#define kExpandPropertyKey_Sinasso               @"kExpandPropertyKey_Sinasso"
#define kExpandPropertyKey_ShouldStart           @"kExpandPropertyKey_ShouldStart"
#define kExpandPropertyKey_NotifyListener        @"kExpandPropertyKey_NotifyListener"
#define kExpandPropertyKey_SaveWebImage          @"kExpandPropertyKey_SaveWebImage"
#define kExpandPropertyKey_Compass               @"kExpandPropertyKey_Compass"
#define kExpandPropertyKey_IsWatchCompass        @"kExpandPropertyKey_IsWatchCompass"
#define kExpandPropertyKey_WatchCompassCallback  @"kExpandPropertyKey_WatchCompassCallback"
#define kExpandPropertyKey_Gyro                  @"kExpandPropertyKey_Gyro"
#define kExpandPropertyKey_IsWatchGyro           @"kExpandPropertyKey_IsWatchGyro"
#define kExpandPropertyKey_WatchGyroCallback     @"kExpandPropertyKey_WatchGyroCallback"
#define kExpandPropertyKey_RotateProxy           @"kExpandPropertyKey_RotateProxy"
#define kExpandPropertyKey_AppJSPermission       @"kExpandPropertyKey_AppJSPermission"
#define kExpandPropertyKey_AppShouldDelayRelease @"kExpandPropertyKey_AppShouldDelayRelease"
#define kExpandPropertyKey_JSCViewId             @"kExpandPropertyKey_JSCViewId"
#define kExpandPropertyKey_MainDocRequestFinish  @"kExpandPropertyKey_MainDocRequestFinish"
#define kExpandPropertyKey_CodeTriggerloading    @"kExpandPropertyKey_CodeTriggerloading"

#define kExpandPropertyKey_IsMainSession         @"kExpandPropertyKey_IsMainSession"
#define kExpandPropertyKey_PairSession           @"kExpandPropertyKey_PairSession"
#define kExpandPropertyKey_Processing            @"kExpandPropertyKey_Processing"
#define kExpandPropertyKey_ProcessResult         @"kExpandPropertyKey_ProcessResult"
#define kExpandPropertyKey_DestroyTask           @"kExpandPropertyKey_DestroyTask"
#define kExpandPropertyKey_SaveTask              @"kExpandPropertyKey_SaveTask"
#define kExpandPropertyKey_ReadyTask             @"kExpandPropertyKey_ReadyTask"
#define kExpandPropertyKey_CancelTask            @"kExpandPropertyKey_CancelTask"


#define kExpandPropertyKey_H5WebViewController_will_loadErrorHtml             @"H5WebViewController_will_loadErrorHtml"


// navBar动画 底部bar的tag
#define kH5NavigationBarImageViewTag             10000



// 新框架params字典key定义
#define kPSDSessionData             @"kPSDSessionData"
#define kPSDSessionPopData          @"kPSDSessionPopData"
#define kPSDSessionOriginalParams   @"kPSDSessionOriginalParams"
#define kPSDSessionResumeParams     @"kPSDSessionResumeParams"
#define kPSDSessionPSDType          @"kPSDSessionPSDType"
#define kPSDSessionPreRenderQueue   @"kPSDSessionPreRenderQueue"
#define kPSDSessionH5Mode           @"kPSDSessionH5Mode"
#define kPSDSessionH5IsAuthed       @"kPSDSessionH5IsAuthed"
#define kPSDSessionLaunchParams     @"kPSDSessionLaunchParams"
#define kPSDSessionReservedParams   @"kPSDSessionReservedParams"

#define kPSDSceneOptionsParam       @"kPSDSceneOptionsParam"
#define kPSDSceneStartRender        @"kPSDSceneStartRender"
#define kPSDSceneFinishRender       @"kPSDSceneFinishRender"
#define kPSDSceneFavoritesInfo      @"kPSDSceneFavoritesInfo"
#define kPSDSceneAddAsChildVc       @"kPSDSceneAddAsChildVc"
#define kPSDSceneIsPreRender        @"kPSDSceneIsPreRender"




//**********************************JSApis******************************//

#define kH5JSApi_numInput                           @"numInput"
#define kH5JSApi_inputFocus                         @"inputFocus"
#define kH5JSApi_inputBackFill                      @"inputBackFill"
#define kH5JSApi_numInputReset                      @"numInputReset"
#define kH5JSApi_inputBlur                          @"inputBlur"
#define kH5JSApi_hideCustomKeyBoard                 @"hideCustomKeyBoard"
#define kH5JSApi_resizeCustomKeyBoard               @"resizeNativeKeyBoardInput"
#define kH5JSApi_resetCustomKeyBoard                @"resetNativeKeyBoardInput"
#define kH5JSApi_UpdateCustomKeyBoard               @"updateNativeKeyBoardInput"
#define kH5JSApi_createInput                        @"createInput"
#define kH5JSApi_hideBackButton                     @"hideBackButton"
#define kH5JSApi_showBackButton                     @"showBackButton"
#define kH5JSApi_showAlert                          @"showAlert"
#define kH5JSApi_alert                              @"alert"
#define kH5JSApi_confirm                            @"confirm"
#define kH5JSApi_prompt                             @"prompt"
#define kH5JSApi_showFavorites                      @"showFavorites"
#define kH5JSApi_hideFavorites                      @"hideFavorites"
#define kH5JSApi_showPopMenu                        @"showPopMenu"
#define kH5JSApi_hidePopMenu                        @"hidePopMenu"
#define KH5JSApi_enableSPDY                         @"enableSPDY"




//**********************************Event******************************//

#define kH5Event_Scene_WebView_Reload                   @"scene.webview.reload"
#define kH5Event_Scene_NavigationBar_ChangeColor        @"scene.NavigationBar.ChangeColor"
#define kH5Event_Service_RPC_Finished                   @"service.rpc.finished"
#define kH5Event_Session_KeepAlive_Before               @"session.keepAlive.before"
#define kH5Event_Scene_Pre_Render                       @"scene.pre.render"
#define kNBEvent_Scene_LoadRequest_First_Start          @"scene.loadRequest.first.start" //
#define kH5Event_Service_Browser_RestartTrueAppId       @"service.browser.restartTrueAppId"
#define kH5Event_Scene_Jsapi_GetAuthCode_Before         @"scene_jsapi_getAuthCode_before"
#define kH5Event_Scene_Gesture_Start_Before             @"scene.gesture.start.before"
#define kH5Event_Service_App_Should_Delay_Release       @"service.app.should.delay.release"


//**********************************UI******************************//
#define kH5_NavigationBar_Default_Color             [UIColor whiteColor]




//**********************************ERROR******************************//

// 错误域
#define H5ErrorDomainNetwork  @"H5ErrorDomainNetwork"     // 网络错误
#define H5ErrorDomainVerify   @"H5ErrorDomainVerify"      // 校验错误

// 校验错误码
typedef NS_ENUM(NSInteger, H5VerifyErrorCode) {
    H5VerifyErrorCodeUrlVerifyFailed = 0    // 入口url校验失败
};

//**********************************FLAG******************************//

#define kH5Flag_independentSession @"kH5Flag_independentSession"
#define kH5Flag_currentappShouldForceExit  @"kH5Flag_currentappShouldForceExit"
#define kH5Flag_shouldForceNotUseCachedApp  @"kH5Flag_shouldForceNotUseCachedApp"
#define kH5DefaultColor 0xFFFFFFFF
#define kH5WhiteColor 0xFFFFFF
#define kH5Flag_didRedirectResponseOmitErrorPage  @"kH5Flag_didRedirectResponseOmitErrorPage"

//**********************************APConfig******************************//

#define kH5NewCompetitiveList          @"h5_newcompetitiveList"
#define kH5SyncInjectJS                @"h5_syncinjectjs"
#define kH5ConstrainedToH5             @"h5_cashierPopWindow" // 与收银台合并开关，并且不缓存，popWindow操作时，限定退出当前session的最顶上一个H5窗口
#define kH5EnableCleanUrl              @"h5_enableCleanUrl" // 埋点非唯一信息的url内容，均将query和fragment去除
#define kH5MaxUrlLogLength             @"h5_maxUrlLogLength" // 唯一信息的URL内容，限制长度
#define kH5MaxRouterUrlLogLength       @"h5_maxRouterUrlLogLength" // 性能埋点中的router记录，限制长度
#define kH5SwitchTabUseAppRoot         @"h5_SwitchTabUseAppRoot" //switchTab时，回退到root操作，使用app.rootViewController
#define kH5RouterRule4IndustryService  @"h5_routerRule4IndustryService" //行业专用路由配置
#define kH5RouterRuleGeneral           @"h5_routerRuleGeneral" //通用路由配置
#define kH5JSBridgeRewriteStr          @"h5_jsBridgeRewriteStr"  //同步js重写的字符串
#define kH5JsapiAndPluginsConfig       @"h5_jsapiandPluginsConfig"  //js和plugin动态配置列表  since 10.1.22
#define kH5ShouldCheckNBSession        @"h5_shouldCheckNBSession"   //是否在离线包匹配的时候检查是否是当前session的请求
#define kH5ThirdDisclaimerRules        @"h5_thirdDisclaimer_rules"  //第三方提示规则
#define kH5MainLinkConfig              @"h5_mainLinkConfig" //主链路监控配置
#define kH5ShouldHookUserDefault       @"h5_shouldHookUserDefault" //wk是否应该hook userdefault
#define kH5ShouldUseNewRelanch         @"h5_shouldUseNewRelanch" //是否要使用新的relanch方案 10.1.28
#define kH5NewJsapiPermissionConfig    @"h5_newJsapiPermissionConfig" //新权限开关控制开关 10.1.28
#define kH5NewJsapiDomainWhiteList     @"h5_newJsapiDomainWhiteList"
#define kH5NewJsapiClearCache          @"h5_newJsapiClearCache"
#define kH5NetworkChannelConfig        @"h5_networkChannel"           // network channel config
#define kH5NetStatLog                  @"h5_netstatlog"               // network perf log
#define kH5ForceWKWhiteList            @"h5_forceWKWhiteList"         // force WK white list
#define kH5ShouldFixTitleView          @"h5_shouldFixTitleView"       //是否需要修复TitleView问题，全局性的所以加一个开关
#define kH5FetCountryCode              @"h5_fetchCountrycode"         // 10.1.28(获取城市码防护性开关,无问题后续可移除)
#define kH5PayPrompt                   @"h5_payPrompt"                //快捷提示条是否展示开关
#define kH5PayPromptAddOrderStrParam   @"h5_payPromptAddOrderStrParam"  //是否给支付追加字符串
#define kTASceneValueMap               @"ta_scene_cfg"                  //10.1.30小程序场景值映射
#define kH5WKShouldFixUrlProtocol      @"h5_WKShouldFixUrlProtocol"     //10.1.30WK是否修复urlprotocolbug
#define kH5PushWindowDelayTask         @"h5_pushWindowDelayTask"        //10.1.30PushWindow支持延迟任务
#define kH5ShouldCallJSAPIWithService  @"h5_shouldCallJSAPIWithService" //10.1.30 session已销毁时，不回调"接口找不到"
#define kH5AdjustTitleViewFrame        @"h5_adjustTitleViewFrame"       //10.1.30 界面出现后检查标题栏
#define kH5ShouldFixTinyAppRelease     @"h5_shouldFixTinyAppRelease"    //10.1.30是否需要修复小程序内嵌WebView问题
#define kH5NewGetAuthCode              @"h5_newGetAuthCodeConfig"       //10.1.32新的授权逻辑相关配置
#define kH5DataFlowConfig              @"h5_dataFlowConfig"             //10.1.32 流量管控开关
#define kH5WKShouldUseUrlSchemeHandler @"h5_WKShouldUseUrlSchemeHandler" //10.1.32 iOS是否用新的拦截协议
#define kH5EnableCancelEventLog        @"h5_enableCancelEventLog"        //10.1.32 是否上报取消事件埋点
#define kH5WKShouldFixScrollHorizontal @"h5_WKShouldFixScrollHorizontal" //10.1.32 是否修复WK水平滚动问题
#define kH5TinyAppPublicUrl            @"h5_tinyAppPublicUrl"            //10.1.32 套壳小程序中的h5全局资源加速开关
#define kTAShouldUseCustomUAForRequest @"ta_shouldUseCustomUA"           //10.1.32小程序httpRequest请求添加默认UA对齐安卓
#define kTAShouldAddOldUAForRequest    @"ta_shouldAddOldUA"              //10.1.32小程序httpRequest默认UA是否追加之前老的系统UA
#define kH5ShouldFixUIWebViewBridge    @"h5_shouldFixUIWebViewBridge"    //10.1.32修复UIWebview iframe 引起Bridge重新创建的问题
#define kH5SchemeCensorEnable          @"h5_schemeCensorEnable"          //10.1.32框架scheme管控配合改造
#define kH5RPCPrefetchSPM              @"h5_rpc_prefetch_spm"            //10.1.32道朗RPC时在WK下主动读取SPM
#define kH5AuthAutoRPCEnable           @"h5_authAutoRPCEnable"           //10.1.32开启OPENAUTH转RPC
#define kH5DeprecateShowTitleBar       @"h5_deprecateShowTitleBar"       //10.1.32废弃SDK使用启动参数showTitleBar
#define kH5TransparentCustomedPopGesture       @"h5_transparentCustomedPopGesture"       //10.1.32侧滑手势到transpent页面时，优化白条
#define kH5UnifyNetworkCallbackThread  @"h5_unifyNetworkCallbackThread"  //10.1.32是否统一网络请求回调到同一个线程中
#define kTATransferH5ToTiny             @"ta_h5TransferTiny"             //10.1.32H5改小程序样式appId列表
#define kH5ShouldCollectUnfinishedUrl   @"h5_shouldCollectUnfinishedUrl"  //10.1.32未完成url采集逻辑有改动，开关控制是否采集
#define kH5EnableGlobalPreloadTask     @"h5_enableGlobalPreloadTask"     //10.1.32启动加载时预创建WKWebView
#define kH5ShouldFixResumeUnique       @"h5_shouldFixResumeUnique"       //10.1.32修复不动唯一启动单例APP
#define kH5GetReferWithAppId           @"h5_getReferWithAppId"           //10.1.35iOS小程序http请求追加referer
#define kH5ShouldWKAutoLoginSyncCookie @"h5_shouldWKAutoLoginSyncCookie" //10.1.32是否在给WKWebView同步Cookie加保护
#define kH5ShouldRecordCookieUserConfig @"h5_shouldRecordCookieUserConfig"  //10.1.32记录用户cookie的白名单用于排查问题
#define kH5ShouldWKInPageRenderConfig   @"h5_WKInPageRenderConfig"  //10.1.35同层渲染开关
#define kH5ResourceFilter1             @"h5_ResourceFilter1"              //10.1.35通过开关黑名单过滤子资源，开关1
#define kH5ResourceFilter2             @"h5_ResourceFilter2"              //10.1.35通过开关黑名单过滤子资源，开关2
#define kH5GetSharedDataFix             @"h5_getSharedDataFix"            //10.1.35支持屏蔽NSUserDefault读取
#define kH5SyncAutoLoginConfig         @"h5_syncAutoLogin"                //10.1.35同步免登开关
#define kH5LogGroup                    @"h5_logGroup"                     //10.1.35异常埋点打标标记用户类型
#define kH5TinyAppRemoteDebugLog       @"h5_tinyAppRemoteDebugLog"        //10.1.35小程序真机调试日志输出
#define kH5WKWebViewFix                @"h5_wkWebViewFix"                 //10.1.35修复历史版本对线上页面的使用问题
#define kH5WKWebViewArbitrary          @"h5_wkArbitrary"                  //10.1.35全量开启WKWebView
#define kH5WKWebViewBlackList          @"h5_wkBlackList"                  //10.1.35容器紧急止血
#define kH5ShouldWKDispatchStartEvent  @"h5_shouldWKDispatchStartEvent"   //10.1.35容器WKWebView是否需要针对非http请求派发事件
#define kH5SkipCustomPrompt            @"h5_skipCustomPrompt"             //10.1.35修复电话弹两次的问题
#define kH5ShouldWKDispatchStartEvent  @"h5_shouldWKDispatchStartEvent"   //10.1.35容器WKWebView是否需要针对非http请求派发事件
#define TA_SAFE_COOKIE_STORAGE_WHITE_LIST   @"ta_cookie_part_wl"              //10.1.35小程序 cookie 安全，同一域下不同小程序分离存储白名单
#define kH5TextareaSwitch            @"h5_TextareaSwitch"             //10.1.35 textarea 开关
#define kH5CheckAppPkgStatus           @"h5_checkAppPkgStatus"            //10.1.35容器checkApp接口是否返回包状态开关
#define kH5PingIgnoreUnexpectedPacket  @"h5_pingIgnoreUnexpectedPacket"   //10.1.38容器pingHelper忽略异常包开关
#define kH5ShouldSubViewDispatchAppEvent     @"h5_shouldSubViewDispatchAppEvent" //10.1.38容器subview是否派发appResume/appPause事件
#define kH5WKUseDaemonView     @"h5_wkUseDaemonView" //10.1.38容器wkwebivew使用栈顶view保活进程
#define kH5ShouldFixGetAuthCode     @"h5_shouldFixGetAuthCode" //10.1.38兜底处理框架currentVisibleViewController取到为nil，导致高德授权弹不出
#define kH5ShouldFixVideoStatusBar   @"h5_shouldFixVideoStatusBar" //10.1.38修复视屏播放全屏退出后状态栏丢失问题
#define kH5APDataStorageConfig       @"h5_apDataStorageConfig" //10.1.38对setAPDataStorage和getAPDataStorage安全加固
#define kH5ShouldKeyboardFixCursor   @"h5_shouldKeyboardFixCursor"//10.1.38修复删除的时候光标到末尾问题

// 首页标识
#define kNBLogSessionDidShowEntrance @"NBLogSessionDidShowEntrance"
#define kNBLogPageIsEntrance @"NBLogPageIsEntrance"
