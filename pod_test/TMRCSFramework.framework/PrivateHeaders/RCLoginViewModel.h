//
//  RCLoginViewModel.h
//  FFS_New
//
//  Created by 占 on 2017/10/28.
//  Copyright © 2017年 tjtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCLoginChildVC.h"

typedef NS_ENUM(NSUInteger, LoginType) {
    LoginType_Password,   //账号密码登录
    LoginType_VerifyCode  //验证码登录
};


@interface RCLoginViewModel : NSObject

@property (nonatomic, strong) RCLoginModel *loginModel;
@property (strong, nonatomic) UINavigationController *targetNavigationController;

/**
 登录
 
 @param userName 用户名
 @param secretKey 登录密钥
 @param loginType 登录类型
 */
- (void)loginWithUserName:(NSString *)userName
             andSecretKey:(NSString *)secretKey
                  andType:(RCLoginChildVCStyle)loginType withCompelet:(void (^) (BOOL success))success;

/**自动登录*/
+ (void)automaticLoginResponse:(void (^)(BOOL success))response;

+ (void)justAutomaticLoginResponse:(void (^)(BOOL success))response;


@end
