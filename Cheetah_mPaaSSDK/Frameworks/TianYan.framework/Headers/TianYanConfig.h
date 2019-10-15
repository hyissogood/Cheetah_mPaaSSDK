//
//  TianYanConfig.h
//  TianYan
//
//  Created by myy on 16/4/18.
//  Copyright © 2016年 Alipay. All rights reserved.
//

#define kFPSFirstLevelLagInterval   (0.1f)
#define kFPSSecondLevelLagInterval  (0.2f)
#define kFPSThirdLevelLagInterval   (0.5f)
#define kFPSFouthLevelLagInterval   (1.0f)

//#define kFPSLowLagInterval 0.2f
//#define kFPSMidLagInterval 0.5f
//#define kFPSHigLagInterval 1.f

#define kFPSFirstLevelLagWeight     (0.3f)
#define kFPSSecondLevelLagWeight    (1.f)
#define kFPSThirdLevelLagWeight     (1.5f)
#define kFPSFouthLevelLagWeight     (2.25f)


//#define kFPSLowLagWeight 1.f
//#define kFPSMidLagWeight 1.5f
//#define kFPSHigLagWeight 2.25f



/**
 *  天眼SDK配置参数的结构。
 */
@interface TianYanConfig : NSObject

/** 通用参数。客户端App的版本号。SDK用来区分App是否有版本变化。必须设置。 */
@property (nonatomic, strong) NSString* ClientVersion;

/** 通用参数。通用监控周期。SDK用来做电量消耗等的周期性指标计算。单位：秒。默认1800秒。可以不设置。 */
@property (nonatomic, assign) double MonitorPeriod;

/** 性能参数。App运行时，是否全程进行流畅度检测。线上版本建议为NO，内部版本建议为YES。默认为NO。可以不设置 */
@property (nonatomic, assign) BOOL IsAlwaysFPSCheck;

/** 性能参数。App运行后，流畅度检测时间。IsAlwaysFPSCheck为YES时，该值无效。单位：秒。默认600秒。可以不设置 */
@property (nonatomic, assign) int  FPSMaxCheckTime;

/** 性能参数。App运行后，判断是否卡顿的标准值。卡顿判断时间＝该值＊0.25秒。线上版本建议为9，内部版本建议为3。默认为9。可以不设置 */
@property (nonatomic, assign) int  LagJudgeValue;

/** 性能参数。App运行后，卡顿发生时，是否抓取调用堆栈。内部版本建议为YES。默认为NO。可以不设置 */
@property (nonatomic, assign) BOOL IsCatchStackOnLag;

/** 性能参数。App运行后，卡顿发生时，如果抓取调用堆栈，两次抓取间隔的保护时间。单位：秒。默认60秒。可以不设置 */
@property (nonatomic, assign) int  LagCatchStackMinInterval;

/** 电量参数。是否开启CPU周期性检测。默认为YES。可以不设置 */
@property (nonatomic, assign) BOOL IsCPUCheck;

/** 内存参数。是否开启ViewController的内存泄漏检测。建议测试版本为YES。默认为NO。可以不设置 */
@property (nonatomic, assign) BOOL IsMemLeakCheckVCs;

/** 内存参数。如果开启了ViewController的内存泄漏检测，这里设置需要过滤掉的ViewController前缀。默认为空。可以不设置 */
@property (nonatomic, strong) NSArray* MemLeakCheckFilterVCs;

/** 存储参数。检查存储空间的周期性间隔值，到后台时判断检测。单位：秒。默认1800秒。可以不设置 */
@property (nonatomic, assign) int StorageCheckInterval;

/** 存储参数。检查存储空间时，配置的多媒体文件路径。可以不设置 */
@property (nonatomic, strong) NSArray* StorageCheckMultiMediaPaths;

/** 性能参数。是否开启性能周期性检测。默认为YES。可以不设置 */
@property (nonatomic, assign) BOOL IsPerformanceCheck;

/** 性能参数。传入当前productionVersion，作为使用卡顿捕获策略还是流畅度监控策略的依据，如果不传，则不监控*/
@property (nonatomic, strong) NSString *productionVersion;

/** 性能参数。传入当前UTDID，作为使用卡顿捕获策略还是流畅度监控策略的依据，如果不传，则不监控*/
//@property (nonatomic, strong) NSString *UTDID;

/** 性能参数。传入当前userId，作为使用卡顿捕获策略还是流畅度监控策略的依据，如果不传或者未登陆，则为流畅度监控策略*/
@property (nonatomic, strong) NSString *currentUserId;

/** 性能参数。传入当前UTDID，作为使用12306卡顿捕获策略还是流畅度监控策略的依据，如果不传或者未登陆，则为流畅度监控策略*/
@property (nonatomic, strong) NSString *UTDID;

// 性能参数。传入设定的筛选值，0-10，和上边的参数搭配使用，如果UTDID hash之后%10在productionVersion hash之后%10~传入的筛选值productionVersion hash之后%10 + lagMonitorTenPercent-1之间，则使用卡顿捕获策略，剩下的从再相应便宜fpsMonitorTenPercent使用流畅度监控策略，如果到10了，则转到0，不能有重叠部分，即两个值相加不能超过10
/** 性能参数，卡顿监控占比，以10%为单位，如果设为3，即30%*/
@property (nonatomic, assign) NSUInteger lagMonitorTenPercent;

/** 性能参数，流畅度监控占比，以10%为单位，如果设为3，即30%*/
@property (nonatomic, assign) NSUInteger fpsMonitorTenPercent;

// 小程序 卡顿／流畅度 监控开关
@property (nonatomic, assign) BOOL tinyAppLagFpsMonitorEnable;

// 小程序 流畅度
@property (nonatomic, assign) NSUInteger tinyAppLagMonitorTenPercent;

// 小程序 卡顿
@property (nonatomic, assign) NSUInteger tinyAppFpsMonitorTenPercent;

@end



