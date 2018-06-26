//
//  RLNetWorkEnviromentNumber.h
//  RLLibrary
//
//  Created by Cluy on 2018/6/5.
//  Copyright © 2018年 sun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RLNetWorkEnviromentNumber : NSObject
+ (RLNetWorkEnviromentNumber *)sharedManager;
// 设置网络环境 0 uat 1 生产
@property (nonatomic)NSInteger netWorkEnviromentNumber;
@end
