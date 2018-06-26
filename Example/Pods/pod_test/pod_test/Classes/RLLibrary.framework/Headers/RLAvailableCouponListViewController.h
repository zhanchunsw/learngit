//
//  RLAvailableCouponListViewController.h
//  RLLibrary
//
//  Created by sun on 2018/4/24.
//  Copyright © 2018年 sun. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^ChoosedCoupon)(BOOL ISUsed,NSDictionary *couponDic);
@interface RLAvailableCouponListViewController : UIViewController
@property(nonatomic,strong)NSString *aid;
@property(nonatomic,strong)NSString *starTime;
@property(nonatomic,strong)NSString *price;
@property (nonatomic,copy) ChoosedCoupon choosedCoupon;
@end
