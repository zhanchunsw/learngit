//
//  RLOperationView.h
//  RLLibrary
//
//  Created by sun on 2018/3/7.
//  Copyright © 2018年 sun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
@interface RLOperationView : UIView
@property(nonatomic,strong)NSString *vin;
@property(nonatomic,strong)NSString *orderNumber;
@property(nonatomic,strong)NSString *userid;

// 中心管理者(管理设备的扫描和连接)
@property (nonatomic, strong) CBCentralManager *centralManager;
/**
 初始化方法
 
 @param frame frame
 @param orderNumber 订单号
 @param vin 底盘号
 @param userid 用户aid
 @return self
 */
- (instancetype)initWithFrame:(CGRect)frame
                  orderNumber:(NSString *)orderNumber
                          vin:(NSString *)vin
                       userid:(NSString *)userid;
/**
 不用- (instancetype)initWithFrame:(CGRect)frame orderNumber:(NSString *)orderNumber vin:(NSString *)vin初始化的时候,必须调用这个方法
 
 @param orderNumber 订单号
 @param vin 底盘号
 @param userid 用户aid
 */
-(void)setOrderNumber:(NSString *)orderNumber
                  vin:(NSString *)vin
               userid:(NSString *)userid;
@end
