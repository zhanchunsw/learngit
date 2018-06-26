//
//  CBTracking.h
//  CBTracking
//
//  Created by Owen.li on 2017/9/1.
//  Copyright © 2017年 Owen.li. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    BATCH = 0,          //Send Data When Start
    REALTIME = 1       //RealTime Send Policy
    //INTERVAL = 2
} ReportPolicy;

typedef NS_ENUM(NSInteger, CBTrackingMode){
    CBTrackingModeDevelopment = 0, // 开发测试环境
    CBTrackingModeProduction, // 线上生产环境
};

@interface CBTracking : NSObject

@property (nonatomic) BOOL isLogEnabled;                //是否打印日志，默认是NO

+ (CBTracking *)defaultTracking;
/**
 向平台注册第三方应用

 @param appSecret 平台生成的appSecret
 @param mode   开发模式
 CBTrackingModeDevelopment是开发者模式
 CBTrackingModeProduction是生产环境
 开发过程中，请使用开发者模式。
 上线前务必切换成生产环境。
 */
+ (void)startWithAppSecret:(NSString*)appSecret
           trackingMode:(CBTrackingMode)mode;

/**
 向平台注册第三方应用
 
 @param appSecret 平台生成的appSecret
 @param mode   开发模式
 CBTrackingModeDevelopment是开发者模式
 CBTrackingModeProduction是生产环境
 开发过程中，请使用开发者模式。
 上线前务必切换成生产环境。
 @param policy 同步策略
 */
+ (void)startWithAppSecret:(NSString*)appSecret
           trackingMode:(CBTrackingMode)mode
           ReportPolicy:(ReportPolicy)policy;

/**
 开始页面统计
 建议在进入- (void)viewWillAppear:(BOOL)animated;中调用.
 如果是程序首页，务必调用+ (void)startTracPage:(NSString*)page_name mainViewController:(BOOL)isMain方法，并将isMain传入YES
 @param page_name 页面名称
 */
+ (void)startTracPage:(NSString*)page_name;
+ (void)startTracPage:(NSString*)page_name mainViewController:(BOOL)isMain;

/**
 结束页面统计
 建议在进入- (void)viewWillDisappear:(BOOL)animated;中调用.
 
 @param page_name 页面名称
 */
+ (void)endTracPage:(NSString*)page_name;

/**
 *    @method    trackEvent
 *   统计自定义按钮事件（可选），如购买动作
 *    @param     eventName     事件名称（自定义）
 */
+ (void)trackEvent:(NSString *)eventName;

/**
 统计switch按钮事件

 @param eventName 事件名称（自定义）
 */
+ (void)trackSwitchEvent:(NSString *)eventName;

/**
 统计推送消息

 @param messageName 消息名称
 @param ID 推送唯一标识
 */
+ (void)trackPushMessage:(NSString *)messageName pushID:(NSString *)ID;

/**
 *  是否打开调试日志
 *
 *  @param isLogEnabled 是返回YES,否返回NO
 */
+ (void)setIsLogEnabled:(BOOL)isLogEnabled;

/**
 保存错误信息
 */
+ (void)saveErrorLog;

/**
 存储用户id

 @param userid 用户id
 */
+ (void)bindUserIdentifier:(NSString *)userid;

/**
 存储用户姓名

 @param userName 用户姓名
 */
+ (void)bindUserName:(NSString *)userName;

/**
 存储用户电话

 @param mobilePhone 用户电话
 */
+ (void)bindUserMobilePhone:(NSString *)mobilePhone;

/**
 存储用户身份证号

 @param IDCard 身份证号
 */
+ (void)bindUserIDCard:(NSString *)IDCard;

/**
 存储车辆vin码

 @param code vin码
 */
+ (void)bindCarVinCode:(NSString *)code;
@end
