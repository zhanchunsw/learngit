//
//  RLReturnView.h
//  RLLibrary
//
//  Created by sun on 2018/3/7.
//  Copyright © 2018年 sun. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^ISJumpThePayment)(BOOL jump,NSDictionary *location);
@interface RLReturnCarView : UIView
@property(nonatomic,strong)NSString *vin;
@property(nonatomic,strong)NSString *userid;
@property (nonatomic,copy) ISJumpThePayment jumpThePayment;

/**
 还车view

 @param frame frame
 @param vin 底盘号
 @param userid 用户aid
 @return self
 */
- (instancetype)initWithFrame:(CGRect)frame
                          vin:(NSString *)vin
                       userid:(NSString *)userid
             isJumpThePayment:(ISJumpThePayment)isJumpThePayment;


/**
 不用- (instancetype)initWithFrame:(CGRect)frame vin:(NSString *)vin userid:(NSString *)userid初始化的时候,必须调用这个方法

 @param vin 底盘号
 @param userid 用户id
 */
-(void)setVin:(NSString *)vin
       userid:(NSString *)userid
isJumpThePayment:(ISJumpThePayment)isJumpThePayment;
@end
