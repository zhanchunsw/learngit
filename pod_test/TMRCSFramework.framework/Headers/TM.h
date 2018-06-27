//
//  TM.h
//  test
//
//  Created by 占 on 2018/3/1.
//  Copyright © 2018年 tima. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TM : NSObject

/**获取用户信息  ---需登录后才可获取用户数据*/
+ (NSDictionary *)getUserInfo;
/**获取登录成功后返回的信息（包含用户ID）  ---需登录后才可获取用户数据*/
+ (NSDictionary *)getLoginInfo;

/**获取订单详情  ---需要生成订单之后才能获取到当前订单详情*/
+ (void )getCurrentOrder:(void (^)(NSDictionary *responseObject, NSError *error))response;

@end
