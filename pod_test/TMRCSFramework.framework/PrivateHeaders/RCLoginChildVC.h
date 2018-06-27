//
//  RCLoginChildVC.h
//  FFS_New
//
//  Created by 占 on 2017/10/30.
//  Copyright © 2017年 tjtech. All rights reserved.
//

#import "RCBaseViewController.h"

typedef enum : NSUInteger {
    RCLoginChildVCStyleVerifierLogin,
    RCLoginChildVCStylePasswordLogin,
} RCLoginChildVCStyle;

@class RCLoginChildVC;
@protocol RCLoginChildVCDelegate <NSObject>

- (void)clickLoginBtnOnRCLoginChildVC:(RCLoginChildVC *)loginChildVC;

@end


@interface RCLoginChildVC : RCBaseViewController

@property (strong, nonatomic) IBOutlet UITextField *accountTF;
@property (strong, nonatomic) IBOutlet UITextField *passwordTF;

@property (nonatomic, assign) RCLoginChildVCStyle loginStyle;

- (void)zcl_loginAction:(UIButton *)sender;

@end
