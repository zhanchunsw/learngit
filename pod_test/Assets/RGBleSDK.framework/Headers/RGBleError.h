//
//  RGBleError.h
//  RGBleSDK
//
//  Created by zhang chunhui on 2018/5/21.
//  Copyright © 2018年 RoilandGroup. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString * const RGBleErrorDomain;

typedef NS_ENUM(NSInteger, RGBleErrorCode) {
    
    RGBleErrorUnknow = 0,
    RGBleErrorTicketInvalidCode , //ticket nil 或空 或解析出来数据结构不正确
    RGBleErrorRequestTimeoutCode,//请求超时
    RGBleErrorConnectTimeoutCode,
    RGBleErrorNotAvailableCode, //当前蓝牙连接不可用，可能是当前为连接
    RGBleErrorResultFailedCode, //执行结果失败
} ;

@interface RGBleError : NSError

@property(nonatomic,strong)NSArray *errModelList;//暂时无用，无需关注

//失败的任务
//@property(nonatomic,strong)SocketMission *errMission;

//@property(nonatomic,assign)SocketType socketType;

@end
