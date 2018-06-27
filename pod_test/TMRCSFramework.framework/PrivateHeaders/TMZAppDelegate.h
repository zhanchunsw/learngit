//
//  TMZAppDelegate.h
//  test
//
//  Created by 占 on 2018/2/1.
//  Copyright © 2018年 tima. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TMMainDelegate <NSObject>

//- (void)clickLoginBtnOnRCLoginChildVC:(RCLoginChildVC *)loginChildVC;
- (void)loginSuccess;

@end

@interface TMZAppDelegate : UIResponder

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, weak) id<TMMainDelegate>delegate;



+ (TMZAppDelegate *)shareInstance;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;


- (void)applicationWillResignActive:(UIApplication *)application;


- (void)applicationDidEnterBackground:(UIApplication *)application;


- (void)applicationWillEnterForeground:(UIApplication *)application;


- (void)applicationDidBecomeActive:(UIApplication *)application;


- (void)applicationWillTerminate:(UIApplication *)application;


@end
