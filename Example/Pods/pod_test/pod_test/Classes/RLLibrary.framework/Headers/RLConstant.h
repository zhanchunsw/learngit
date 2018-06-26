//
//  RLConstant.h
//  RLLibrary
//
//  Created by sun on 2018/3/8.
//  Copyright © 2018年 sun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RLInclude.h"
#import "RLNetWorkEnviromentNumber.h"

#define URI_SERVER_ADDRESS [[RLNetWorkEnviromentNumber sharedManager]netWorkEnviromentNumber] == 0 ? @"https://rluat.cmsp.faw-vw.com" : @"https://rlprod.cmsp.faw-vw.com"
#define URI_INTERFACE_ROOT @"/interfaces"
#define URI_INTERFACE_KEY [[RLNetWorkEnviromentNumber sharedManager]netWorkEnviromentNumber] == 0 ?@"63629f9e687a433aae42c125ec323e5e": @"85ece5e6e7604e7eab008ab84b696d01"

//#pragma mark ====================================接口================================
//评价
#define URI_INTERFACES_MOBILITY_EVALUATE @"saveMobilityEvaluate"
//查询评价内容
#define URI_INTERFACES_EVALUATE @"evaluateByOrderNumbers"
//获取预约车辆剩余时间
#define URI_INTERFACES_VEHICLERESERCATIONS_TIME @"getVehicleReservationsTime"

//取消预约车辆
#define URI_INTERFACES_VEHICLERESERCATIONS_CANCLE @"cancelVehicleReservations"

//开始订单
#define URI_INTERFACES_VEHICLERESERCATIONS_BAGIN @"beginvehiclereservations"

//下发授权指令接口
#define URI_INTERFACES_AUTH @"auth"

//获取授权认证信息接口
#define URI_INTERFACES_GET_AUTH_KEY @"getAuthKey"

//查询工单列表
#define URI_INTERFACES_SELECTWORKORDER_LIST @"selectWorkorderListByAidAndStatus"

//工单状态修改
#define URI_INTERFACES_UPDATEWORKORSER_STATUS @"updateWorkorderStatus"

//查询实时行车数据（还车时获取信息）
#define URI_INTERFACES_DRIVING_DATA @"drivingData"

//下发还车指令接口
#define URI_INTERFACES_CHECKCAR @"checkCar"

//获取还车结果接口
#define URI_INTERFACES_GET_CHECKCAR_CODE @"getCheckCarCode"


//控车 
#define URI_INTERFACES_CONTROL_CAR @"controlCar"

//查询优惠券
#define URI_INTERFACES_SELECTCOUPON_LIST @"selectCouponList"
//查询可用优惠券
#define URI_INTERFACES_SELECTSTARTEDCOUPON_LIST @"selectStartedCoupon"
//违章查询
#define URI_INTERFACES_SELECTILLEGAL_LIST @"selectIllegalListByUserid"
//广告
#define URI_INTERFACES_SELECTADVERT_LIST @"selectAdvertList"
//发放魔豆
#define URI_INTERFACES_GRANT_MAGIC_BEAN @"grantMagicBean"
@interface RLConstant : NSObject

@end
