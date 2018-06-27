//
//  IZMethodCommon.h
//  Frame_zcl
//
//  Created by 0115 on 15/8/13.
//  Copyright (c) 2015年 ihefe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



@interface IZMethodCommon : NSObject

/*
 *简单的现实弹出框
 */
+ (void)alertViewShowWithString:(NSString *)titleString;
/**简单的显示具体内容*/
+ (void)alertViewShowWithTitleString:(NSString *)titleString messageString:(NSString *)messageString;

+ (void)alertViewShowWithString:(NSString *)titleString withResponse:(void (^)(NSNumber *x))response;

+ (void)alertViewShowWithString:(NSString *)titleString withDesString:(NSString *)desString withResponse:(void (^)(NSNumber *x))response;

/**
 *  获取视图所在的   Viewcontroller
 */
+ (id)getViewControllerWithView:(id)sender;

/**
 *  获取指定的父视图 或 ViewController
 */
+ (id)getSubClass:(Class)aClass FromView:(id)sender;

/**
 *  判断一个字符串是否存在  如果不存在返回@“”
 */
+ (NSString *)zcl_judgeString:(NSString *)string;

/**
 *  判断一个字符串是否存在
 */
+ (BOOL)zcl_boolJudgeString:(NSString *)string;

/**
 *  根据文本 的 字体  长度   和宽度   计算高度
 */
+ (CGFloat)zcl_calculateTextHeight:(UIFont *)font givenText:(NSString *)text givenWidth:(float )width;


/**
 计算文本的宽度
 */
+ (CGFloat )widthForLabel:(NSString *)text fontSize:(CGFloat)font;

/**
 *  判断字符串中是否含有特殊字符
 */
+ (BOOL)zcl_judgeUnnormalCharacter:(NSString *)string;

/**
 *  当前显示的ViewController
 */
+ (UIViewController *)getCurrentVC;

/**
 *  从指定的NavigationController  中获取相应的ViewController
 */
+ (UIViewController *)zcl_getViewController:(Class)aClass FromNavigationController:(UINavigationController *)navigationController;



/**
 判断是否包含emoji字符

 @param string 字符串
 @return BOOL
 */
+ (BOOL)stringContainsEmoji:(NSString *)string;

/**
 打电话

 @param phoneNumber 电话号码
 */
+ (void)makePhone:(NSString *)phoneNumber;


/**
 添加边框
 */
+ (void)setBorderWithView:(UIView *)view top:(BOOL)top left:(BOOL)left bottom:(BOOL)bottom right:(BOOL)right borderColor:(UIColor *)color borderWidth:(CGFloat)width;



+ (void)showHeaderImageWith:(NSString *)imageIdString toButton:(UIButton *)button;
+ (void)showHeaderImageWith:(NSString *)imageIdString toImageView:(UIImageView *)imageView;


/**
 json 转字典
 */
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

/**
 字典转 json
 */
+(NSString *)jsonStringWithDictionary:(NSDictionary *)dict;

/**
 时间戳转换时间
 */
+ (NSString *)timeWithTimeIntervalString:(NSString *)timeString;

/**
 将分转化为元
 */
+ (NSString *)RMBFromPenny:(NSString *)pennyString;

@end
