//
//  RCRegistVC.h
//  FFS_New
//
//  Created by 占 on 2018/2/4.
//  Copyright © 2018年 tjtech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GetVerifyCodeWidgets.h"

@interface RCRegistVC : RCBaseViewController<UITextFieldDelegate>
@property (strong, nonatomic) IBOutlet UITextField *phoneNumTF;
@property (strong, nonatomic) IBOutlet UITextField *verifyCodeTF;
@property (strong, nonatomic) IBOutlet UITextField *passwordTF;
@property (strong, nonatomic) IBOutlet UITextField *rePasswordTF;
@property (strong, nonatomic) IBOutlet GetVerifyCodeWidgets *verifyCodeView;
@property (strong, nonatomic) IBOutlet UIButton *registBtn;
@property (strong, nonatomic) IBOutlet UIView *holdView;

//@property (strong, nonatomic) IBOutlet UIButton *userProtocalBtn;


@end
