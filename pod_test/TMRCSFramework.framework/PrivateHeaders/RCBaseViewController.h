//
//  RCBaseViewController.h
//  FFS_New
//
//  Created by 占 on 2017/10/27.
//  Copyright © 2017年 tjtech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCBaseViewController : UIViewController

@property (nonatomic, strong)  UIButton *backActionBtn;

- (void)initUI;

- (void)initData;

/**可以重写返回事件*/
- (void)zcl_navBackAction;

//- (void)zcl_needLoginWithDic:(NSDictionary *)dic;

@end
