//
//  RCAllRequest.h
//  FFS_New
//
//  Created by 占 on 2017/10/27.
//  Copyright © 2017年 tjtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCLoginModel.h"
#import "RCUserInfoModel.h"
#import "RCOrderModel.h"


#define kSuccessStatus @"success"




@interface RCAllRequest : NSObject
/**获取图片URl*/
+ (NSString *)getImageURLWithString:(NSString *)string;

+ (NSString *)getUrlStringWithTailString:(NSString *)tailString;
+ (void)request_getVerifierWithDic:(NSDictionary *)dic returnWithObject:(void (^)(NSDictionary *responseObject, NSError *error))response;

+ (void)request_loginWithDic:(NSDictionary *)dic returnWithObject:(void (^)(RCLoginModel *responseObject, NSError *error))response;

+ (void)request_getUserInforeturnWithObject:(void (^)(RCUserInfoModel *responseObject, NSError *error))response;

+ (void)request_putUserInforeturnWithDic:(NSDictionary *)dic returnWithObject:(void (^)(RCUserInfoModel *responseObject, NSError *error))response;

+ (void)request_updatePasswordWithDic:(NSDictionary *)dic returnWithObject:(void (^)(NSDictionary *responseObject, NSError *error))response;
/**
 评论反馈
 */
+ (void)request_feedbackWithDic:(NSDictionary *)dic returnWithObject:(void (^)(NSDictionary *responseObject, NSError *error))response;
/**
 忘记密码
 */
+ (void)request_forgetPasswordWithDic:(NSDictionary *)dic returnWithObject:(void (^)(NSDictionary *responseObject, NSError *error))response;
/**
 修改手机号
 */
+ (void)request_resetPhoneNumWithDic:(NSDictionary *)dic returnWithObject:(void (^)(NSDictionary *responseObject, NSError *error))response;
/**获取当前订单*/
+ (void)request_getCurrentOrderWithObject:(void (^)(RCOrderModel *responseObject, NSError *error))response;


/**
 验证验证码
 */
+ (void)request_checkVerificationCodeWithString:(NSDictionary *)dic returnWithObject:(void (^)(NSDictionary *responseObject, NSError *error))response;

/**
 注册页面
 */
+ (void)request_registWithDic:(NSDictionary *)dic returnWithObject:(void (^)(NSDictionary *responseObject, NSError *error))response;

// ***********
/**
 公司列表
 */
+ (void)request_companyListWithDic:(NSDictionary *)dic returnWithObject:(void (^)(NSArray *responseObject, NSError *error))response;
/**
 验证公司域账号
 */
+ (void)request_verifyCompanyWithDic:(NSDictionary *)dic returnWithObject:(void (^)(NSDictionary *responseObject, NSError *error))response;


@end
