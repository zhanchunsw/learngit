//
//  RGBleController.h
//  RGBleSDK
//
//  Created by zhang chunhui on 2018/5/21.
//  Copyright © 2018年 RoilandGroup. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RGBleError.h"
//蓝牙链接状态
typedef  NS_ENUM(NSInteger, RGBleStatus) {
    
    RGBleStatusDisConnected, //未连接
    RGBleStatusConnecting,   //连接中
    RGBleStatusConnected     //已连接
};

//指令执行过程（暂时无用）
typedef  NS_ENUM(NSInteger, RGBleProcess) {
    
    RGBleProcessSendingSuccess,  //发送成功
    RGBleProcessSendingFailed,   //发送失败
    RGBleProcessExeSuccess,      //指令执行成功
    RGBleProcessExeFailed,       //指令执行失败
};


@interface RGBleController : NSObject


/**
 单例方法

 @return 返回一个单例
 */
+(instancetype)shareController;


/**
 开始连接蓝牙

 @param ticket 授权票据
 @param resultBlock 执行结果 isSuccess=NO时，error不为nil
 */
-(void)connectWithTicket:(NSString *)ticket
                  result:(void(^)(BOOL isSuccess, RGBleError * error))resultBlock;


/**
 断开连接
 */
-(void)disConnect;


/**
 连接状态

 @return 返回当前连接状态（已连接、未连接、连接中）
 */
-(RGBleStatus)connectingStatus;

/**
 车辆启动

 @param exeSuccess 执行成功
 @param exeFailed  执行失败
 */
-(void)ignitionWithExeSuccess:(void(^)(id))exeSuccess
               exeFailed:(void(^)(RGBleError *bleError))exeFailed;


/**
 车辆熄火

 @param exeSuccess 执行成功
 @param exeFailed 执行失败
 */
-(void)flameoutWithExeSuccess:(void(^)(id))exeSuccess
                    exeFailed:(void(^)(RGBleError *bleError))exeFailed;


/**
 车辆解锁

 @param exeSuccess 执行成功
 @param exeFailed 执行失败
 */
-(void)unlockingWithExeSuccess:(void(^)(id))exeSuccess
                     exeFailed:(void(^)(RGBleError *bleError))exeFailed;


/**
 车辆上锁

 @param exeSuccess 执行成功
 @param exeFailed 执行失败
 */
-(void)onlockingWithExeSuccess:(void(^)(id))exeSuccess
                     exeFailed:(void(^)(RGBleError *bleError))exeFailed;


/**
 声寻车

 @param exeSuccess 执行成功
 @param exeFailed 执行失败
 */
-(void)searchingCarWithExeSuccess:(void(^)(id))exeSuccess
                        exeFailed:(void(^)(RGBleError *bleError))exeFailed;


/**
 光寻车

 @param exeSuccess 执行成功
 @param exeFailed 执行失败
 */
-(void)lightFlickerWithExeSuccess:(void(^)(id))exeSuccess
                        exeFailed:(void(^)(RGBleError *bleError))exeFailed;


@end
