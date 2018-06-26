//
//  RLCommentsViewController.h
//  RLLibrary
//
//  Created by sun on 2018/3/5.
//  Copyright © 2018年 sun. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^JumpTODetailedCost)(UIViewController *VC);
@interface RLCommentsViewController : UIViewController
@property (nonatomic,copy) JumpTODetailedCost jumpThePayment;

@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *allBtns;
@property (strong, nonatomic)NSString *orderNumber;
@property (strong, nonatomic)NSString *paymentStatus;//支付状态
@property (strong, nonatomic)NSString *money;
@property (strong, nonatomic)NSString *rentalLocation;//租车地点
@property (strong, nonatomic)NSString *returnCarLocation;//还车地点
@property (strong, nonatomic)NSString *userid;//用户id
@end
