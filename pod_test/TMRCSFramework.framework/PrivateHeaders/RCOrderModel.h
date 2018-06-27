//
//  RCOrderModel.h
//  FFS_New
//
//  Created by 占 on 2017/11/6.
//  Copyright © 2017年 tjtech. All rights reserved.
//

#import "RCBaseModel.h"

@interface RCOrderModel : RCBaseModel

/**
 * 订单状态
 *
 * @author Administrator
 */
//typedef NSUInteger ReservationOrderStatus;
//NS_ENUM (ReservationOrderStatus) {
//    OPEN,     // 刚创建
//    ALLOCATED,      // 已分配车辆状态
//    AUTHORIZED,// 已授权控制
//    PICKED_UP,// 已取车
//    DROPPED_OFF,// 已还车
//    PAID,   // 已支付
//    RETURN_OVERDUE,  // 逾期未还车
//    PAYMENT_OVERDUE,  // 逾期未支付
//    CANCELLED   // 已取消
//};




@property (nonatomic, copy  ) NSString<Optional>*oId;
@property (nonatomic, copy  ) NSString<Optional>*no;                    // 订单No
@property (nonatomic, copy  ) NSString<Optional>*status;                // 订单状态
@property (nonatomic, copy  ) NSString<Optional>*vehicleNo;            // 车辆NO
@property (nonatomic, copy  ) NSString<Optional>*vehicleSeriesName;    // 车系名称
@property (nonatomic, copy  ) NSString<Optional>*vehicleBrandName;    // 车品牌
@property (nonatomic, copy  ) NSString<Optional>*vehiclePicUrlId;                // 车辆图片ID
@property (nonatomic, copy  ) NSString<Optional>*plateLicenseNo;        // 车牌号
@property (nonatomic, copy  ) NSString<Optional>*reservationLocationNo;        // 取车站NO
@property (nonatomic, copy  ) NSString<Optional>*reservationLocationName;        // 取车站名称
@property (nonatomic, copy  ) NSString<Optional>*reservationLocationAddress;    // 取车站地址
@property (nonatomic, copy  ) NSString<Optional>* reservationLocationLongitude;    // 取车场站经度
@property (nonatomic, copy  ) NSString<Optional>*                 reservationLocationLatitude;    // 取车场站纬度
@property (nonatomic, copy  ) NSString<Optional>*returnLocationNo;                // 还车场站NO
@property (nonatomic, copy  ) NSString<Optional>* returnLocationName;            // 还车场站名称
@property (nonatomic, copy  ) NSString<Optional>*returnLocationAddress;        // 还车场站地址
@property (nonatomic, copy  ) NSString<Optional>*returnLocationLongitude;        // 还车场站经度
@property (nonatomic, copy  ) NSString<Optional>*returnLocationLatitude;        // 还车场站纬度
@property (nonatomic, copy  ) NSString<Optional>*reservationTime;        // 下单时间
@property (nonatomic, copy  ) NSString<Optional>*pickedUpTime;            // 取车时间
@property (nonatomic, copy  ) NSString<Optional>*droppedOffTime;        // 还车时间
@property (nonatomic, copy  ) NSString<Optional>*startOdometer;            // 起始里程
@property (nonatomic, copy  ) NSString<Optional>*endOdometer;            // 终止里程
@property (nonatomic, copy  ) NSString<Optional>*startEnergyPercent;    // 起始电量/油量百分比
@property (nonatomic, copy  ) NSString<Optional>*endEnergyPercent;        // 终止电量/油量百分比
@property (nonatomic, copy  ) NSString<Optional>*odometer;        // 行驶里程
@property (nonatomic, copy  ) NSString<Optional>*time;            // 行驶时间
@property (nonatomic, copy  ) NSString<Optional>*payment;        // 订单费用
@property (nonatomic, copy  ) NSString<Optional>*timeCost;        // 每分钟价格
@property (nonatomic, copy  ) NSString<Optional>*distanceCost;    // 每公里价格
@property (nonatomic, copy  ) NSString<Optional>*minPrice;        // 最低价格
@property (nonatomic, copy  ) NSString<Optional>*enrolleeId;    // 租车人id
@property (nonatomic, copy  ) NSString<Optional>*comment;        // 是否已经评价
@property (nonatomic, copy  ) NSString<Optional>*score;            // 评分
@property (nonatomic, copy  ) NSString<Optional>*content;        // 评论内容
@property (nonatomic, copy  ) NSString<Optional>*phone;        // 租车人手机号
@property (nonatomic, copy  ) NSString<Optional>*scheduledPickedUpTime;        // 预约取车时间
@property (nonatomic, copy  ) NSString<Optional>*scheduledDroppedOffTime;    // 预约换车时间
@property (nonatomic, copy )  NSString<Optional>*type;                // 订单类型

@property (nonatomic, copy  ) NSString<Optional>*                sustainedMileage;    // 续航里程
@property (nonatomic, copy  ) NSString<Optional>* disregardCost;
/**用车时间  精确到秒*/
@property (nonatomic, copy  ) NSString<Optional>* second;
/**取车时间  精确到秒*/
@property (nonatomic, copy  ) NSString<Optional>* orderSecond;
/**车辆实时的预估费用*/
@property (nonatomic, copy  ) NSString<Optional>* estimates;
/**底盘号*/
@property (nonatomic, copy  ) NSString<Optional>* vehicleVin;

// 距离当前时间
- (NSDateComponents *)compoment :(double)date1;

- (NSString *)getUseTime;

- (NSString *)getNeedPayment;

@end
