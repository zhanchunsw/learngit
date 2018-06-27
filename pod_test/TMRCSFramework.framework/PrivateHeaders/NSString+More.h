//
//  NSString+More.h
//  Carpool
//
//  Created by 占 on 2017/5/17.
//  Copyright © 2017年 tjtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (More)

- (NSString *)returnJudgeString;


/**
 将时间戳转化成   07：00格式
 */
- (NSString *)returnHourAndMinuteTime;

- (BOOL)isChinese;

/**将时间戳转化为 YYYYMMdd */
- (NSString *)timeByStandardYYYYMMdd;

/**将时间戳转化为 YYYYMMdd */
- (NSString *)timeByStandardYYYYMMddHHmmss;

- (NSString *)timeWithTimeInterval;

//判断手机号码格式是否正确
+ (BOOL)valiMobile:(NSString *)mobile;

/**隐藏手机号中间4位*/
+ (NSString *)numberSuitScanf:(NSString*)number;
/**合法的邮箱地址*/
+ (BOOL) validateEmail:(NSString *)email;
/**判断是否含有非法字符 yes 有  no没有*/
- (BOOL)JudgeTheillegalCharacter;
/**判断身份证是否合法*/
- (BOOL)judgeIdentityStringValid;


@end
