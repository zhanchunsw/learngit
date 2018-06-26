//
//  RLCouponModel.h
//  RLLibrary
//
//  Created by sun on 2018/4/24.
//  Copyright © 2018年 sun. All rights reserved.
//

#import "RLBaseModel.h"

@interface RLCouponModel : RLBaseModel
@property(nonatomic,strong)NSString *preferentialway;//优惠方式（0是折扣，1是满减，2是现金）
@property(nonatomic,strong)NSString *starttime;
@property(nonatomic,strong)NSString *preferentialprice;//优惠程度（当preferentialway=0是折扣数，                                     preferentialway=1是现金数）
@property(nonatomic,strong)NSString *carAttribute;//车辆属性
@property(nonatomic,strong)NSString *overtimeFlag;//过期标识（0为未过期、1为已过期）
@property(nonatomic,strong)NSString *couponname;//优惠券名称
@property(nonatomic,strong)NSString *ID;
@property(nonatomic,strong)NSString *endtime;
@property(nonatomic,strong)NSString *couponuseStatus;//优惠券使用状态（0为未使用，1为已使用
@property(nonatomic,strong)NSString *fullcutprice;//满足金额
@property(nonatomic,strong)NSString *count;//最大页数
/**
 查询优惠券列表

 @param param pageon:当前页数  pageonCount:每页显示的条数 aid:钛马用户id starttime:订单结束时间
 @param success success
 @param falure falure
 */
+ (void)selectCouponList:(NSDictionary *)param
                 success:(void(^)(NSUInteger count,NSArray *list,NSString *msg))success
                  falure:(void(^)(NSError *error))falure;
/**
 查询可用优惠券列表
 
 @param param pageon:当前页数  pageonCount:每页显示的条数 aid:钛马用户id starttime:订单结束时间 price:订单价格
 @param success success
 @param falure falure
 */
+ (void)selectAvailableCouponList:(NSDictionary *)param
                 success:(void(^)(NSUInteger count,NSArray *list,NSString *msg))success
                  falure:(void(^)(NSError *error))falure;
@end
