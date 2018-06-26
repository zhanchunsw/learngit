//
//  RLOpenCarView.h
//  RLLibrary
//
//  Created by sun on 2018/3/7.
//  Copyright © 2018年 sun. All rights reserved.
//
//订单状态view
#import <UIKit/UIKit.h>
typedef void(^ShouldReloadParent)(id dataInfo,BOOL success);
@interface RLChangeOrderStatusView : UIView

@property (nonatomic,copy)ShouldReloadParent shouldReloadParent; //订单开始取消的回调

@property(nonatomic,strong)NSString *vin;
@property(nonatomic,strong)NSString *orderNumber;
@property(nonatomic,strong)NSString *phone;
@property(nonatomic,strong)NSString *userid;
/**
 初始化方法
 
 @param frame frame
 @param orderNumber 订单号
 @param vin 底盘号
 @param phone 电话号
 @param userid 用户aid
 @return self
 */
- (instancetype)initWithFrame:(CGRect)frame
                  orderNumber:(NSString *)orderNumber
                          vin:(NSString *)vin
                        phone:(NSString *)phone
                       userid:(NSString *)userid;


/**
 不用- (instancetype)initWithFrame:(CGRect)frame orderNumber:(NSString *)orderNumber vin:(NSString *)vin初始化的时候,必须调用这个方法
 
 @param orderNumber 订单号
 @param vin 底盘号
 @param phone 电话号
 @param userid 用户aid
 */
-(void)setOrderNumber:(NSString *)orderNumber
                  vin:(NSString *)vin
                phone:(NSString *)phone
               userid:(NSString *)userid;
@end