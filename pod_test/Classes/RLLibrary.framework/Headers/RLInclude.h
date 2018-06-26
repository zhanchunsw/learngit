//
//  RLInclude.h
//  Lease
//
//  Created by sun on 2018/3/5.
//  Copyright © 2018年 sun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^ISJumpThePayment)(BOOL jump,NSDictionary *location);
typedef void(^JumpTODetailedCost)(UIViewController *VC);
typedef void(^ChoosedCoupon)(BOOL ISUsed,NSDictionary *couponDic);
typedef void(^ShareDone)(BOOL success);
@interface RLInclude : NSObject
//分享统一采用OpenShare 设置微信分享key
+(void)setWexinKey;
/**
 *  控车的view:RLOperationView
 *  还车的view:RLReturnCarView
 *  开始订单结束订单的view:RLChangeOrderStatusView
 *  车辆信息下面保留时间蓝牙连接的view:RLVehicleInformationView
 */


/**
 评论页面

 @param orderNumber 订单号
 @param userid 用户aid
 @param paymentStatus 支付状态
 @param money 支付价格
 @param rentalLocation 租车地点
 @param returnCarLocation 还车地点
 @param jump 跳转费用详细页回调
 @return 评论页面
 */
+ (UIViewController *)getRLCommentsViewControllerWithorderNumber:(NSString *)orderNumber
                                                          userid:(NSString *)userid
                                                   paymentStatus:(NSString *)paymentStatus
                                                           money:(NSString *)money
                                                  rentalLocation:(NSString *)rentalLocation
                                              returnCarLocation :(NSString *)returnCarLocation
                                              JumpTODetailedCost:(JumpTODetailedCost)jump;
;

/**
 还车操作弹窗
 用[self presentJKPopupViewController:[RLInclude                getRLReturnCarViewControllerWithVin:self.vin isJumpThePayment:^(BOOL jump) {
 
 *  }]];调用
 @param vin 底盘号
 @param userid 用户aid
 @param isJumpThePayment 是否需要跳转支付页回调 坐标
 @return 还车操作弹窗
 */
+ (UIViewController *)getRLReturnCarViewControllerWithVin:(NSString *)vin
                                                   userid:(NSString *)userid
                                         isJumpThePayment:(ISJumpThePayment)isJumpThePayment;


/**
 查询优惠券列表

 @param userid 用户aid
 @return 查询优惠券列表界面
 */
+(UIViewController *)getRLCouponListViewControllerWithUserid:(NSString *)userid;

/**
 查询可使用优惠券列表
 
 @param userid 用户aid
 @param endtime 订单结束时间 格式yyyy-MM-dd HH:mm:ss
 @param price 订单价格
 @param choosedCoupon 是否使用优惠券,选择优惠券的信息:
                                                id:优惠券id
                                                preferentialway:优惠方式（0是折扣，1是满减，2是现金）
                                                starttime:开始时间
                                                preferentialprice:优惠程度（当preferentialway=0是折扣数，                                     preferentialway=1是现金数）
                                                carAttribute:车辆属性
                                                overtimeFlag:过期标识（0为未过期、1为已过期）
                                                couponname:优惠券名称
                                                endtime:结束时间
                                                couponuseStatus:优惠券使用状态（0为未使用，1为已使用
                                                fullcutprice:满足金额
 @return 查询优惠券列表界面
 */
+(UIViewController *)getRLAvailableCouponListViewControllerWithUserid:(NSString *)userid
                                                              endtime:(NSString *)endtime
                                                                price:(NSString *)price
                                                        choosedCoupon:(ChoosedCoupon)choosedCoupon;


/**
 获取违章查询页面
 @param userid 用户aid
 @return  获取违章查询页面
 */
+(UIViewController *)getPeccancyInformationListViewControllerWithUserid:(NSString *)userid;

//广告页面
+(UIViewController *)getRLAdvertisementViewController;

/**
 评论分享页面

 @param aid 钛马用户aid
 @param orderNo 订单号
 @param shareDone 分享回调
 @return 评论分享页面
 */
+(UIViewController *)getRLCommentShareViewControllerwithaid:(NSString *)aid orderNo:(NSString *)orderNo ShareDone:(ShareDone)shareDone;
@end





@interface NSBundle (RL)
+(NSBundle *)RLResourceBundle;
@end


@interface  UIImage (RL)
+ (UIImage*)RLImageNamed:(NSString*)imgName;
@end
