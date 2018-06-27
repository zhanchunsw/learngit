//
//  GetVerifyCodeWidgets.h
//  
//
//  Created by JoeChen on 16/7/4.
//  Copyright © 2016年 . All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^CountDownBlock)(void);

@interface GetVerifyCodeWidgets : UIView

@property (strong, nonatomic) UIButton *button;


/**
 设置UI

 @param textColor 文本颜色
 @param borderColor 边框颜色
 @param radius 圆角
 */
- (void)setTextColor:(UIColor *)textColor
      andBorderColor:(UIColor *)borderColor
     andBorderRadius:(CGFloat)radius;

/**
 *  设置显示内容，默认是“获取验证码”
 *
 */
- (void)setShowContent:(NSString *)string;

/**
 *  设置倒计时的时长
 *
 *  @param second 秒
 */
- (void)setCountDownTime:(NSTimeInterval)second;

///**
// *  启动倒计时
// *
// *  @param callback 倒计时结束后的回调
// */
//- (void)startCountDownWithCallback:(CountDownBlock)callback;

/**
 *  设置点击“获取验证码”的回调 和 倒计时结束的回调
 *
 *  @param clickCallback  点击“获取验证码”的回调
 *  @param endCountDown   倒计时结束的回调
 */
- (void)setStartGetVerifyCodeCallback:(BOOL(^)(void))clickCallback
              andCountDownEndCallback:(CountDownBlock)endCountDown;

/**
 *  开启倒计时
 */
- (void)openCountDown;


/**
 *  关闭倒计时，且回到初始显示状态
 */
- (void)closeCountDown;



- (void)buttonAction;



@end
