//
//  RLReturnCarViewController.h
//  RLLibrary
//
//  Created by sun on 2018/3/7.
//  Copyright © 2018年 sun. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^ISJumpThePayment)(BOOL jump,NSDictionary *location);
@interface RLReturnCarViewController : UIViewController
@property (nonatomic,copy) ISJumpThePayment jumpThePayment;
@property(nonatomic,strong)NSString *vin;
@property(nonatomic,strong)NSString *userid;
@end
