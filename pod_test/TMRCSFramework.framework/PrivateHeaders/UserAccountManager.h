//
//  UserAccountManager.h
//  Carpool
//
//  Created by 占 on 2017/6/20.
//  Copyright © 2017年 tjtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCLoginModel.h"
#import "RCUserInfoModel.h"
@interface UserAccountManager : NSObject
/**存储session*/
@property (nonatomic, copy) NSString *sessionString;
/**存储已经获取的验证码*/
@property (nonatomic, copy) NSString *verificationCode;
/**账号踢出用的token*/
@property (nonatomic, copy) NSString *x_auto_tokenString;
/**登录成功之后返回的模型*/
@property (nonatomic, strong) RCLoginModel *loginModel;
/**详细的用户信息*/
@property (nonatomic, strong) RCUserInfoModel *userInfoModel;
/**当前订单*/
//@property (nonatomic, strong) RCOrderModel *orderModel;

+ (UserAccountManager *)shareInstance;
/**获取当前订单 并保存起来*/
+ (void)request_getCurrentOrderWithObject:(void (^)(BOOL success))response;
/**获取当前用户信息并保存起来*/
+ (void)request_getUserInfo:(void (^)(BOOL success))response;
/**
 跳到登陆界面进行登陆
 */
+ (void)toLoginVCWithTitle:(NSString *)titleString;

@end
