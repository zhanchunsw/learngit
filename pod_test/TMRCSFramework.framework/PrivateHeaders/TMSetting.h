//
//  TMSetting.h
//  test
//
//  Created by 占 on 2018/3/1.
//  Copyright © 2018年 tima. All rights reserved.
//

#ifndef TMSetting_h
#define TMSetting_h

//#import "TestViewController.h"

#define UrlString @"tmuat.cmsp.faw-vw.com:8443/rcs/"

// ** 高德地图
static NSString* kAmapAPPID = @"6a9dde536d2b353d3a4e42edbb957a7f";

#define kMainBlueColor [UIColor colorWithHexString:@"#2d9efc"]
#define WS(key) autoreleasepool{} __weak typeof(key) weak##key = key;
#define kProgressShowTime 1.2
#define kProgressShowTimeMore 1.0
#define kUUID [[[UIDevice currentDevice] identifierForVendor] UUIDString]
// ** 个推的客户ID ，一个设备的clientId是一样的，保存到本地
#define kGTClientId @"GTClientId"
#define kTokenOverdue_tryToRelogin @"当前登陆已过期，是否重新登陆?"
// ** 登录成功之后保存的token
#define kOneToken @"user_uniqueToken"

// ** 登录成功之后保存的token(用于设备提出功能)
#define kX_AUTO_TOKEN @"X-AUTH-TOKEN"

//#define testString @"123123"

#import "IZMethodCommon.h"
#import "RCAllRequest.h"
#import "UserAccountManager.h"
#import "RCBaseViewController.h"
#import "AFNetworking/AFNetworking.h"
#import "ReactiveCocoa/ReactiveCocoa.h"
#import "NSString+More.h"
#import "MJRefresh/MJRefresh.h"

//#import <AFNetworking/AFNetworking.h>

//#import <AMapFoundationKit/AMapFoundationKit.h>
//#import <MAMapKit/MAMapKit.h>
#import <SVProgressHUD/SVProgressHUD.h>
//#import <ReactiveCocoa.h>
#import <Masonry.h>
#import <YYModel.h>
#import <JSONModel/JSONModel.h>
#import <YYCategories/YYCategories.h>
//#import <IQKeyboardManager.h>
#import <PINCache/PINCache.h>
#import <MAMapKit/MAMapKit.h>


#endif /* TMSetting_h */
